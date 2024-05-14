project (einit)

# Tools for using NK parser.
include (platform/image)

# Set compile flags.
project_header_default ("STANDARD_GNU_11:YES" "STRICT_WARNINGS:NO")

add_executable (KlogEntityHw "src/klog_entity.c")
target_link_libraries (KlogEntityHw ${klog_SYSTEM_AUDIT_LIB})
add_dependencies (KlogEntityHw traffic_light_klog_edl_files)

add_executable (KlogEntityQemu "src/klog_entity.c")
target_link_libraries (KlogEntityQemu ${klog_SYSTEM_AUDIT_LIB})
add_dependencies (KlogEntityQemu traffic_light_klog_edl_files)

set (INIT_KlogEntity_PATH "KlogEntityHw")
target_link_libraries (KlogEntityHw kssaudit)

set (INIT_KlogEntity_PATH "KlogEntityQemu")

# Define the ENTITIES variable with a list of entities.
set (ENTITIES ControlSystem LightsGPIO Diagnostics KlogStorageEntity)

# KasperskyOS image for target hardware platform.
build_kos_hw_image (kos-image
        EINIT_ENTITY EinitHw
        CONNECTIONS_CFG "src/init.yaml.in"
        SECURITY_PSL "src/security.psl"
        KLOG_ENTITY KlogEntityHw
        ${ENTITIES})

# KasperskyOS image for QEMU with simulation targets (sim, gdbsim, gdb).
build_kos_qemu_image (kos-qemu-image
        EINIT_ENTITY EinitQemu
        CONNECTIONS_CFG "src/init.yaml.in"
        SECURITY_PSL "src/security.psl"
        KLOG_ENTITY KlogEntityQemu
        ${ENTITIES})

target_link_libraries (KlogEntityQemu kssaudit)