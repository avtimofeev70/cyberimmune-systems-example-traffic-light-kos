project (einit)

# Tools for using NK parser.
include (platform/image)

# Set compile flags.
project_header_default ("STANDARD_GNU_11:YES" "STRICT_WARNINGS:NO")

# Define the ENTITIES variable with a list of entities.
set (ENTITIES ControlSystem LightsGPIO Diagnostics)

# KasperskyOS image for target hardware platform.
build_kos_hw_image (kos-image
        EINIT_ENTITY EinitHw
        CONNECTIONS_CFG "src/init.yaml.in"
        SECURITY_PSL "src/security.psl"
        ${ENTITIES})

# KasperskyOS image for QEMU with simulation targets (sim, gdbsim, gdb).
build_kos_qemu_image (kos-qemu-image
        EINIT_ENTITY EinitQemu
        CONNECTIONS_CFG "src/init.yaml.in"
        SECURITY_PSL "src/security.psl"
        ${ENTITIES})
