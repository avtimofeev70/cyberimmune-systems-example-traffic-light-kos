#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt16__RAWTYPE__
#define ____UInt16__RAWTYPE__
nk_static_assert(sizeof(nk_uint16_t) == 2, bad_nk_uint16_t_size);
nk_static_assert(nk_alignof(nk_uint16_t) == 2, bad_nk_uint16_t_align);
#endif /* ____UInt16__RAWTYPE__ */

#ifndef ____UInt8__RAWTYPE__
#define ____UInt8__RAWTYPE__
nk_static_assert(sizeof(nk_uint8_t) == 1, bad_nk_uint8_t_size);
nk_static_assert(nk_alignof(nk_uint8_t) == 1, bad_nk_uint8_t_align);
#endif /* ____UInt8__RAWTYPE__ */

#ifndef ____UInt64__RAWTYPE__
#define ____UInt64__RAWTYPE__
nk_static_assert(sizeof(nk_uint64_t) == 8, bad_nk_uint64_t_size);
nk_static_assert(nk_alignof(nk_uint64_t) == 8, bad_nk_uint64_t_align);
#endif /* ____UInt64__RAWTYPE__ */

#ifndef ____UInt32__RAWTYPE__
#define ____UInt32__RAWTYPE__
nk_static_assert(sizeof(nk_uint32_t) == 4, bad_nk_uint32_t_size);
nk_static_assert(nk_alignof(nk_uint32_t) == 4, bad_nk_uint32_t_align);
#endif /* ____UInt32__RAWTYPE__ */

#ifndef __kl_KlogStorage__Entry__STRUCT__
#define __kl_KlogStorage__Entry__STRUCT__
typedef struct __nk_packed kl_KlogStorage_Entry {
            __nk_alignas(8) nk_uint64_t id;
            __nk_alignas(8) nk_uint64_t timestamp;
            __nk_alignas(4) nk_uint32_t source;
            __nk_alignas(4) nk_uint32_t reason;
            __nk_alignas(1) nk_uint8_t msg[4096];
        } kl_KlogStorage_Entry;
nk_static_assert(nk_offsetof(kl_KlogStorage_Entry, id) == 0, bad_kl_KlogStorage_Entry_id_offset);
nk_static_assert(nk_offsetof(kl_KlogStorage_Entry, timestamp) == 8, bad_kl_KlogStorage_Entry_timestamp_offset);
nk_static_assert(nk_offsetof(kl_KlogStorage_Entry, source) == 16, bad_kl_KlogStorage_Entry_source_offset);
nk_static_assert(nk_offsetof(kl_KlogStorage_Entry, reason) == 20, bad_kl_KlogStorage_Entry_reason_offset);
nk_static_assert(nk_offsetof(kl_KlogStorage_Entry, msg) == 24, bad_kl_KlogStorage_Entry_msg_offset);
nk_static_assert(sizeof(struct kl_KlogStorage_Entry) == 4120, bad_kl_KlogStorage_Entry_size);
#ifdef NK_USE_UNQUALIFIED_NAMES
#define KlogStorage_Entry kl_KlogStorage_Entry
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_KlogStorage__Entry__STRUCT__ */

#ifndef __kl__KlogStorage__INTERFACE__
#define __kl__KlogStorage__INTERFACE__
enum {
    kl_KlogStorage_write_mid,
    kl_KlogStorage_read_mid,
    kl_KlogStorage_readRange_mid,
    kl_KlogStorage_mid_max,
};
enum {
    kl_KlogStorage_write_req_entry_size = 32,
    kl_KlogStorage_write_req_entry_elem_msg_size =
    4096,
    kl_KlogStorage_write_req_arena_size = 131840,
    kl_KlogStorage_write_res_arena_size = 0,
    kl_KlogStorage_write_req_handles = 0,
    kl_KlogStorage_write_res_handles = 0,
    kl_KlogStorage_write_err_handles = 0,
    kl_KlogStorage_read_res_entries_size = 32,
    kl_KlogStorage_read_res_entries_elem_msg_size =
    4096,
    kl_KlogStorage_read_req_arena_size = 0,
    kl_KlogStorage_read_res_arena_size = 131840,
    kl_KlogStorage_read_req_handles = 0,
    kl_KlogStorage_read_res_handles = 0,
    kl_KlogStorage_read_err_handles = 0,
    kl_KlogStorage_readRange_res_entries_size =
    32,
    kl_KlogStorage_readRange_res_entries_elem_msg_size =
    4096,
    kl_KlogStorage_readRange_req_arena_size = 0,
    kl_KlogStorage_readRange_res_arena_size =
    131840,
    kl_KlogStorage_readRange_req_handles = 0,
    kl_KlogStorage_readRange_res_handles = 0,
    kl_KlogStorage_readRange_err_handles = 0,
    kl_KlogStorage_req_arena_size = 131840,
    kl_KlogStorage_res_arena_size = 131840,
    kl_KlogStorage_arena_size = 131840,
    kl_KlogStorage_req_handles = 0,
    kl_KlogStorage_res_handles = 0,
    kl_KlogStorage_err_handles = 0,
};
typedef struct __nk_packed kl_KlogStorage_write_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_ptr_t entry;
        } kl_KlogStorage_write_req;
#pragma pack(push, 8) /* kl_KlogStorage_write_res */
typedef struct kl_KlogStorage_write_err {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(2) nk_uint16_t status;
        } kl_KlogStorage_write_err;
typedef struct kl_KlogStorage_write_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                } res_;
                struct kl_KlogStorage_write_err err_;
            };
        } kl_KlogStorage_write_res;
#pragma pack(pop) /* kl_KlogStorage_write_res */
typedef struct __nk_packed kl_KlogStorage_read_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4)
            nk_uint32_t numEntries;
        } kl_KlogStorage_read_req;
#pragma pack(push, 8) /* kl_KlogStorage_read_res */
typedef struct kl_KlogStorage_read_err {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(2) nk_uint16_t status;
        } kl_KlogStorage_read_err;
typedef struct kl_KlogStorage_read_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t count;
                    __nk_alignas(4)
                    nk_ptr_t entries;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t count;
                    __nk_alignas(4)
                    nk_ptr_t entries;
                } res_;
                struct kl_KlogStorage_read_err err_;
            };
        } kl_KlogStorage_read_res;
#pragma pack(pop) /* kl_KlogStorage_read_res */
typedef struct __nk_packed kl_KlogStorage_readRange_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(8) nk_uint64_t firstId;
            __nk_alignas(8) nk_uint64_t lastId;
        } kl_KlogStorage_readRange_req;
#pragma pack(push, 8) /* kl_KlogStorage_readRange_res */
typedef struct kl_KlogStorage_readRange_err {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(2) nk_uint16_t status;
        } kl_KlogStorage_readRange_err;
typedef struct kl_KlogStorage_readRange_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t count;
                    __nk_alignas(4)
                    nk_ptr_t entries;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t count;
                    __nk_alignas(4)
                    nk_ptr_t entries;
                } res_;
                struct kl_KlogStorage_readRange_err err_;
            };
        } kl_KlogStorage_readRange_res;
#pragma pack(pop) /* kl_KlogStorage_readRange_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define KlogStorage_write_mid kl_KlogStorage_write_mid
#define KlogStorage_read_mid kl_KlogStorage_read_mid
#define KlogStorage_readRange_mid kl_KlogStorage_readRange_mid
#define KlogStorage_mid_max kl_KlogStorage_mid_max
#define KlogStorage_write_req_entry_size kl_KlogStorage_write_req_entry_size
#define KlogStorage_write_req_entry_elem_msg_size kl_KlogStorage_write_req_entry_elem_msg_size
#define KlogStorage_write_req_arena_size kl_KlogStorage_write_req_arena_size
#define KlogStorage_write_res_arena_size kl_KlogStorage_write_res_arena_size
#define KlogStorage_write_req_handles kl_KlogStorage_write_req_handles
#define KlogStorage_write_res_handles kl_KlogStorage_write_res_handles
#define KlogStorage_write_err_handles kl_KlogStorage_write_err_handles
#define KlogStorage_read_res_entries_size kl_KlogStorage_read_res_entries_size
#define KlogStorage_read_res_entries_elem_msg_size kl_KlogStorage_read_res_entries_elem_msg_size
#define KlogStorage_read_req_arena_size kl_KlogStorage_read_req_arena_size
#define KlogStorage_read_res_arena_size kl_KlogStorage_read_res_arena_size
#define KlogStorage_read_req_handles kl_KlogStorage_read_req_handles
#define KlogStorage_read_res_handles kl_KlogStorage_read_res_handles
#define KlogStorage_read_err_handles kl_KlogStorage_read_err_handles
#define KlogStorage_readRange_res_entries_size kl_KlogStorage_readRange_res_entries_size
#define KlogStorage_readRange_res_entries_elem_msg_size kl_KlogStorage_readRange_res_entries_elem_msg_size
#define KlogStorage_readRange_req_arena_size kl_KlogStorage_readRange_req_arena_size
#define KlogStorage_readRange_res_arena_size kl_KlogStorage_readRange_res_arena_size
#define KlogStorage_readRange_req_handles kl_KlogStorage_readRange_req_handles
#define KlogStorage_readRange_res_handles kl_KlogStorage_readRange_res_handles
#define KlogStorage_readRange_err_handles kl_KlogStorage_readRange_err_handles
#define KlogStorage_req_arena_size kl_KlogStorage_req_arena_size
#define KlogStorage_res_arena_size kl_KlogStorage_res_arena_size
#define KlogStorage_arena_size kl_KlogStorage_arena_size
#define KlogStorage_req_handles kl_KlogStorage_req_handles
#define KlogStorage_res_handles kl_KlogStorage_res_handles
#define KlogStorage_err_handles kl_KlogStorage_err_handles
#define KlogStorage_write_req kl_KlogStorage_write_req
#define KlogStorage_write_res kl_KlogStorage_write_res
#define KlogStorage_read_req kl_KlogStorage_read_req
#define KlogStorage_read_res kl_KlogStorage_read_res
#define KlogStorage_readRange_req kl_KlogStorage_readRange_req
#define KlogStorage_readRange_res kl_KlogStorage_readRange_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__KlogStorage__INTERFACE__ */

#ifndef __kl__KlogStorage__COMPONENT_ENDPOINTS__
#define __kl__KlogStorage__COMPONENT_ENDPOINTS__
enum {
    kl_KlogStorage_storage_iid,
    kl_KlogStorage_iidMax,
};
enum {
    kl_KlogStorage_iidOffset = 0,
};
enum {
    kl_KlogStorage_securityIidMax,
};
enum {
    kl_KlogStorage_component_req_arena_size =
    131840,
    kl_KlogStorage_component_res_arena_size =
    131840,
    kl_KlogStorage_component_arena_size = 131840,
    kl_KlogStorage_component_req_handles = 0,
    kl_KlogStorage_component_res_handles = 0,
    kl_KlogStorage_component_err_handles = 0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define KlogStorage_storage_iid kl_KlogStorage_storage_iid
#define KlogStorage_iidMax kl_KlogStorage_iidMax
#define KlogStorage_iidOffset kl_KlogStorage_iidOffset
#define KlogStorage_securityIidMax kl_KlogStorage_securityIidMax
#define KlogStorage_component_req_arena_size kl_KlogStorage_component_req_arena_size
#define KlogStorage_component_res_arena_size kl_KlogStorage_component_res_arena_size
#define KlogStorage_component_arena_size kl_KlogStorage_component_arena_size
#define KlogStorage_component_req_handles kl_KlogStorage_component_req_handles
#define KlogStorage_component_res_handles kl_KlogStorage_component_res_handles
#define KlogStorage_component_err_handles kl_KlogStorage_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__KlogStorage__COMPONENT_ENDPOINTS__ */

#ifndef __traffic_light__KlogStorageEntity__COMPONENT_ENDPOINTS__
#define __traffic_light__KlogStorageEntity__COMPONENT_ENDPOINTS__
enum {
    traffic_light_KlogStorageEntity_klogStorage_storage_iid,
    traffic_light_KlogStorageEntity_iidMax,
};
enum {
    traffic_light_KlogStorageEntity_iidOffset = 0,
    traffic_light_KlogStorageEntity_klogStorage_iidOffset =
    0,
};
enum {
    traffic_light_KlogStorageEntity_securityIidMax,
};
enum {
    traffic_light_KlogStorageEntity_component_req_arena_size =
    131840,
    traffic_light_KlogStorageEntity_component_res_arena_size =
    131840,
    traffic_light_KlogStorageEntity_component_arena_size =
    131840,
    traffic_light_KlogStorageEntity_component_req_handles =
    0,
    traffic_light_KlogStorageEntity_component_res_handles =
    0,
    traffic_light_KlogStorageEntity_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define KlogStorageEntity_klogStorage_storage_iid traffic_light_KlogStorageEntity_klogStorage_storage_iid
#define KlogStorageEntity_iidMax traffic_light_KlogStorageEntity_iidMax
#define KlogStorageEntity_iidOffset traffic_light_KlogStorageEntity_iidOffset
#define KlogStorageEntity_klogStorage_iidOffset traffic_light_KlogStorageEntity_klogStorage_iidOffset
#define KlogStorageEntity_securityIidMax traffic_light_KlogStorageEntity_securityIidMax
#define KlogStorageEntity_component_req_arena_size traffic_light_KlogStorageEntity_component_req_arena_size
#define KlogStorageEntity_component_res_arena_size traffic_light_KlogStorageEntity_component_res_arena_size
#define KlogStorageEntity_component_arena_size traffic_light_KlogStorageEntity_component_arena_size
#define KlogStorageEntity_component_req_handles traffic_light_KlogStorageEntity_component_req_handles
#define KlogStorageEntity_component_res_handles traffic_light_KlogStorageEntity_component_res_handles
#define KlogStorageEntity_component_err_handles traffic_light_KlogStorageEntity_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__KlogStorageEntity__COMPONENT_ENDPOINTS__ */

#ifndef __traffic_light__KlogStorageEntity__TASK_ENDPOINTS__
#define __traffic_light__KlogStorageEntity__TASK_ENDPOINTS__
enum {
    traffic_light_KlogStorageEntity_entity_req_arena_size =
    traffic_light_KlogStorageEntity_component_req_arena_size,
    traffic_light_KlogStorageEntity_entity_res_arena_size =
    traffic_light_KlogStorageEntity_component_res_arena_size,
    traffic_light_KlogStorageEntity_entity_arena_size =
    traffic_light_KlogStorageEntity_component_arena_size,
    traffic_light_KlogStorageEntity_entity_req_handles =
    traffic_light_KlogStorageEntity_component_req_handles,
    traffic_light_KlogStorageEntity_entity_res_handles =
    traffic_light_KlogStorageEntity_component_res_handles,
    traffic_light_KlogStorageEntity_entity_err_handles =
    traffic_light_KlogStorageEntity_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define KlogStorageEntity_entity_req_arena_size traffic_light_KlogStorageEntity_entity_req_arena_size
#define KlogStorageEntity_entity_res_arena_size traffic_light_KlogStorageEntity_entity_res_arena_size
#define KlogStorageEntity_entity_arena_size traffic_light_KlogStorageEntity_entity_arena_size
#define KlogStorageEntity_entity_req_handles traffic_light_KlogStorageEntity_entity_req_handles
#define KlogStorageEntity_entity_res_handles traffic_light_KlogStorageEntity_entity_res_handles
#define KlogStorageEntity_entity_err_handles traffic_light_KlogStorageEntity_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__KlogStorageEntity__TASK_ENDPOINTS__ */

#ifndef __kl__KlogStorage__VTABLE__
#define __kl__KlogStorage__VTABLE__
typedef struct kl_KlogStorage {
            const struct kl_KlogStorage_ops *ops;
        } kl_KlogStorage;
typedef nk_err_t
kl_KlogStorage_write_fn(struct kl_KlogStorage *,
                        const
                        struct kl_KlogStorage_write_req *,
                        const struct nk_arena *,
                        struct kl_KlogStorage_write_res *,
                        struct nk_arena *);
typedef nk_err_t
kl_KlogStorage_read_fn(struct kl_KlogStorage *,
                       const
                       struct kl_KlogStorage_read_req *,
                       const struct nk_arena *,
                       struct kl_KlogStorage_read_res *,
                       struct nk_arena *);
typedef nk_err_t
kl_KlogStorage_readRange_fn(struct kl_KlogStorage *,
                            const
                            struct kl_KlogStorage_readRange_req *,
                            const
                            struct nk_arena *,
                            struct kl_KlogStorage_readRange_res *,
                            struct nk_arena *);
typedef struct kl_KlogStorage_ops {
            kl_KlogStorage_write_fn *write;
            kl_KlogStorage_read_fn *read;
            kl_KlogStorage_readRange_fn *readRange;
        } kl_KlogStorage_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define KlogStorage_write_fn kl_KlogStorage_write_fn
#define KlogStorage_read_fn kl_KlogStorage_read_fn
#define KlogStorage_readRange_fn kl_KlogStorage_readRange_fn
#define KlogStorage_ops kl_KlogStorage_ops
#define KlogStorage kl_KlogStorage
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__KlogStorage__VTABLE__ */

#ifndef __kl__KlogStorage__SERVER__
#define __kl__KlogStorage__SERVER__
typedef union kl_KlogStorage_req {
            struct nk_message base_;
            struct kl_KlogStorage_write_req write;
            struct kl_KlogStorage_read_req read;
            struct kl_KlogStorage_readRange_req readRange;
        } kl_KlogStorage_req;
typedef union kl_KlogStorage_res {
            struct nk_message base_;
            struct kl_KlogStorage_write_res write;
            struct kl_KlogStorage_read_res read;
            struct kl_KlogStorage_readRange_res readRange;
        } kl_KlogStorage_res;
static inline
nk_err_t kl_KlogStorage_interface_dispatch(struct kl_KlogStorage *impl,
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
            
          case kl_KlogStorage_write_mid:
            {
                struct kl_KlogStorage_write_res
                *res_ =
                (struct kl_KlogStorage_write_res *) res;
                
                rc = impl->ops->write(impl, (const
                                             struct kl_KlogStorage_write_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_KlogStorage_write_res_handles);
                } else if (NK_ELOGIC_CHECK(rc)) {
                    nk_err_reset(&res_->err_);
                    res_->err_.status =
                        NK_ELOGIC_GET(rc);
                    nk_msg_set_ncaps(res_,
                                     kl_KlogStorage_write_err_handles);
                    rc = NK_EOK;
                }
                break;
            }
            
          case kl_KlogStorage_read_mid:
            {
                struct kl_KlogStorage_read_res
                *res_ =
                (struct kl_KlogStorage_read_res *) res;
                
                rc = impl->ops->read(impl, (const
                                            struct kl_KlogStorage_read_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_KlogStorage_read_res_handles);
                } else if (NK_ELOGIC_CHECK(rc)) {
                    nk_err_reset(&res_->err_);
                    res_->err_.status =
                        NK_ELOGIC_GET(rc);
                    nk_msg_set_ncaps(res_,
                                     kl_KlogStorage_read_err_handles);
                    rc = NK_EOK;
                }
                break;
            }
            
          case kl_KlogStorage_readRange_mid:
            {
                struct kl_KlogStorage_readRange_res
                *res_ =
                (struct kl_KlogStorage_readRange_res *) res;
                
                rc = impl->ops->readRange(impl,
                                          (const
                                           struct kl_KlogStorage_readRange_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_KlogStorage_readRange_res_handles);
                } else if (NK_ELOGIC_CHECK(rc)) {
                    nk_err_reset(&res_->err_);
                    res_->err_.status =
                        NK_ELOGIC_GET(rc);
                    nk_msg_set_ncaps(res_,
                                     kl_KlogStorage_readRange_err_handles);
                    rc = NK_EOK;
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
#define KlogStorage_req kl_KlogStorage_req
#define KlogStorage_res kl_KlogStorage_res
#define KlogStorage_interface_dispatch kl_KlogStorage_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__KlogStorage__SERVER__ */

#ifndef __kl__KlogStorage__COMPONENT_SERVER_TYPES__
#define __kl__KlogStorage__COMPONENT_SERVER_TYPES__
typedef struct kl_KlogStorage_component {
            struct kl_KlogStorage *storage;
        } kl_KlogStorage_component;
#endif /* __kl__KlogStorage__COMPONENT_SERVER_TYPES__ */

#ifndef __traffic_light__KlogStorageEntity__COMPONENT_SERVER_TYPES__
#define __traffic_light__KlogStorageEntity__COMPONENT_SERVER_TYPES__
typedef struct traffic_light_KlogStorageEntity_component {
            struct kl_KlogStorage_component *klogStorage;
        }
traffic_light_KlogStorageEntity_component;
#endif /* __traffic_light__KlogStorageEntity__COMPONENT_SERVER_TYPES__ */

#ifndef __kl__KlogStorage__COMPONENT_SERVER_DISPATCHER__
#define __kl__KlogStorage__COMPONENT_SERVER_DISPATCHER__
static inline
void kl_KlogStorage_component_init(struct kl_KlogStorage_component *self,
                                   struct kl_KlogStorage *storage)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->storage = storage;
}
typedef union kl_KlogStorage_component_req {
            struct nk_message base_;
            kl_KlogStorage_req storage;
        } kl_KlogStorage_component_req;
typedef union kl_KlogStorage_component_res {
            struct nk_message base_;
            kl_KlogStorage_res storage;
        } kl_KlogStorage_component_res;
static inline
nk_err_t kl_KlogStorage_component_dispatch(struct kl_KlogStorage_component *self,
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
        
      case kl_KlogStorage_storage_iid:
        return kl_KlogStorage_interface_dispatch(self->storage,
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
#define KlogStorage_component kl_KlogStorage_component
#define KlogStorage_component_init kl_KlogStorage_component_init
#define KlogStorage_component_req kl_KlogStorage_component_req
#define KlogStorage_component_res kl_KlogStorage_component_res
#define KlogStorage_component_dispatch kl_KlogStorage_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__KlogStorage__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __traffic_light__KlogStorageEntity__COMPONENT_SERVER_DISPATCHER__
#define __traffic_light__KlogStorageEntity__COMPONENT_SERVER_DISPATCHER__
static inline
void traffic_light_KlogStorageEntity_component_init(struct traffic_light_KlogStorageEntity_component *self,
                                                    struct kl_KlogStorage_component *klogStorage)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->klogStorage = klogStorage;
}
typedef union traffic_light_KlogStorageEntity_component_req {
            struct nk_message base_;
            kl_KlogStorage_req klogStorage_storage;
        }
traffic_light_KlogStorageEntity_component_req;
typedef union traffic_light_KlogStorageEntity_component_res {
            struct nk_message base_;
            kl_KlogStorage_res klogStorage_storage;
        }
traffic_light_KlogStorageEntity_component_res;
static inline
nk_err_t traffic_light_KlogStorageEntity_component_dispatch(struct traffic_light_KlogStorageEntity_component *self,
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
        
      case traffic_light_KlogStorageEntity_klogStorage_storage_iid:
        return kl_KlogStorage_interface_dispatch(self->klogStorage->storage,
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
#define KlogStorageEntity_component traffic_light_KlogStorageEntity_component
#define KlogStorageEntity_component_init traffic_light_KlogStorageEntity_component_init
#define KlogStorageEntity_component_req traffic_light_KlogStorageEntity_component_req
#define KlogStorageEntity_component_res traffic_light_KlogStorageEntity_component_res
#define KlogStorageEntity_component_dispatch traffic_light_KlogStorageEntity_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__KlogStorageEntity__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __traffic_light__KlogStorageEntity__ENTITY_SERVER__
#define __traffic_light__KlogStorageEntity__ENTITY_SERVER__
#define traffic_light_KlogStorageEntity_entity_res traffic_light_KlogStorageEntity_component_res
#define traffic_light_KlogStorageEntity_entity_req traffic_light_KlogStorageEntity_component_req
#define traffic_light_KlogStorageEntity_entity traffic_light_KlogStorageEntity_component
static inline
void traffic_light_KlogStorageEntity_entity_init(struct traffic_light_KlogStorageEntity_entity *self,
                                                 struct kl_KlogStorage_component *klogStorage)
{
    traffic_light_KlogStorageEntity_component_init(self,
                                                   klogStorage);
}
static inline
nk_err_t traffic_light_KlogStorageEntity_entity_dispatch(struct traffic_light_KlogStorageEntity_entity *self,
                                                         const
                                                         struct nk_message *req,
                                                         const
                                                         struct nk_arena *req_arena,
                                                         struct nk_message *res,
                                                         struct nk_arena *res_arena)
{
    return traffic_light_KlogStorageEntity_component_dispatch(self,
                                                              0,
                                                              req,
                                                              req_arena,
                                                              res,
                                                              res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define KlogStorageEntity_entity traffic_light_KlogStorageEntity_entity
#define KlogStorageEntity_entity_init traffic_light_KlogStorageEntity_entity_init
#define KlogStorageEntity_entity_req traffic_light_KlogStorageEntity_entity_req
#define KlogStorageEntity_entity_res traffic_light_KlogStorageEntity_entity_res
#define KlogStorageEntity_entity_dispatch traffic_light_KlogStorageEntity_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__KlogStorageEntity__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

