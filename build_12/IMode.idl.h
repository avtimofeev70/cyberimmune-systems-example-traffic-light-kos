#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef __traffic_light_IMode__Direction1Blink__CONST__
#define __traffic_light_IMode__Direction1Blink__CONST__
#define traffic_light_IMode_Direction1Blink ((nk_uint32_t)(NK_UINT32_C(8)))
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IMode_Direction1Blink traffic_light_IMode_Direction1Blink
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light_IMode__Direction1Blink__CONST__ */

#ifndef __traffic_light_IMode__Direction1Yellow__CONST__
#define __traffic_light_IMode__Direction1Yellow__CONST__
#define traffic_light_IMode_Direction1Yellow ((nk_uint32_t)(NK_UINT32_C(2)))
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IMode_Direction1Yellow traffic_light_IMode_Direction1Yellow
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light_IMode__Direction1Yellow__CONST__ */

#ifndef __traffic_light_IMode__Direction2Blink__CONST__
#define __traffic_light_IMode__Direction2Blink__CONST__
#define traffic_light_IMode_Direction2Blink ((nk_uint32_t)(NK_UINT32_C(2048)))
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IMode_Direction2Blink traffic_light_IMode_Direction2Blink
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light_IMode__Direction2Blink__CONST__ */

#ifndef ____UInt32__RAWTYPE__
#define ____UInt32__RAWTYPE__
nk_static_assert(sizeof(nk_uint32_t) == 4, bad_nk_uint32_t_size);
nk_static_assert(nk_alignof(nk_uint32_t) == 4, bad_nk_uint32_t_align);
#endif /* ____UInt32__RAWTYPE__ */

#ifndef __traffic_light_IMode__Direction1Red__CONST__
#define __traffic_light_IMode__Direction1Red__CONST__
#define traffic_light_IMode_Direction1Red ((nk_uint32_t)(NK_UINT32_C(1)))
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IMode_Direction1Red traffic_light_IMode_Direction1Red
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light_IMode__Direction1Red__CONST__ */

#ifndef __traffic_light_IMode__Direction2Yellow__CONST__
#define __traffic_light_IMode__Direction2Yellow__CONST__
#define traffic_light_IMode_Direction2Yellow ((nk_uint32_t)(NK_UINT32_C(512)))
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IMode_Direction2Yellow traffic_light_IMode_Direction2Yellow
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light_IMode__Direction2Yellow__CONST__ */

#ifndef __traffic_light_IMode__Direction1Green__CONST__
#define __traffic_light_IMode__Direction1Green__CONST__
#define traffic_light_IMode_Direction1Green ((nk_uint32_t)(NK_UINT32_C(4)))
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IMode_Direction1Green traffic_light_IMode_Direction1Green
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light_IMode__Direction1Green__CONST__ */

#ifndef __traffic_light_IMode__Direction2Red__CONST__
#define __traffic_light_IMode__Direction2Red__CONST__
#define traffic_light_IMode_Direction2Red ((nk_uint32_t)(NK_UINT32_C(256)))
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IMode_Direction2Red traffic_light_IMode_Direction2Red
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light_IMode__Direction2Red__CONST__ */

#ifndef __traffic_light_IMode__Direction2Green__CONST__
#define __traffic_light_IMode__Direction2Green__CONST__
#define traffic_light_IMode_Direction2Green ((nk_uint32_t)(NK_UINT32_C(1024)))
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IMode_Direction2Green traffic_light_IMode_Direction2Green
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light_IMode__Direction2Green__CONST__ */

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

#ifndef __traffic_light__IMode__CLIENT__
#define __traffic_light__IMode__CLIENT__
typedef struct traffic_light_IMode_proxy {
            struct traffic_light_IMode base;
            struct nk_transport *transport;
            nk_iid_t iid;
        } traffic_light_IMode_proxy;
static inline
nk_err_t traffic_light_IMode_FMode_proxy(struct traffic_light_IMode_proxy *self,
                                         struct traffic_light_IMode_FMode_req *req,
                                         const
                                         struct nk_arena *req_arena,
                                         struct traffic_light_IMode_FMode_res *res,
                                         struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         traffic_light_IMode_FMode_mid);
    nk_msg_set_ncaps(req,
                     traffic_light_IMode_FMode_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         traffic_light_IMode_FMode_mid);
    nk_msg_set_ncaps(res,
                     traffic_light_IMode_FMode_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
void traffic_light_IMode_proxy_init(struct traffic_light_IMode_proxy *self,
                                    struct nk_transport *transport,
                                    nk_iid_t iid)
{
    static const struct traffic_light_IMode_ops
    ops =
    {(traffic_light_IMode_FMode_fn *) &traffic_light_IMode_FMode_proxy};
    
    nk_assert(self != NK_NULL);
    self->base.ops = &ops;
    self->transport = transport;
    self->iid = iid;
}
static inline
nk_err_t traffic_light_IMode_FMode(struct traffic_light_IMode *self,
                                   struct traffic_light_IMode_FMode_req *req,
                                   const
                                   struct nk_arena *req_arena,
                                   struct traffic_light_IMode_FMode_res *res,
                                   struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->FMode != NK_NULL);
    return self->ops->FMode(self, req, req_arena,
                            res, res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define IMode_FMode_proxy traffic_light_IMode_FMode_proxy
#define IMode_FMode traffic_light_IMode_FMode
#define IMode_proxy traffic_light_IMode_proxy
#define IMode_proxy_init traffic_light_IMode_proxy_init
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__IMode__CLIENT__ */

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

#ifndef __traffic_light__IMode__TESTS__
#define __traffic_light__IMode__TESTS__
static inline
nk_err_t traffic_light_IMode_FMode_test_req(struct traffic_light_IMode_FMode_req *msg,
                                            struct nk_arena *arena,
                                            int (*rand)(void),
                                            nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->value = (nk_uint32_t) rand();
    return NK_EOK;
}
static inline
nk_err_t traffic_light_IMode_FMode_test_res(struct traffic_light_IMode_FMode_res *msg,
                                            struct nk_arena *arena,
                                            int (*rand)(void),
                                            nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->result = (nk_uint32_t) rand();
    return NK_EOK;
}
static inline
nk_err_t traffic_light_IMode_FMode_test_err(struct traffic_light_IMode_FMode_err *msg,
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
#endif /* __traffic_light__IMode__TESTS__ */

#pragma GCC diagnostic pop

