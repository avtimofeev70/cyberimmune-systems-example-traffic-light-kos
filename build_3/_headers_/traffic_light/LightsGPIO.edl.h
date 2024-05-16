#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt32__RAWTYPE__
#define ____UInt32__RAWTYPE__
nk_static_assert(sizeof(nk_uint32_t) == 4, bad_nk_uint32_t_size);
nk_static_assert(nk_alignof(nk_uint32_t) == 4, bad_nk_uint32_t_align);
#endif /* ____UInt32__RAWTYPE__ */

#ifndef __traffic_light__IMode__INTERFACE__
#define __traffic_light__IMode__INTERFACE__
enum {
    traffic_light_IMode_FMode_mid,
    traffic_light_IMode_mid_max,
};
enum {
    traffic_light_IMode_FMode_req_arena_size = 0,
    traffic_light_IMode_FMode_res_arena_size = 0,
    traffic_light_IMode_FMode_req_handles = 0,
    traffic_light_IMode_FMode_res_handles = 0,
    traffic_light_IMode_FMode_err_handles = 0,
    traffic_light_IMode_req_arena_size = 0,
    traffic_light_IMode_res_arena_size = 0,
    traffic_light_IMode_arena_size = 0,
    traffic_light_IMode_req_handles = 0,
    traffic_light_IMode_res_handles = 0,
    traffic_light_IMode_err_handles = 0,
};
typedef struct __nk_packed traffic_light_IMode_FMode_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t value;
        } traffic_light_IMode_FMode_req;
#pragma pack(push, 8) /* traffic_light_IMode_FMode_res */
typedef struct traffic_light_IMode_FMode_err {
            __nk_alignas(8)
            struct nk_message base_;
        } traffic_light_IMode_FMode_err;
typedef struct traffic_light_IMode_FMode_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t result;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t result;
                } res_;
                struct traffic_light_IMode_FMode_err err_;
            };
        } traffic_light_IMode_FMode_res;
#pragma pack(pop) /* traffic_light_IMode_FMode_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IMode_FMode_mid traffic_light_IMode_FMode_mid
#define IMode_mid_max traffic_light_IMode_mid_max
#define IMode_FMode_req_arena_size traffic_light_IMode_FMode_req_arena_size
#define IMode_FMode_res_arena_size traffic_light_IMode_FMode_res_arena_size
#define IMode_FMode_req_handles traffic_light_IMode_FMode_req_handles
#define IMode_FMode_res_handles traffic_light_IMode_FMode_res_handles
#define IMode_FMode_err_handles traffic_light_IMode_FMode_err_handles
#define IMode_req_arena_size traffic_light_IMode_req_arena_size
#define IMode_res_arena_size traffic_light_IMode_res_arena_size
#define IMode_arena_size traffic_light_IMode_arena_size
#define IMode_req_handles traffic_light_IMode_req_handles
#define IMode_res_handles traffic_light_IMode_res_handles
#define IMode_err_handles traffic_light_IMode_err_handles
#define IMode_FMode_req traffic_light_IMode_FMode_req
#define IMode_FMode_res traffic_light_IMode_FMode_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__IMode__INTERFACE__ */

#ifndef __traffic_light__CMode__COMPONENT_ENDPOINTS__
#define __traffic_light__CMode__COMPONENT_ENDPOINTS__
enum {
    traffic_light_CMode_mode_iid,
    traffic_light_CMode_iidMax,
};
enum {
    traffic_light_CMode_iidOffset = 0,
};
enum {
    traffic_light_CMode_securityIidMax,
};
enum {
    traffic_light_CMode_component_req_arena_size =
    0,
    traffic_light_CMode_component_res_arena_size =
    0,
    traffic_light_CMode_component_arena_size = 0,
    traffic_light_CMode_component_req_handles = 0,
    traffic_light_CMode_component_res_handles = 0,
    traffic_light_CMode_component_err_handles = 0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CMode_mode_iid traffic_light_CMode_mode_iid
#define CMode_iidMax traffic_light_CMode_iidMax
#define CMode_iidOffset traffic_light_CMode_iidOffset
#define CMode_securityIidMax traffic_light_CMode_securityIidMax
#define CMode_component_req_arena_size traffic_light_CMode_component_req_arena_size
#define CMode_component_res_arena_size traffic_light_CMode_component_res_arena_size
#define CMode_component_arena_size traffic_light_CMode_component_arena_size
#define CMode_component_req_handles traffic_light_CMode_component_req_handles
#define CMode_component_res_handles traffic_light_CMode_component_res_handles
#define CMode_component_err_handles traffic_light_CMode_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__CMode__COMPONENT_ENDPOINTS__ */

#ifndef __traffic_light__LightsGPIO__COMPONENT_ENDPOINTS__
#define __traffic_light__LightsGPIO__COMPONENT_ENDPOINTS__
enum {
    traffic_light_LightsGPIO_lightsGpio_mode_iid,
    traffic_light_LightsGPIO_iidMax,
};
enum {
    traffic_light_LightsGPIO_iidOffset = 0,
    traffic_light_LightsGPIO_lightsGpio_iidOffset =
    0,
};
enum {
    traffic_light_LightsGPIO_securityIidMax,
};
enum {
    traffic_light_LightsGPIO_component_req_arena_size =
    0,
    traffic_light_LightsGPIO_component_res_arena_size =
    0,
    traffic_light_LightsGPIO_component_arena_size =
    0,
    traffic_light_LightsGPIO_component_req_handles =
    0,
    traffic_light_LightsGPIO_component_res_handles =
    0,
    traffic_light_LightsGPIO_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define LightsGPIO_lightsGpio_mode_iid traffic_light_LightsGPIO_lightsGpio_mode_iid
#define LightsGPIO_iidMax traffic_light_LightsGPIO_iidMax
#define LightsGPIO_iidOffset traffic_light_LightsGPIO_iidOffset
#define LightsGPIO_lightsGpio_iidOffset traffic_light_LightsGPIO_lightsGpio_iidOffset
#define LightsGPIO_securityIidMax traffic_light_LightsGPIO_securityIidMax
#define LightsGPIO_component_req_arena_size traffic_light_LightsGPIO_component_req_arena_size
#define LightsGPIO_component_res_arena_size traffic_light_LightsGPIO_component_res_arena_size
#define LightsGPIO_component_arena_size traffic_light_LightsGPIO_component_arena_size
#define LightsGPIO_component_req_handles traffic_light_LightsGPIO_component_req_handles
#define LightsGPIO_component_res_handles traffic_light_LightsGPIO_component_res_handles
#define LightsGPIO_component_err_handles traffic_light_LightsGPIO_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__LightsGPIO__COMPONENT_ENDPOINTS__ */

#ifndef __traffic_light__LightsGPIO__TASK_ENDPOINTS__
#define __traffic_light__LightsGPIO__TASK_ENDPOINTS__
enum {
    traffic_light_LightsGPIO_entity_req_arena_size =
    traffic_light_LightsGPIO_component_req_arena_size,
    traffic_light_LightsGPIO_entity_res_arena_size =
    traffic_light_LightsGPIO_component_res_arena_size,
    traffic_light_LightsGPIO_entity_arena_size =
    traffic_light_LightsGPIO_component_arena_size,
    traffic_light_LightsGPIO_entity_req_handles =
    traffic_light_LightsGPIO_component_req_handles,
    traffic_light_LightsGPIO_entity_res_handles =
    traffic_light_LightsGPIO_component_res_handles,
    traffic_light_LightsGPIO_entity_err_handles =
    traffic_light_LightsGPIO_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define LightsGPIO_entity_req_arena_size traffic_light_LightsGPIO_entity_req_arena_size
#define LightsGPIO_entity_res_arena_size traffic_light_LightsGPIO_entity_res_arena_size
#define LightsGPIO_entity_arena_size traffic_light_LightsGPIO_entity_arena_size
#define LightsGPIO_entity_req_handles traffic_light_LightsGPIO_entity_req_handles
#define LightsGPIO_entity_res_handles traffic_light_LightsGPIO_entity_res_handles
#define LightsGPIO_entity_err_handles traffic_light_LightsGPIO_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__LightsGPIO__TASK_ENDPOINTS__ */

#ifndef __traffic_light__IMode__VTABLE__
#define __traffic_light__IMode__VTABLE__
typedef struct traffic_light_IMode {
            const
            struct traffic_light_IMode_ops *ops;
        } traffic_light_IMode;
typedef nk_err_t
traffic_light_IMode_FMode_fn(struct traffic_light_IMode *,
                             const
                             struct traffic_light_IMode_FMode_req *,
                             const
                             struct nk_arena *,
                             struct traffic_light_IMode_FMode_res *,
                             struct nk_arena *);
typedef struct traffic_light_IMode_ops {
            traffic_light_IMode_FMode_fn *FMode;
        } traffic_light_IMode_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IMode_FMode_fn traffic_light_IMode_FMode_fn
#define IMode_ops traffic_light_IMode_ops
#define IMode traffic_light_IMode
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__IMode__VTABLE__ */

#ifndef __traffic_light__IMode__SERVER__
#define __traffic_light__IMode__SERVER__
typedef union traffic_light_IMode_req {
            struct nk_message base_;
            struct traffic_light_IMode_FMode_req FMode;
        } traffic_light_IMode_req;
typedef union traffic_light_IMode_res {
            struct nk_message base_;
            struct traffic_light_IMode_FMode_res FMode;
        } traffic_light_IMode_res;
static inline
nk_err_t traffic_light_IMode_interface_dispatch(struct traffic_light_IMode *impl,
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
            
          case traffic_light_IMode_FMode_mid:
            {
                struct traffic_light_IMode_FMode_res
                *res_ =
                (struct traffic_light_IMode_FMode_res *) res;
                
                rc = impl->ops->FMode(impl, (const
                                             struct traffic_light_IMode_FMode_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     traffic_light_IMode_FMode_res_handles);
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
#define IMode_req traffic_light_IMode_req
#define IMode_res traffic_light_IMode_res
#define IMode_interface_dispatch traffic_light_IMode_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__IMode__SERVER__ */

#ifndef __traffic_light__CMode__COMPONENT_SERVER_TYPES__
#define __traffic_light__CMode__COMPONENT_SERVER_TYPES__
typedef struct traffic_light_CMode_component {
            struct traffic_light_IMode *mode;
        } traffic_light_CMode_component;
#endif /* __traffic_light__CMode__COMPONENT_SERVER_TYPES__ */

#ifndef __traffic_light__CMode__COMPONENT_SERVER_DISPATCHER__
#define __traffic_light__CMode__COMPONENT_SERVER_DISPATCHER__
static inline
void traffic_light_CMode_component_init(struct traffic_light_CMode_component *self,
                                        struct traffic_light_IMode *mode)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->mode = mode;
}
typedef union traffic_light_CMode_component_req {
            struct nk_message base_;
            traffic_light_IMode_req mode;
        } traffic_light_CMode_component_req;
typedef union traffic_light_CMode_component_res {
            struct nk_message base_;
            traffic_light_IMode_res mode;
        } traffic_light_CMode_component_res;
static inline
nk_err_t traffic_light_CMode_component_dispatch(struct traffic_light_CMode_component *self,
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
        
      case traffic_light_CMode_mode_iid:
        return traffic_light_IMode_interface_dispatch(self->mode,
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
#define CMode_component traffic_light_CMode_component
#define CMode_component_init traffic_light_CMode_component_init
#define CMode_component_req traffic_light_CMode_component_req
#define CMode_component_res traffic_light_CMode_component_res
#define CMode_component_dispatch traffic_light_CMode_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__CMode__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __traffic_light__LightsGPIO__COMPONENT_SERVER_TYPES__
#define __traffic_light__LightsGPIO__COMPONENT_SERVER_TYPES__
typedef struct traffic_light_LightsGPIO_component {
            struct traffic_light_CMode_component *lightsGpio;
        } traffic_light_LightsGPIO_component;
#endif /* __traffic_light__LightsGPIO__COMPONENT_SERVER_TYPES__ */

#ifndef __traffic_light__LightsGPIO__COMPONENT_SERVER_DISPATCHER__
#define __traffic_light__LightsGPIO__COMPONENT_SERVER_DISPATCHER__
static inline
void traffic_light_LightsGPIO_component_init(struct traffic_light_LightsGPIO_component *self,
                                             struct traffic_light_CMode_component *lightsGpio)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->lightsGpio = lightsGpio;
}
typedef union traffic_light_LightsGPIO_component_req {
            struct nk_message base_;
            traffic_light_IMode_req lightsGpio_mode;
        } traffic_light_LightsGPIO_component_req;
typedef union traffic_light_LightsGPIO_component_res {
            struct nk_message base_;
            traffic_light_IMode_res lightsGpio_mode;
        } traffic_light_LightsGPIO_component_res;
static inline
nk_err_t traffic_light_LightsGPIO_component_dispatch(struct traffic_light_LightsGPIO_component *self,
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
        
      case traffic_light_LightsGPIO_lightsGpio_mode_iid:
        return traffic_light_IMode_interface_dispatch(self->lightsGpio->mode,
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
#define LightsGPIO_component traffic_light_LightsGPIO_component
#define LightsGPIO_component_init traffic_light_LightsGPIO_component_init
#define LightsGPIO_component_req traffic_light_LightsGPIO_component_req
#define LightsGPIO_component_res traffic_light_LightsGPIO_component_res
#define LightsGPIO_component_dispatch traffic_light_LightsGPIO_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__LightsGPIO__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __traffic_light__LightsGPIO__ENTITY_SERVER__
#define __traffic_light__LightsGPIO__ENTITY_SERVER__
#define traffic_light_LightsGPIO_entity_res traffic_light_LightsGPIO_component_res
#define traffic_light_LightsGPIO_entity_req traffic_light_LightsGPIO_component_req
#define traffic_light_LightsGPIO_entity traffic_light_LightsGPIO_component
static inline
void traffic_light_LightsGPIO_entity_init(struct traffic_light_LightsGPIO_entity *self,
                                          struct traffic_light_CMode_component *lightsGpio)
{
    traffic_light_LightsGPIO_component_init(self,
                                            lightsGpio);
}
static inline
nk_err_t traffic_light_LightsGPIO_entity_dispatch(struct traffic_light_LightsGPIO_entity *self,
                                                  const
                                                  struct nk_message *req,
                                                  const
                                                  struct nk_arena *req_arena,
                                                  struct nk_message *res,
                                                  struct nk_arena *res_arena)
{
    return traffic_light_LightsGPIO_component_dispatch(self,
                                                       0,
                                                       req,
                                                       req_arena,
                                                       res,
                                                       res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define LightsGPIO_entity traffic_light_LightsGPIO_entity
#define LightsGPIO_entity_init traffic_light_LightsGPIO_entity_init
#define LightsGPIO_entity_req traffic_light_LightsGPIO_entity_req
#define LightsGPIO_entity_res traffic_light_LightsGPIO_entity_res
#define LightsGPIO_entity_dispatch traffic_light_LightsGPIO_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__LightsGPIO__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

