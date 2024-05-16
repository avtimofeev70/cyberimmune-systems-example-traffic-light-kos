
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Files required for transport initialization. */
#include <coresrv/nk/transport-kos.h>
#include <coresrv/sl/sl_api.h>

/* EDL description of the LightsGPIO entity. */
#include <traffic_light/LightsGPIO.edl.h>

#include <assert.h>

/*
 * ADD BLOCK INCLUDE
 */
#include <string.h>
#define NK_USE_UNQUALIFIED_NAMES
#include <traffic_light/IDiagnosticsMessage.idl.h>

/* Type of interface implementing object. */
typedef struct IModeImpl {
    struct traffic_light_IMode base;     /* Base interface of object */
    rtl_uint32_t step;                   /* Extra parameters */
} IModeImpl;

/* Mode method implementation. */
static nk_err_t FMode_impl(struct traffic_light_IMode *self,
                          const struct traffic_light_IMode_FMode_req *req,
                          const struct nk_arena *req_arena,
                          traffic_light_IMode_FMode_res *res,
                          struct nk_arena *res_arena)
{
    IModeImpl *impl = (IModeImpl *)self;
    /**
     * Increment value in control system request by
     * one step and include into result argument that will be
     * sent to the control system in the lights gpio response.
     */
    res->result = req->value + impl->step;
    return NK_EOK;
}

/**
 * IMode object constructor.
 * step is the number by which the input value is increased.
 */
static struct traffic_light_IMode *CreateIModeImpl(rtl_uint32_t step)
{
    /* Table of implementations of IMode interface methods. */
    static const struct traffic_light_IMode_ops ops = {
        .FMode = FMode_impl
    };

    /* Interface implementing object. */
    static struct IModeImpl impl = {
        .base = {&ops}
    };

    impl.step = step;

    return &impl.base;
}


/*
 * Communication with 'Diagnostics' 
 */

/*
typedef struct traffic_light_DiagnosticsMessage_proxy {
            struct traffic_light_DiagnosticsMessage base;
            struct nk_transport *transport;
            nk_iid_t iid;
        } traffic_light_DiagnosticsMessage_proxy;
*/

/* Type of object. */
typedef struct transport_data {
    uint32_t idx;
    NkKosTransport transport;
    IDiagnosticsMessage_proxy proxy;
    char ServiceLocatorName[64];
    char ServiceLocatorRiidName[64];
	nk_arena reqArena;
} transport_data;

nk_err_t DiagnosticsMessage_SendDiagnosticsMessage_text(struct traffic_light_IDiagnosticsMessage *self,
                                                        nk_arena* reqArena,
                                                        char* message_text)
{
    IDiagnosticsMessage_SendDiagnosticsMessage_req req;
    IDiagnosticsMessage_SendDiagnosticsMessage_res res;

    nk_arena_reset(reqArena);

    nk_ptr_t *message = nk_arena_alloc(nk_ptr_t, reqArena, &req.message, 1);
    if (message == RTL_NULL)
        return -1;

    nk_char_t *str = nk_arena_alloc(nk_char_t, reqArena, &message[0], (nk_size_t)(strlen(message_text) + 1));
    if (str == RTL_NULL)
        return -1;

    strncpy(str, message_text, (rtl_size_t)(strlen(message_text) + 1));
    return IDiagnosticsMessage_SendDiagnosticsMessage(self, &req, reqArena, &res, RTL_NULL);    
}                                                                 

int message_obj(transport_data *obj, char **argv)
{
	if (!strcmp(argv[0], "init"))
	{
		obj->idx = 0;
        
        char reqBufferDiagnostics[IDiagnosticsMessage_SendDiagnosticsMessage_req_arena_size];
		nk_arena reqArena = NK_ARENA_INITIALIZER(reqBufferDiagnostics, reqBufferDiagnostics + sizeof(reqBufferDiagnostics));
        obj->reqArena = reqArena;    

		Handle handleConnect = ServiceLocatorConnect(obj->ServiceLocatorName);
		assert(handleConnect != INVALID_HANDLE);

		NkKosTransport_Init(&obj->transport, handleConnect, NK_NULL, 0);
		
		nk_iid_t riid = ServiceLocatorGetRiid(handleConnect, obj->ServiceLocatorRiidName);
		assert(riid != INVALID_RIID);

		IDiagnosticsMessage_proxy_init(&obj->proxy, &obj->transport.base, riid);
        return 1;

	} else if (!strcmp(argv[0], "send")) {

        int result_code = atoi(argv[1]) & 0xffff;

        static char* map_dict[] = {"black", "red", "yellow", "red+yellow", 
                  "green", "green+red", "green+yellow", "red+yellow+green", 
                  "black blinking", "red blinking", "yellow blinking", "red+yellow blinking", 
                  "green blinking", "green+red blinking", "green+yellow blinking", "red+yellow+green blinking"};     

        static char data[traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req_message_size] = {0};
        if (snprintf(data, sizeof(data),
            "Message #%u: first light -- %s, second light -- %s", ++obj->idx, map_dict[result_code & 0xff], map_dict[result_code>>8]) < 0)
            return -1;

        return DiagnosticsMessage_SendDiagnosticsMessage_text(&obj->proxy.base, &obj->reqArena, data);
	} else {
		/* unknown command */
		return -1;
	}

    return 0;
}

/* Lights GPIO entry point. */
int main(void)
{
	NkKosTransport transport;
    ServiceId iid;

    /* Get lights gpio IPC handle of "lights_gpio_connection". */
    Handle handle = ServiceLocatorRegister("lights_gpio_connection", NULL, 0, &iid);
    assert(handle != INVALID_HANDLE);

    /* Initialize transport to control system. */
    NkKosTransport_Init(&transport, handle, NK_NULL, 0);

    /**
     * Prepare the structures of the request to the lights gpio entity: constant
     * part and arena. Because none of the methods of the lights gpio entity has
     * sequence type arguments, only constant parts of the
     * request and response are used. Arenas are effectively unused. However,
     * valid arenas of the request and response must be passed to
     * lights gpio transport methods (nk_transport_recv, nk_transport_reply) and
     * to the lights gpio method.
     */
    traffic_light_LightsGPIO_entity_req req;
    char req_buffer[traffic_light_LightsGPIO_entity_req_arena_size];
    struct nk_arena req_arena = NK_ARENA_INITIALIZER(req_buffer,
                                        req_buffer + sizeof(req_buffer));

    /* Prepare response structures: constant part and arena. */
    traffic_light_LightsGPIO_entity_res res;
    char res_buffer[traffic_light_LightsGPIO_entity_res_arena_size];
    struct nk_arena res_arena = NK_ARENA_INITIALIZER(res_buffer,
                                        res_buffer + sizeof(res_buffer));

    /**
     * Initialize mode component dispatcher. 3 is the value of the step,
     * which is the number by which the input value is increased.
     */
    traffic_light_CMode_component component;
    traffic_light_CMode_component_init(&component, CreateIModeImpl(0x1000000));

    /* Initialize lights gpio entity dispatcher. */
    traffic_light_LightsGPIO_entity entity;
    traffic_light_LightsGPIO_entity_init(&entity, &component);

	transport_data diagnostic_transport_data;
    strcpy(diagnostic_transport_data.ServiceLocatorName, "diagnostics_connection");
    strcpy(diagnostic_transport_data.ServiceLocatorRiidName, "traffic_light.Diagnostics.sendMessage");
    
    char* command [3];
    command[0] = (char*)malloc(10);
    command[1] = (char*)malloc(10);

    sprintf(command[0], "%s", "init");
	message_obj(&diagnostic_transport_data, command);
	
    fprintf(stderr, "Hello I'm LightsGPIO\n");

    /* Dispatch loop implementation. */
    do
    {
        /* Flush request/response buffers. */
        nk_req_reset(&req);
        nk_arena_reset(&req_arena);
        nk_arena_reset(&res_arena);

        /* Wait for request to lights gpio entity. */
        if (nk_transport_recv(&transport.base,
                              &req.base_,
                              &req_arena) != NK_EOK) {
            fprintf(stderr, "nk_transport_recv error\n");
        } else {
            /**
             * Handle received request by calling implementation Mode_impl
             * of the requested Mode interface method.
             */
            traffic_light_LightsGPIO_entity_dispatch(&entity, &req.base_, &req_arena,
                                        &res.base_, &res_arena);
		    
            sprintf(command[0], "%s", "send");
		    sprintf(command[1], "%d", res.lightsGpio_mode.FMode.res_.result);
			message_obj(&diagnostic_transport_data, command);
        }

        /* Send response. */
        if (nk_transport_reply(&transport.base,
                               &res.base_,
                               &res_arena) != NK_EOK) {
            fprintf(stderr, "nk_transport_reply error\n");
        }
    }
    while (true);

    return EXIT_SUCCESS;
}