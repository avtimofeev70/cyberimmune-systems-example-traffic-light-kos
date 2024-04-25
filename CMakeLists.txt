cmake_minimum_required (VERSION 3.12)

project (traffic_light)

# Initialize CMake library for KasperskyOS SDK.
include (platform)
initialize_platform (FORCE_STATIC)

# Tools for using NK parser.
include (platform/nk)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

nk_build_idl_files (traffic_light_idl_files NK_MODULE "traffic_light" IDL "resources/IMode.idl")
nk_build_cdl_files (traffic_light_cdl_files IDL_TARGET traffic_light_idl_files NK_MODULE "traffic_light" CDL "resources/CMode.cdl")
nk_build_edl_files (traffic_light_lights_gpio_edl_files CDL_TARGET traffic_light_cdl_files NK_MODULE "traffic_light" EDL "resources/LightsGPIO.edl")
nk_build_edl_files (traffic_light_diagnostics_edl_files NK_MODULE "traffic_light" EDL "resources/Diagnostics.edl")
nk_build_edl_files (traffic_light_control_system_edl_files NK_MODULE "traffic_light" EDL "resources/ControlSystem.edl")

add_subdirectory (control_system)
add_subdirectory (diagnostics)
add_subdirectory (lights_gpio)
add_subdirectory (einit)
