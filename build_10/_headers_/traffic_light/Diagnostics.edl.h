#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt8__RAWTYPE__
#define ____UInt8__RAWTYPE__
nk_static_assert(sizeof(nk_uint8_t) == 1, bad_nk_uint8_t_size);
nk_static_assert(nk_alignof(nk_uint8_t) == 1, bad_nk_uint8_t_align);
#endif /* ____UInt8__RAWTYPE__ */

#ifndef __traffic_light__DiagnosticsMessage__INTERFACE__
#define __traffic_light__DiagnosticsMessage__INTERFACE__
enum {
    traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_mid,
    traffic_light_DiagnosticsMessage_mid_max,
};
enum {
    traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req_message_size =
    257,
    traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req_arena_size =
    257,
    traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res_arena_size =
    0,
    traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req_handles =
    0,
    traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res_handles =
    0,
    traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_err_handles =
    0,
    traffic_light_DiagnosticsMessage_req_arena_size =
    257,
    traffic_light_DiagnosticsMessage_res_arena_size =
    0,
    traffic_light_DiagnosticsMessage_arena_size =
    257,
    traffic_light_DiagnosticsMessage_req_handles =
    0,
    traffic_light_DiagnosticsMessage_res_handles =
    0,
    traffic_light_DiagnosticsMessage_err_handles =
    0,
};
typedef struct __nk_packed traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_ptr_t message;
        }
traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req;
#pragma pack(push, 8) /* traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res */
typedef struct traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_err;
typedef struct traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                } res_;
                struct traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_err err_;
            };
        }
traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res;
#pragma pack(pop) /* traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define DiagnosticsMessage_SendDiagnosticsMessage_mid traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_mid
#define DiagnosticsMessage_mid_max traffic_light_DiagnosticsMessage_mid_max
#define DiagnosticsMessage_SendDiagnosticsMessage_req_message_size traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req_message_size
#define DiagnosticsMessage_SendDiagnosticsMessage_req_arena_size traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req_arena_size
#define DiagnosticsMessage_SendDiagnosticsMessage_res_arena_size traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res_arena_size
#define DiagnosticsMessage_SendDiagnosticsMessage_req_handles traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req_handles
#define DiagnosticsMessage_SendDiagnosticsMessage_res_handles traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res_handles
#define DiagnosticsMessage_SendDiagnosticsMessage_err_handles traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_err_handles
#define DiagnosticsMessage_req_arena_size traffic_light_DiagnosticsMessage_req_arena_size
#define DiagnosticsMessage_res_arena_size traffic_light_DiagnosticsMessage_res_arena_size
#define DiagnosticsMessage_arena_size traffic_light_DiagnosticsMessage_arena_size
#define DiagnosticsMessage_req_handles traffic_light_DiagnosticsMessage_req_handles
#define DiagnosticsMessage_res_handles traffic_light_DiagnosticsMessage_res_handles
#define DiagnosticsMessage_err_handles traffic_light_DiagnosticsMessage_err_handles
#define DiagnosticsMessage_SendDiagnosticsMessage_req traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req
#define DiagnosticsMessage_SendDiagnosticsMessage_res traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__DiagnosticsMessage__INTERFACE__ */

#ifndef __traffic_light__Diagnostics__COMPONENT_ENDPOINTS__
#define __traffic_light__Diagnostics__COMPONENT_ENDPOINTS__
enum {
    traffic_light_Diagnostics_sendMessage_iid,
    traffic_light_Diagnostics_iidMax,
};
enum {
    traffic_light_Diagnostics_iidOffset = 0,
};
enum {
    traffic_light_Diagnostics_securityIidMax,
};
enum {
    traffic_light_Diagnostics_component_req_arena_size =
    257,
    traffic_light_Diagnostics_component_res_arena_size =
    0,
    traffic_light_Diagnostics_component_arena_size =
    257,
    traffic_light_Diagnostics_component_req_handles =
    0,
    traffic_light_Diagnostics_component_res_handles =
    0,
    traffic_light_Diagnostics_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Diagnostics_sendMessage_iid traffic_light_Diagnostics_sendMessage_iid
#define Diagnostics_iidMax traffic_light_Diagnostics_iidMax
#define Diagnostics_iidOffset traffic_light_Diagnostics_iidOffset
#define Diagnostics_securityIidMax traffic_light_Diagnostics_securityIidMax
#define Diagnostics_component_req_arena_size traffic_light_Diagnostics_component_req_arena_size
#define Diagnostics_component_res_arena_size traffic_light_Diagnostics_component_res_arena_size
#define Diagnostics_component_arena_size traffic_light_Diagnostics_component_arena_size
#define Diagnostics_component_req_handles traffic_light_Diagnostics_component_req_handles
#define Diagnostics_component_res_handles traffic_light_Diagnostics_component_res_handles
#define Diagnostics_component_err_handles traffic_light_Diagnostics_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__Diagnostics__COMPONENT_ENDPOINTS__ */

#ifndef __traffic_light__Diagnostics__TASK_ENDPOINTS__
#define __traffic_light__Diagnostics__TASK_ENDPOINTS__
enum {
    traffic_light_Diagnostics_entity_req_arena_size =
    traffic_light_Diagnostics_component_req_arena_size,
    traffic_light_Diagnostics_entity_res_arena_size =
    traffic_light_Diagnostics_component_res_arena_size,
    traffic_light_Diagnostics_entity_arena_size =
    traffic_light_Diagnostics_component_arena_size,
    traffic_light_Diagnostics_entity_req_handles =
    traffic_light_Diagnostics_component_req_handles,
    traffic_light_Diagnostics_entity_res_handles =
    traffic_light_Diagnostics_component_res_handles,
    traffic_light_Diagnostics_entity_err_handles =
    traffic_light_Diagnostics_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Diagnostics_entity_req_arena_size traffic_light_Diagnostics_entity_req_arena_size
#define Diagnostics_entity_res_arena_size traffic_light_Diagnostics_entity_res_arena_size
#define Diagnostics_entity_arena_size traffic_light_Diagnostics_entity_arena_size
#define Diagnostics_entity_req_handles traffic_light_Diagnostics_entity_req_handles
#define Diagnostics_entity_res_handles traffic_light_Diagnostics_entity_res_handles
#define Diagnostics_entity_err_handles traffic_light_Diagnostics_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__Diagnostics__TASK_ENDPOINTS__ */

#ifndef __traffic_light__DiagnosticsMessage__VTABLE__
#define __traffic_light__DiagnosticsMessage__VTABLE__
typedef struct traffic_light_DiagnosticsMessage {
            const
            struct traffic_light_DiagnosticsMessage_ops *ops;
        } traffic_light_DiagnosticsMessage;
typedef nk_err_t
traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_fn(struct traffic_light_DiagnosticsMessage *,
                                                           const
                                                           struct traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req *,
                                                           const
                                                           struct nk_arena *,
                                                           struct traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res *,
                                                           struct nk_arena *);
typedef struct traffic_light_DiagnosticsMessage_ops {
            traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_fn *SendDiagnosticsMessage;
        } traffic_light_DiagnosticsMessage_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define DiagnosticsMessage_SendDiagnosticsMessage_fn traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_fn
#define DiagnosticsMessage_ops traffic_light_DiagnosticsMessage_ops
#define DiagnosticsMessage traffic_light_DiagnosticsMessage
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__DiagnosticsMessage__VTABLE__ */

#ifndef __traffic_light__DiagnosticsMessage__SERVER__
#define __traffic_light__DiagnosticsMessage__SERVER__
typedef union traffic_light_DiagnosticsMessage_req {
            struct nk_message base_;
            struct traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req SendDiagnosticsMessage;
        } traffic_light_DiagnosticsMessage_req;
typedef union traffic_light_DiagnosticsMessage_res {
            struct nk_message base_;
            struct traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res SendDiagnosticsMessage;
        } traffic_light_DiagnosticsMessage_res;
static inline
nk_err_t traffic_light_DiagnosticsMessage_interface_dispatch(struct traffic_light_DiagnosticsMessage *impl,
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
            
          case traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_mid:
            {
                struct traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res
                *res_ =
                (struct traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res *) res;
                
                rc =
                    impl->ops->SendDiagnosticsMessage(impl,
                                                      (const
                                                       struct traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_req *) req,
                                                      req_arena,
                                                      res_,
                                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     traffic_light_DiagnosticsMessage_SendDiagnosticsMessage_res_handles);
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
#define DiagnosticsMessage_req traffic_light_DiagnosticsMessage_req
#define DiagnosticsMessage_res traffic_light_DiagnosticsMessage_res
#define DiagnosticsMessage_interface_dispatch traffic_light_DiagnosticsMessage_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__DiagnosticsMessage__SERVER__ */

#ifndef __traffic_light__Diagnostics__COMPONENT_SERVER_TYPES__
#define __traffic_light__Diagnostics__COMPONENT_SERVER_TYPES__
typedef struct traffic_light_Diagnostics_component {
            struct traffic_light_DiagnosticsMessage *sendMessage;
        } traffic_light_Diagnostics_component;
#endif /* __traffic_light__Diagnostics__COMPONENT_SERVER_TYPES__ */

#ifndef __traffic_light__Diagnostics__COMPONENT_SERVER_DISPATCHER__
#define __traffic_light__Diagnostics__COMPONENT_SERVER_DISPATCHER__
static inline
void traffic_light_Diagnostics_component_init(struct traffic_light_Diagnostics_component *self,
                                              struct traffic_light_DiagnosticsMessage *sendMessage)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->sendMessage = sendMessage;
}
typedef union traffic_light_Diagnostics_component_req {
            struct nk_message base_;
            traffic_light_DiagnosticsMessage_req sendMessage;
        } traffic_light_Diagnostics_component_req;
typedef union traffic_light_Diagnostics_component_res {
            struct nk_message base_;
            traffic_light_DiagnosticsMessage_res sendMessage;
        } traffic_light_Diagnostics_component_res;
static inline
nk_err_t traffic_light_Diagnostics_component_dispatch(struct traffic_light_Diagnostics_component *self,
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
        
      case traffic_light_Diagnostics_sendMessage_iid:
        return traffic_light_DiagnosticsMessage_interface_dispatch(self->sendMessage,
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
#define Diagnostics_component traffic_light_Diagnostics_component
#define Diagnostics_component_init traffic_light_Diagnostics_component_init
#define Diagnostics_component_req traffic_light_Diagnostics_component_req
#define Diagnostics_component_res traffic_light_Diagnostics_component_res
#define Diagnostics_component_dispatch traffic_light_Diagnostics_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__Diagnostics__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __traffic_light__Diagnostics__ENTITY_SERVER__
#define __traffic_light__Diagnostics__ENTITY_SERVER__
#define traffic_light_Diagnostics_entity_res traffic_light_Diagnostics_component_res
#define traffic_light_Diagnostics_entity_req traffic_light_Diagnostics_component_req
#define traffic_light_Diagnostics_entity traffic_light_Diagnostics_component
static inline
void traffic_light_Diagnostics_entity_init(struct traffic_light_Diagnostics_entity *self,
                                           struct traffic_light_DiagnosticsMessage *sendMessage)
{
    traffic_light_Diagnostics_component_init(self,
                                             sendMessage);
}
static inline
nk_err_t traffic_light_Diagnostics_entity_dispatch(struct traffic_light_Diagnostics_entity *self,
                                                   const
                                                   struct nk_message *req,
                                                   const
                                                   struct nk_arena *req_arena,
                                                   struct nk_message *res,
                                                   struct nk_arena *res_arena)
{
    return traffic_light_Diagnostics_component_dispatch(self,
                                                        0,
                                                        req,
                                                        req_arena,
                                                        res,
                                                        res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Diagnostics_entity traffic_light_Diagnostics_entity
#define Diagnostics_entity_init traffic_light_Diagnostics_entity_init
#define Diagnostics_entity_req traffic_light_Diagnostics_entity_req
#define Diagnostics_entity_res traffic_light_Diagnostics_entity_res
#define Diagnostics_entity_dispatch traffic_light_Diagnostics_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__Diagnostics__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

