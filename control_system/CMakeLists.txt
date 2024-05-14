project (ControlSystem)

# Tools for using NK parser.
include (platform/nk)

# Set compile flags.
project_header_default ("STANDARD_GNU_11:YES" "STRICT_WARNINGS:NO")

add_executable (ControlSystem "src/control_system.c")
add_dependencies (ControlSystem traffic_light_idl_files traffic_light_control_system_edl_files)