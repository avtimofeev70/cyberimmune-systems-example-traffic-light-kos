#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt8__RAWTYPE__
#define ____UInt8__RAWTYPE__
nk_static_assert(sizeof(nk_uint8_t) == 1, bad_nk_uint8_t_size);
nk_static_assert(nk_alignof(nk_uint8_t) == 1, bad_nk_uint8_t_align);
#endif /* ____UInt8__RAWTYPE__ */

#ifndef ____SInt32__RAWTYPE__
#define ____SInt32__RAWTYPE__
nk_static_assert(sizeof(nk_sint32_t) == 4, bad_nk_sint32_t_size);
nk_static_assert(nk_alignof(nk_sint32_t) == 4, bad_nk_sint32_t_align);
#endif /* ____SInt32__RAWTYPE__ */

#ifndef ____UInt32__RAWTYPE__
#define ____UInt32__RAWTYPE__
nk_static_assert(sizeof(nk_uint32_t) == 4, bad_nk_uint32_t_size);
nk_static_assert(nk_alignof(nk_uint32_t) == 4, bad_nk_uint32_t_align);
#endif /* ____UInt32__RAWTYPE__ */

#ifndef __kl__Klog__INTERFACE__
#define __kl__Klog__INTERFACE__
enum {
    kl_Klog_write_mid,
    kl_Klog_mid_max,
};
enum {
    kl_Klog_write_req_msg_size = 1024,
    kl_Klog_write_req_arena_size = 1024,
    kl_Klog_write_res_arena_size = 0,
    kl_Klog_write_req_handles = 0,
    kl_Klog_write_res_handles = 0,
    kl_Klog_write_err_handles = 0,
    kl_Klog_req_arena_size = 1024,
    kl_Klog_res_arena_size = 0,
    kl_Klog_arena_size = 1024,
    kl_Klog_req_handles = 0,
    kl_Klog_res_handles = 0,
    kl_Klog_err_handles = 0,
};
typedef struct __nk_packed kl_Klog_write_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t id;
            __nk_alignas(4) nk_uint32_t reason;
            __nk_alignas(4) nk_ptr_t msg;
        } kl_Klog_write_req;
#pragma pack(push, 8) /* kl_Klog_write_res */
typedef struct kl_Klog_write_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_Klog_write_err;
typedef struct kl_Klog_write_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_Klog_write_err err_;
            };
        } kl_Klog_write_res;
#pragma pack(pop) /* kl_Klog_write_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Klog_write_mid kl_Klog_write_mid
#define Klog_mid_max kl_Klog_mid_max
#define Klog_write_req_msg_size kl_Klog_write_req_msg_size
#define Klog_write_req_arena_size kl_Klog_write_req_arena_size
#define Klog_write_res_arena_size kl_Klog_write_res_arena_size
#define Klog_write_req_handles kl_Klog_write_req_handles
#define Klog_write_res_handles kl_Klog_write_res_handles
#define Klog_write_err_handles kl_Klog_write_err_handles
#define Klog_req_arena_size kl_Klog_req_arena_size
#define Klog_res_arena_size kl_Klog_res_arena_size
#define Klog_arena_size kl_Klog_arena_size
#define Klog_req_handles kl_Klog_req_handles
#define Klog_res_handles kl_Klog_res_handles
#define Klog_err_handles kl_Klog_err_handles
#define Klog_write_req kl_Klog_write_req
#define Klog_write_res kl_Klog_write_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Klog__INTERFACE__ */

#ifndef __kl__Klog__COMPONENT_ENDPOINTS__
#define __kl__Klog__COMPONENT_ENDPOINTS__
enum {
    kl_Klog_audit_iid,
    kl_Klog_iidMax,
};
enum {
    kl_Klog_iidOffset = 0,
};
enum {
    kl_Klog_securityIidMax,
};
enum {
    kl_Klog_component_req_arena_size = 1024,
    kl_Klog_component_res_arena_size = 0,
    kl_Klog_component_arena_size = 1024,
    kl_Klog_component_req_handles = 0,
    kl_Klog_component_res_handles = 0,
    kl_Klog_component_err_handles = 0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Klog_audit_iid kl_Klog_audit_iid
#define Klog_iidMax kl_Klog_iidMax
#define Klog_iidOffset kl_Klog_iidOffset
#define Klog_securityIidMax kl_Klog_securityIidMax
#define Klog_component_req_arena_size kl_Klog_component_req_arena_size
#define Klog_component_res_arena_size kl_Klog_component_res_arena_size
#define Klog_component_arena_size kl_Klog_component_arena_size
#define Klog_component_req_handles kl_Klog_component_req_handles
#define Klog_component_res_handles kl_Klog_component_res_handles
#define Klog_component_err_handles kl_Klog_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Klog__COMPONENT_ENDPOINTS__ */

#ifndef __traffic_light__KlogEntity__COMPONENT_ENDPOINTS__
#define __traffic_light__KlogEntity__COMPONENT_ENDPOINTS__
enum {
    traffic_light_KlogEntity_klog_audit_iid,
    traffic_light_KlogEntity_iidMax,
};
enum {
    traffic_light_KlogEntity_iidOffset = 0,
    traffic_light_KlogEntity_klog_iidOffset = 0,
};
enum {
    traffic_light_KlogEntity_securityIidMax,
};
enum {
    traffic_light_KlogEntity_component_req_arena_size =
    1024,
    traffic_light_KlogEntity_component_res_arena_size =
    0,
    traffic_light_KlogEntity_component_arena_size =
    1024,
    traffic_light_KlogEntity_component_req_handles =
    0,
    traffic_light_KlogEntity_component_res_handles =
    0,
    traffic_light_KlogEntity_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define KlogEntity_klog_audit_iid traffic_light_KlogEntity_klog_audit_iid
#define KlogEntity_iidMax traffic_light_KlogEntity_iidMax
#define KlogEntity_iidOffset traffic_light_KlogEntity_iidOffset
#define KlogEntity_klog_iidOffset traffic_light_KlogEntity_klog_iidOffset
#define KlogEntity_securityIidMax traffic_light_KlogEntity_securityIidMax
#define KlogEntity_component_req_arena_size traffic_light_KlogEntity_component_req_arena_size
#define KlogEntity_component_res_arena_size traffic_light_KlogEntity_component_res_arena_size
#define KlogEntity_component_arena_size traffic_light_KlogEntity_component_arena_size
#define KlogEntity_component_req_handles traffic_light_KlogEntity_component_req_handles
#define KlogEntity_component_res_handles traffic_light_KlogEntity_component_res_handles
#define KlogEntity_component_err_handles traffic_light_KlogEntity_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__KlogEntity__COMPONENT_ENDPOINTS__ */

#ifndef __traffic_light__KlogEntity__TASK_ENDPOINTS__
#define __traffic_light__KlogEntity__TASK_ENDPOINTS__
enum {
    traffic_light_KlogEntity_entity_req_arena_size =
    traffic_light_KlogEntity_component_req_arena_size,
    traffic_light_KlogEntity_entity_res_arena_size =
    traffic_light_KlogEntity_component_res_arena_size,
    traffic_light_KlogEntity_entity_arena_size =
    traffic_light_KlogEntity_component_arena_size,
    traffic_light_KlogEntity_entity_req_handles =
    traffic_light_KlogEntity_component_req_handles,
    traffic_light_KlogEntity_entity_res_handles =
    traffic_light_KlogEntity_component_res_handles,
    traffic_light_KlogEntity_entity_err_handles =
    traffic_light_KlogEntity_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define KlogEntity_entity_req_arena_size traffic_light_KlogEntity_entity_req_arena_size
#define KlogEntity_entity_res_arena_size traffic_light_KlogEntity_entity_res_arena_size
#define KlogEntity_entity_arena_size traffic_light_KlogEntity_entity_arena_size
#define KlogEntity_entity_req_handles traffic_light_KlogEntity_entity_req_handles
#define KlogEntity_entity_res_handles traffic_light_KlogEntity_entity_res_handles
#define KlogEntity_entity_err_handles traffic_light_KlogEntity_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__KlogEntity__TASK_ENDPOINTS__ */

#ifndef __kl__Klog__VTABLE__
#define __kl__Klog__VTABLE__
typedef struct kl_Klog {
            const struct kl_Klog_ops *ops;
        } kl_Klog;
typedef nk_err_t
kl_Klog_write_fn(struct kl_Klog *, const
                 struct kl_Klog_write_req *, const
                 struct nk_arena *,
                 struct kl_Klog_write_res *,
                 struct nk_arena *);
typedef struct kl_Klog_ops {
            kl_Klog_write_fn *write;
        } kl_Klog_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Klog_write_fn kl_Klog_write_fn
#define Klog_ops kl_Klog_ops
#define Klog kl_Klog
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Klog__VTABLE__ */

#ifndef __kl__Klog__SERVER__
#define __kl__Klog__SERVER__
typedef union kl_Klog_req {
            struct nk_message base_;
            struct kl_Klog_write_req write;
        } kl_Klog_req;
typedef union kl_Klog_res {
            struct nk_message base_;
            struct kl_Klog_write_res write;
        } kl_Klog_res;
static inline
nk_err_t kl_Klog_interface_dispatch(struct kl_Klog *impl,
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
            
          case kl_Klog_write_mid:
            {
                struct kl_Klog_write_res *res_ =
                                         (struct kl_Klog_write_res *) res;
                
                rc = impl->ops->write(impl, (const
                                             struct kl_Klog_write_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_Klog_write_res_handles);
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
#define Klog_req kl_Klog_req
#define Klog_res kl_Klog_res
#define Klog_interface_dispatch kl_Klog_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Klog__SERVER__ */

#ifndef __kl__Klog__COMPONENT_SERVER_TYPES__
#define __kl__Klog__COMPONENT_SERVER_TYPES__
typedef struct kl_Klog_component {
            struct kl_Klog *audit;
        } kl_Klog_component;
#endif /* __kl__Klog__COMPONENT_SERVER_TYPES__ */

#ifndef __traffic_light__KlogEntity__COMPONENT_SERVER_TYPES__
#define __traffic_light__KlogEntity__COMPONENT_SERVER_TYPES__
typedef struct traffic_light_KlogEntity_component {
            struct kl_Klog_component *klog;
        } traffic_light_KlogEntity_component;
#endif /* __traffic_light__KlogEntity__COMPONENT_SERVER_TYPES__ */

#ifndef __kl__Klog__COMPONENT_SERVER_DISPATCHER__
#define __kl__Klog__COMPONENT_SERVER_DISPATCHER__
static inline
void kl_Klog_component_init(struct kl_Klog_component *self,
                            struct kl_Klog *audit)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->audit = audit;
}
typedef union kl_Klog_component_req {
            struct nk_message base_;
            kl_Klog_req audit;
        } kl_Klog_component_req;
typedef union kl_Klog_component_res {
            struct nk_message base_;
            kl_Klog_res audit;
        } kl_Klog_component_res;
static inline
nk_err_t kl_Klog_component_dispatch(struct kl_Klog_component *self,
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
        
      case kl_Klog_audit_iid:
        return kl_Klog_interface_dispatch(self->audit,
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
#define Klog_component kl_Klog_component
#define Klog_component_init kl_Klog_component_init
#define Klog_component_req kl_Klog_component_req
#define Klog_component_res kl_Klog_component_res
#define Klog_component_dispatch kl_Klog_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Klog__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __traffic_light__KlogEntity__COMPONENT_SERVER_DISPATCHER__
#define __traffic_light__KlogEntity__COMPONENT_SERVER_DISPATCHER__
static inline
void traffic_light_KlogEntity_component_init(struct traffic_light_KlogEntity_component *self,
                                             struct kl_Klog_component *klog)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->klog = klog;
}
typedef union traffic_light_KlogEntity_component_req {
            struct nk_message base_;
            kl_Klog_req klog_audit;
        } traffic_light_KlogEntity_component_req;
typedef union traffic_light_KlogEntity_component_res {
            struct nk_message base_;
            kl_Klog_res klog_audit;
        } traffic_light_KlogEntity_component_res;
static inline
nk_err_t traffic_light_KlogEntity_component_dispatch(struct traffic_light_KlogEntity_component *self,
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
        
      case traffic_light_KlogEntity_klog_audit_iid:
        return kl_Klog_interface_dispatch(self->klog->audit,
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
#define KlogEntity_component traffic_light_KlogEntity_component
#define KlogEntity_component_init traffic_light_KlogEntity_component_init
#define KlogEntity_component_req traffic_light_KlogEntity_component_req
#define KlogEntity_component_res traffic_light_KlogEntity_component_res
#define KlogEntity_component_dispatch traffic_light_KlogEntity_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__KlogEntity__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __traffic_light__KlogEntity__ENTITY_SERVER__
#define __traffic_light__KlogEntity__ENTITY_SERVER__
#define traffic_light_KlogEntity_entity_res traffic_light_KlogEntity_component_res
#define traffic_light_KlogEntity_entity_req traffic_light_KlogEntity_component_req
#define traffic_light_KlogEntity_entity traffic_light_KlogEntity_component
static inline
void traffic_light_KlogEntity_entity_init(struct traffic_light_KlogEntity_entity *self,
                                          struct kl_Klog_component *klog)
{
    traffic_light_KlogEntity_component_init(self,
                                            klog);
}
static inline
nk_err_t traffic_light_KlogEntity_entity_dispatch(struct traffic_light_KlogEntity_entity *self,
                                                  const
                                                  struct nk_message *req,
                                                  const
                                                  struct nk_arena *req_arena,
                                                  struct nk_message *res,
                                                  struct nk_arena *res_arena)
{
    return traffic_light_KlogEntity_component_dispatch(self,
                                                       0,
                                                       req,
                                                       req_arena,
                                                       res,
                                                       res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define KlogEntity_entity traffic_light_KlogEntity_entity
#define KlogEntity_entity_init traffic_light_KlogEntity_entity_init
#define KlogEntity_entity_req traffic_light_KlogEntity_entity_req
#define KlogEntity_entity_res traffic_light_KlogEntity_entity_res
#define KlogEntity_entity_dispatch traffic_light_KlogEntity_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__KlogEntity__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

