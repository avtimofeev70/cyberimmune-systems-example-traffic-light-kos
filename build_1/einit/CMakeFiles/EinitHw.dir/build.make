# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/cmake

# The command to remove a file.
RM = /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build"

# Include any dependencies generated for this target.
include einit/CMakeFiles/EinitHw.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include einit/CMakeFiles/EinitHw.dir/compiler_depend.make

# Include the progress variables for this target.
include einit/CMakeFiles/EinitHw.dir/progress.make

# Include the compile flags for this target's objects.
include einit/CMakeFiles/EinitHw.dir/flags.make

einit/EinitHw-kss/EinitHw.c: einit/EinitHw-kss/init.yaml
einit/EinitHw-kss/EinitHw.c: control_system/ControlSystem
einit/EinitHw-kss/EinitHw.c: lights_gpio/LightsGPIO
einit/EinitHw-kss/EinitHw.c: diagnostics/Diagnostics
einit/EinitHw-kss/EinitHw.c: klog_storage/KlogStorageEntity
einit/EinitHw-kss/EinitHw.c: ../einit/src/klog_entity.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Generating EinitHw-kss/EinitHw.c"
	cd "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit" && /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/einit -I /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/_headers_ -I /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/_headers_/traffic_light/.. -I /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/../install/include -I /opt/KasperskyOS-Community-Edition-1.1.1.40/sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/aarch64-kos/include -I /sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/include -o /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/einit/EinitHw-kss/EinitHw.c /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/einit/EinitHw-kss/init.yaml

einit/CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.o: einit/CMakeFiles/EinitHw.dir/flags.make
einit/CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.o: einit/EinitHw-kss/EinitHw.c
einit/CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.o: einit/CMakeFiles/EinitHw.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object einit/CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.o"
	cd "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit" && /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/aarch64-kos-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT einit/CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.o -MF CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.o.d -o CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.o -c "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit/EinitHw-kss/EinitHw.c"

einit/CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.i"
	cd "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit" && /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/aarch64-kos-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit/EinitHw-kss/EinitHw.c" > CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.i

einit/CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.s"
	cd "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit" && /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/aarch64-kos-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit/EinitHw-kss/EinitHw.c" -o CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.s

# Object files for target EinitHw
EinitHw_OBJECTS = \
"CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.o"

# External object files for target EinitHw
EinitHw_EXTERNAL_OBJECTS =

einit/EinitHw: einit/CMakeFiles/EinitHw.dir/EinitHw-kss/EinitHw.c.o
einit/EinitHw: einit/CMakeFiles/EinitHw.dir/build.make
einit/EinitHw: einit/CMakeFiles/EinitHw.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable EinitHw"
	cd "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EinitHw.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
einit/CMakeFiles/EinitHw.dir/build: einit/EinitHw
.PHONY : einit/CMakeFiles/EinitHw.dir/build

einit/CMakeFiles/EinitHw.dir/clean:
	cd "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit" && $(CMAKE_COMMAND) -P CMakeFiles/EinitHw.dir/cmake_clean.cmake
.PHONY : einit/CMakeFiles/EinitHw.dir/clean

einit/CMakeFiles/EinitHw.dir/depend: einit/EinitHw-kss/EinitHw.c
	cd "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/einit" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit/CMakeFiles/EinitHw.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : einit/CMakeFiles/EinitHw.dir/depend
