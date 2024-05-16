#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt8__RAWTYPE__
#define ____UInt8__RAWTYPE__
nk_static_assert(sizeof(nk_uint8_t) == 1, bad_nk_uint8_t_size);
nk_static_assert(nk_alignof(nk_uint8_t) == 1, bad_nk_uint8_t_align);
#endif /* ____UInt8__RAWTYPE__ */

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

#ifndef __traffic_light__CDiagnosticsMessage__COMPONENT_ENDPOINTS__
#define __traffic_light__CDiagnosticsMessage__COMPONENT_ENDPOINTS__
enum {
    traffic_light_CDiagnosticsMessage_dmessage_iid,
    traffic_light_CDiagnosticsMessage_iidMax,
};
enum {
    traffic_light_CDiagnosticsMessage_iidOffset =
    0,
};
enum {
    traffic_light_CDiagnosticsMessage_securityIidMax,
};
enum {
    traffic_light_CDiagnosticsMessage_component_req_arena_size =
    257,
    traffic_light_CDiagnosticsMessage_component_res_arena_size =
    0,
    traffic_light_CDiagnosticsMessage_component_arena_size =
    257,
    traffic_light_CDiagnosticsMessage_component_req_handles =
    0,
    traffic_light_CDiagnosticsMessage_component_res_handles =
    0,
    traffic_light_CDiagnosticsMessage_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CDiagnosticsMessage_dmessage_iid traffic_light_CDiagnosticsMessage_dmessage_iid
#define CDiagnosticsMessage_iidMax traffic_light_CDiagnosticsMessage_iidMax
#define CDiagnosticsMessage_iidOffset traffic_light_CDiagnosticsMessage_iidOffset
#define CDiagnosticsMessage_securityIidMax traffic_light_CDiagnosticsMessage_securityIidMax
#define CDiagnosticsMessage_component_req_arena_size traffic_light_CDiagnosticsMessage_component_req_arena_size
#define CDiagnosticsMessage_component_res_arena_size traffic_light_CDiagnosticsMessage_component_res_arena_size
#define CDiagnosticsMessage_component_arena_size traffic_light_CDiagnosticsMessage_component_arena_size
#define CDiagnosticsMessage_component_req_handles traffic_light_CDiagnosticsMessage_component_req_handles
#define CDiagnosticsMessage_component_res_handles traffic_light_CDiagnosticsMessage_component_res_handles
#define CDiagnosticsMessage_component_err_handles traffic_light_CDiagnosticsMessage_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__CDiagnosticsMessage__COMPONENT_ENDPOINTS__ */

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

#ifndef __traffic_light__CDiagnosticsMessage__COMPONENT_SERVER_TYPES__
#define __traffic_light__CDiagnosticsMessage__COMPONENT_SERVER_TYPES__
typedef struct traffic_light_CDiagnosticsMessage_component {
            struct traffic_light_IDiagnosticsMessage *dmessage;
        }
traffic_light_CDiagnosticsMessage_component;
#endif /* __traffic_light__CDiagnosticsMessage__COMPONENT_SERVER_TYPES__ */

#ifndef __traffic_light__CDiagnosticsMessage__COMPONENT_SERVER_DISPATCHER__
#define __traffic_light__CDiagnosticsMessage__COMPONENT_SERVER_DISPATCHER__
static inline
void traffic_light_CDiagnosticsMessage_component_init(struct traffic_light_CDiagnosticsMessage_component *self,
                                                      struct traffic_light_IDiagnosticsMessage *dmessage)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->dmessage = dmessage;
}
typedef union traffic_light_CDiagnosticsMessage_component_req {
            struct nk_message base_;
            traffic_light_IDiagnosticsMessage_req dmessage;
        }
traffic_light_CDiagnosticsMessage_component_req;
typedef union traffic_light_CDiagnosticsMessage_component_res {
            struct nk_message base_;
            traffic_light_IDiagnosticsMessage_res dmessage;
        }
traffic_light_CDiagnosticsMessage_component_res;
static inline
nk_err_t traffic_light_CDiagnosticsMessage_component_dispatch(struct traffic_light_CDiagnosticsMessage_component *self,
                                                              nk_iid_t iidOffset,
                                                              const
                                                              struct nk_message *req,
                                                              const
                                                              struct nk_arena *req_arena,
                                                              struct nk_message *res,
                                                              struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(self);
    nk_unused(req_arena);
    nk_unused(res);
    nk_unused(res_arena);
    if (req->iid < iidOffset)
        return NK_ENOENT;
    switch (req->iid - iidOffset) {
        
      case traffic_light_CDiagnosticsMessage_dmessage_iid:
        return traffic_light_IDiagnosticsMessage_interface_dispatch(self->dmessage,
                                                                    req->iid,
                                                                    req,
                                                                    req_arena,
                                                                    res,
                                                                    res_arena);
        
      default:
        ;
    }
    return NK_ENOENT;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CDiagnosticsMessage_component traffic_light_CDiagnosticsMessage_component
#define CDiagnosticsMessage_component_init traffic_light_CDiagnosticsMessage_component_init
#define CDiagnosticsMessage_component_req traffic_light_CDiagnosticsMessage_component_req
#define CDiagnosticsMessage_component_res traffic_light_CDiagnosticsMessage_component_res
#define CDiagnosticsMessage_component_dispatch traffic_light_CDiagnosticsMessage_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__CDiagnosticsMessage__COMPONENT_SERVER_DISPATCHER__ */

#pragma GCC diagnostic pop

