#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef __traffic_light__ControlSystem__COMPONENT_ENDPOINTS__
#define __traffic_light__ControlSystem__COMPONENT_ENDPOINTS__
enum {
    traffic_light_ControlSystem_iidMax,
};
enum {
    traffic_light_ControlSystem_iidOffset = 0,
};
enum {
    traffic_light_ControlSystem_securityIidMax,
};
enum {
    traffic_light_ControlSystem_component_req_arena_size =
    0,
    traffic_light_ControlSystem_component_res_arena_size =
    0,
    traffic_light_ControlSystem_component_arena_size =
    0,
    traffic_light_ControlSystem_component_req_handles =
    0,
    traffic_light_ControlSystem_component_res_handles =
    0,
    traffic_light_ControlSystem_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define ControlSystem_iidMax traffic_light_ControlSystem_iidMax
#define ControlSystem_iidOffset traffic_light_ControlSystem_iidOffset
#define ControlSystem_securityIidMax traffic_light_ControlSystem_securityIidMax
#define ControlSystem_component_req_arena_size traffic_light_ControlSystem_component_req_arena_size
#define ControlSystem_component_res_arena_size traffic_light_ControlSystem_component_res_arena_size
#define ControlSystem_component_arena_size traffic_light_ControlSystem_component_arena_size
#define ControlSystem_component_req_handles traffic_light_ControlSystem_component_req_handles
#define ControlSystem_component_res_handles traffic_light_ControlSystem_component_res_handles
#define ControlSystem_component_err_handles traffic_light_ControlSystem_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__ControlSystem__COMPONENT_ENDPOINTS__ */

#ifndef __traffic_light__ControlSystem__TASK_ENDPOINTS__
#define __traffic_light__ControlSystem__TASK_ENDPOINTS__
enum {
    traffic_light_ControlSystem_entity_req_arena_size =
    traffic_light_ControlSystem_component_req_arena_size,
    traffic_light_ControlSystem_entity_res_arena_size =
    traffic_light_ControlSystem_component_res_arena_size,
    traffic_light_ControlSystem_entity_arena_size =
    traffic_light_ControlSystem_component_arena_size,
    traffic_light_ControlSystem_entity_req_handles =
    traffic_light_ControlSystem_component_req_handles,
    traffic_light_ControlSystem_entity_res_handles =
    traffic_light_ControlSystem_component_res_handles,
    traffic_light_ControlSystem_entity_err_handles =
    traffic_light_ControlSystem_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define ControlSystem_entity_req_arena_size traffic_light_ControlSystem_entity_req_arena_size
#define ControlSystem_entity_res_arena_size traffic_light_ControlSystem_entity_res_arena_size
#define ControlSystem_entity_arena_size traffic_light_ControlSystem_entity_arena_size
#define ControlSystem_entity_req_handles traffic_light_ControlSystem_entity_req_handles
#define ControlSystem_entity_res_handles traffic_light_ControlSystem_entity_res_handles
#define ControlSystem_entity_err_handles traffic_light_ControlSystem_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __traffic_light__ControlSystem__TASK_ENDPOINTS__ */

#pragma GCC diagnostic pop

