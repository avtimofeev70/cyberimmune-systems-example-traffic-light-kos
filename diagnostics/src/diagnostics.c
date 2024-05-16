#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define NK_USE_UNQUALIFIED_NAMES
#include "traffic_light/Diagnostics.edl.h"

#include <coresrv/nk/transport-kos.h>
#include <coresrv/sl/sl_api.h>

static nk_err_t DiagnosticsMessageImpl(
                __rtl_unused struct DiagnosticsMessage         *self,
                const DiagnosticsMessage_SendDiagnosticsMessage_req        *req,
                const struct nk_arena             *reqArena,
                __rtl_unused DiagnosticsMessage_SendDiagnosticsMessage_res *res,
                __rtl_unused struct nk_arena      *resArena) {
    nk_uint32_t msgCount = 0;
    nk_ptr_t *messages = nk_arena_get(nk_ptr_t, reqArena, &(req->message), &msgCount);
    if (messages == RTL_NULL)
        return NK_EBADMSG;

    nk_uint32_t msgLen = 0;
    nk_char_t *msg = nk_arena_get(nk_char_t, reqArena, &messages[0], &msgLen);
    if (msg == RTL_NULL)
        return NK_EBADMSG;

    fprintf(stderr, "Diagnostics received message '%s'\n", msg);

    return NK_EOK;
}

static struct DiagnosticsMessage *CreateIDiagnosticsMessageImpl(void) {
    static const struct DiagnosticsMessage_ops Ops = {
        .SendDiagnosticsMessage = DiagnosticsMessageImpl
    };

    static DiagnosticsMessage obj = {
        .ops = &Ops
    };

    return &obj;
}

int main(void) {
    ServiceId iid;
    Handle handle = ServiceLocatorRegister("diagnostics_connection", NULL, 0, &iid);
    assert(handle != INVALID_HANDLE);

    NkKosTransport transport;
    NkKosTransport_Init(&transport, handle, NK_NULL, 0);

    Diagnostics_entity_req req;
    Diagnostics_entity_res res;
    Diagnostics_entity entity;
    Diagnostics_entity_init(&entity, CreateIDiagnosticsMessageImpl());
    char reqBuffer[Diagnostics_entity_req_arena_size];
    struct nk_arena reqArena = NK_ARENA_INITIALIZER(reqBuffer, reqBuffer + sizeof(reqBuffer));

    fprintf(stderr, "Hello I'm Diagnostics\n");

    while (1) {
        nk_req_reset(&req);
        nk_arena_reset(&reqArena);
        if (nk_transport_recv(&transport.base, &req.base_, &reqArena) == NK_EOK)
            Diagnostics_entity_dispatch( &entity, &req.base_, &reqArena, &res.base_, RTL_NULL);

        nk_transport_reply(&transport.base, &res.base_, RTL_NULL);
    }

    return EXIT_SUCCESS;
}