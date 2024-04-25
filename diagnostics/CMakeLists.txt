project (Diagnostics)

# Tools for using NK parser.
include (platform/nk)

# Set compile flags.
project_header_default ("STANDARD_GNU_11:YES" "STRICT_WARNINGS:NO")

add_executable (Diagnostics "src/diagnostics.c")
add_dependencies (Diagnostics traffic_light_diagnostics_edl_files)