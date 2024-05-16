#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt8__RAWTYPE__
#define ____UInt8__RAWTYPE__
nk_static_assert(sizeof(nk_uint8_t) == 1, bad_nk_uint8_t_size);
nk_static_assert(nk_alignof(nk_uint8_t) == 1, bad_nk_uint8_t_align);
#endif /* ____UInt8__RAWTYPE__ */

#ifndef ____UInt16__RAWTYPE__
#define ____UInt16__RAWTYPE__
nk_static_assert(sizeof(nk_uint16_t) == 2, bad_nk_uint16_t_size);
nk_static_assert(nk_alignof(nk_uint16_t) == 2, bad_nk_uint16_t_align);
#endif /* ____UInt16__RAWTYPE__ */

#ifndef __traffic_light_IDiagnosticsMessage__MaxMessageSize__CONST__
#define __traffic_light_IDiagnosticsMessage__MaxMessageSize__CONST__
#define traffic_light_IDiagnosticsMessage_MaxMessageSize ((nk_uint16_t)(NK_UINT16_C(256)))
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IDiagnosticsMessage_MaxMessageSize traffic_light_IDiagnosticsMessage_MaxMessageSize
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light_IDiagnosticsMessage__MaxMessageSize__CONST__ */

#ifndef __traffic_light__IDiagnosticsMessage__INTERFACE__
#define __traffic_light__IDiagnosticsMessage__INTERFACE__
enum {
    traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_mid,
    traffic_light_IDiagnosticsMessage_mid_max,
};
enum {
    traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req_message_size =
    257,
    traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req_arena_size =
    257,
    traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res_arena_size =
    0,
    traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req_handles =
    0,
    traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res_handles =
    0,
    traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_err_handles =
    0,
    traffic_light_IDiagnosticsMessage_req_arena_size =
    257,
    traffic_light_IDiagnosticsMessage_res_arena_size =
    0,
    traffic_light_IDiagnosticsMessage_arena_size =
    257,
    traffic_light_IDiagnosticsMessage_req_handles =
    0,
    traffic_light_IDiagnosticsMessage_res_handles =
    0,
    traffic_light_IDiagnosticsMessage_err_handles =
    0,
};
typedef struct __nk_packed traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_ptr_t message;
        }
traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req;
#pragma pack(push, 8) /* traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res */
typedef struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_err;
typedef struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                } res_;
                struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_err err_;
            };
        }
traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res;
#pragma pack(pop) /* traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IDiagnosticsMessage_SendDiagnosticsMessage_mid traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_mid
#define IDiagnosticsMessage_mid_max traffic_light_IDiagnosticsMessage_mid_max
#define IDiagnosticsMessage_SendDiagnosticsMessage_req_message_size traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req_message_size
#define IDiagnosticsMessage_SendDiagnosticsMessage_req_arena_size traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req_arena_size
#define IDiagnosticsMessage_SendDiagnosticsMessage_res_arena_size traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res_arena_size
#define IDiagnosticsMessage_SendDiagnosticsMessage_req_handles traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req_handles
#define IDiagnosticsMessage_SendDiagnosticsMessage_res_handles traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res_handles
#define IDiagnosticsMessage_SendDiagnosticsMessage_err_handles traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_err_handles
#define IDiagnosticsMessage_req_arena_size traffic_light_IDiagnosticsMessage_req_arena_size
#define IDiagnosticsMessage_res_arena_size traffic_light_IDiagnosticsMessage_res_arena_size
#define IDiagnosticsMessage_arena_size traffic_light_IDiagnosticsMessage_arena_size
#define IDiagnosticsMessage_req_handles traffic_light_IDiagnosticsMessage_req_handles
#define IDiagnosticsMessage_res_handles traffic_light_IDiagnosticsMessage_res_handles
#define IDiagnosticsMessage_err_handles traffic_light_IDiagnosticsMessage_err_handles
#define IDiagnosticsMessage_SendDiagnosticsMessage_req traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req
#define IDiagnosticsMessage_SendDiagnosticsMessage_res traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__IDiagnosticsMessage__INTERFACE__ */

#ifndef __traffic_light__IDiagnosticsMessage__VTABLE__
#define __traffic_light__IDiagnosticsMessage__VTABLE__
typedef struct traffic_light_IDiagnosticsMessage {
            const
            struct traffic_light_IDiagnosticsMessage_ops *ops;
        } traffic_light_IDiagnosticsMessage;
typedef nk_err_t
traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_fn(struct traffic_light_IDiagnosticsMessage *,
                                                            const
                                                            struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req *,
                                                            const
                                                            struct nk_arena *,
                                                            struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res *,
                                                            struct nk_arena *);
typedef struct traffic_light_IDiagnosticsMessage_ops {
            traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_fn *SendDiagnosticsMessage;
        } traffic_light_IDiagnosticsMessage_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IDiagnosticsMessage_SendDiagnosticsMessage_fn traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_fn
#define IDiagnosticsMessage_ops traffic_light_IDiagnosticsMessage_ops
#define IDiagnosticsMessage traffic_light_IDiagnosticsMessage
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__IDiagnosticsMessage__VTABLE__ */

#ifndef __traffic_light__IDiagnosticsMessage__CLIENT__
#define __traffic_light__IDiagnosticsMessage__CLIENT__
typedef struct traffic_light_IDiagnosticsMessage_proxy {
            struct traffic_light_IDiagnosticsMessage base;
            struct nk_transport *transport;
            nk_iid_t iid;
        } traffic_light_IDiagnosticsMessage_proxy;
static inline
nk_err_t traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_proxy(struct traffic_light_IDiagnosticsMessage_proxy *self,
                                                                        struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req *req,
                                                                        const
                                                                        struct nk_arena *req_arena,
                                                                        struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res *res,
                                                                        struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_mid);
    nk_msg_set_ncaps(req,
                     traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_mid);
    nk_msg_set_ncaps(res,
                     traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
void traffic_light_IDiagnosticsMessage_proxy_init(struct traffic_light_IDiagnosticsMessage_proxy *self,
                                                  struct nk_transport *transport,
                                                  nk_iid_t iid)
{
    static const
    struct traffic_light_IDiagnosticsMessage_ops
    ops =
    {(traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_fn *) &traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_proxy};
    
    nk_assert(self != NK_NULL);
    self->base.ops = &ops;
    self->transport = transport;
    self->iid = iid;
}
static inline
nk_err_t traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage(struct traffic_light_IDiagnosticsMessage *self,
                                                                  struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req *req,
                                                                  const
                                                                  struct nk_arena *req_arena,
                                                                  struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res *res,
                                                                  struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->SendDiagnosticsMessage !=
        NK_NULL);
    return self->ops->SendDiagnosticsMessage(self,
                                             req,
                                             req_arena,
                                             res,
                                             res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IDiagnosticsMessage_SendDiagnosticsMessage_proxy traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_proxy
#define IDiagnosticsMessage_SendDiagnosticsMessage traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage
#define IDiagnosticsMessage_proxy traffic_light_IDiagnosticsMessage_proxy
#define IDiagnosticsMessage_proxy_init traffic_light_IDiagnosticsMessage_proxy_init
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__IDiagnosticsMessage__CLIENT__ */

#ifndef __traffic_light__IDiagnosticsMessage__SERVER__
#define __traffic_light__IDiagnosticsMessage__SERVER__
typedef union traffic_light_IDiagnosticsMessage_req {
            struct nk_message base_;
            struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req SendDiagnosticsMessage;
        } traffic_light_IDiagnosticsMessage_req;
typedef union traffic_light_IDiagnosticsMessage_res {
            struct nk_message base_;
            struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res SendDiagnosticsMessage;
        } traffic_light_IDiagnosticsMessage_res;
static inline
nk_err_t traffic_light_IDiagnosticsMessage_interface_dispatch(struct traffic_light_IDiagnosticsMessage *impl,
                                                              nk_iid_t iid,
                                                              const
                                                              struct nk_message *req,
                                                              const
                                                              struct nk_arena *req_arena,
                                                              struct nk_message *res,
                                                              struct nk_arena *res_arena)
{
    nk_err_t rc = NK_ENOENT;
    nk_iid_t req_iid;
    nk_mid_t req_mid;
    
    nk_assert(impl != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(impl);
    nk_unused(req_arena);
    nk_unused(res_arena);
    if (req->iid == iid) {
        req_iid = req->iid;
        req_mid = req->mid;
        switch (req->mid) {
            
          case traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_mid:
            {
                struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res
                *res_ =
                (struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res *) res;
                
                rc =
                    impl->ops->SendDiagnosticsMessage(impl,
                                                      (const
                                                       struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req *) req,
                                                      req_arena,
                                                      res_,
                                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res_handles);
                }
                break;
            }
            
          default:
            ;
        }
        res->iid = req_iid;
        res->mid = req_mid;
    }
    return rc;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IDiagnosticsMessage_req traffic_light_IDiagnosticsMessage_req
#define IDiagnosticsMessage_res traffic_light_IDiagnosticsMessage_res
#define IDiagnosticsMessage_interface_dispatch traffic_light_IDiagnosticsMessage_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__IDiagnosticsMessage__SERVER__ */

#ifndef __traffic_light__IDiagnosticsMessage__TESTS__
#define __traffic_light__IDiagnosticsMessage__TESTS__
static inline
nk_err_t traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_test_req(struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_req *msg,
                                                                           struct nk_arena *arena,
                                                                           int (*rand)(void),
                                                                           nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    {
        struct {
            const int prob;
            nk_bool_t fail;
        } should_fail[] = {{1, NK_FALSE}, {2,
                                           NK_FALSE}};
        nk_size_t i;
        nk_size_t size =
                  nk_array_size(should_fail);
        int max = should_fail[size - 1].prob;
        int chosen = rand() % max;
        
        for (i = 0; i < size; i++) {
            if (should_fail[i].prob > chosen) {
                should_fail[i].fail = NK_TRUE;
                break;
            }
        }
        {
            nk_uint8_t *string2;
            nk_size_t len1;
            nk_size_t i0;
            
            nk_unused(string2);
            nk_unused(len1);
            nk_unused(i0);
            len1 =
                (nk_size_t) (should_fail[0].fail ? 258 : rand() %
                             258);
            if (len1 > 257)
                *failure = NK_TRUE;
            string2 = nk_arena_alloc(nk_uint8_t,
                                     arena,
                                     &msg->message,
                                     len1);
            if (string2 == NK_NULL)
                return NK_EINVAL;
            for (i0 = 0; i0 < len1; i0++)
                string2[i0] = (nk_uint8_t) rand();
        }
    }
    return NK_EOK;
}
static inline
nk_err_t traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_test_res(struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_res *msg,
                                                                           struct nk_arena *arena,
                                                                           int (*rand)(void),
                                                                           nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    return NK_EOK;
}
static inline
nk_err_t traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_test_err(struct traffic_light_IDiagnosticsMessage_SendDiagnosticsMessage_err *msg,
                                                                           struct nk_arena *arena,
                                                                           int (*rand)(void),
                                                                           nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    return NK_EOK;
}
#endif /* __traffic_light__IDiagnosticsMessage__TESTS__ */

#pragma GCC diagnostic pop

