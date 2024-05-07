#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef __traffic_light__Diagnostics__COMPONENT_ENDPOINTS__
#define __traffic_light__Diagnostics__COMPONENT_ENDPOINTS__
enum {
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
    0,
    traffic_light_Diagnostics_component_res_arena_size =
    0,
    traffic_light_Diagnostics_component_arena_size =
    0,
    traffic_light_Diagnostics_component_req_handles =
    0,
    traffic_light_Diagnostics_component_res_handles =
    0,
    traffic_light_Diagnostics_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
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

#pragma GCC diagnostic pop

