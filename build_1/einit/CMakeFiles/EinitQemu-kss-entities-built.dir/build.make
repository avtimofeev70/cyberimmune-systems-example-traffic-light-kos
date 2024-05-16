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

# Utility rule file for EinitQemu-kss-entities-built.

# Include any custom commands dependencies for this target.
include einit/CMakeFiles/EinitQemu-kss-entities-built.dir/compiler_depend.make

# Include the progress variables for this target.
include einit/CMakeFiles/EinitQemu-kss-entities-built.dir/progress.make

einit/CMakeFiles/EinitQemu-kss-entities-built: control_system/ControlSystem
einit/CMakeFiles/EinitQemu-kss-entities-built: lights_gpio/LightsGPIO
einit/CMakeFiles/EinitQemu-kss-entities-built: diagnostics/Diagnostics
einit/CMakeFiles/EinitQemu-kss-entities-built: klog_storage/KlogStorageEntity
einit/CMakeFiles/EinitQemu-kss-entities-built: einit/EinitQemu
einit/CMakeFiles/EinitQemu-kss-entities-built: ../einit/src/klog_entity.c
	cd "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit" && touch EinitQemu-kss-entities-built

EinitQemu-kss-entities-built: einit/CMakeFiles/EinitQemu-kss-entities-built
EinitQemu-kss-entities-built: einit/CMakeFiles/EinitQemu-kss-entities-built.dir/build.make
.PHONY : EinitQemu-kss-entities-built

# Rule to build all files generated by this target.
einit/CMakeFiles/EinitQemu-kss-entities-built.dir/build: EinitQemu-kss-entities-built
.PHONY : einit/CMakeFiles/EinitQemu-kss-entities-built.dir/build

einit/CMakeFiles/EinitQemu-kss-entities-built.dir/clean:
	cd "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit" && $(CMAKE_COMMAND) -P CMakeFiles/EinitQemu-kss-entities-built.dir/cmake_clean.cmake
.PHONY : einit/CMakeFiles/EinitQemu-kss-entities-built.dir/clean

einit/CMakeFiles/EinitQemu-kss-entities-built.dir/depend:
	cd "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/einit" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/einit/CMakeFiles/EinitQemu-kss-entities-built.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : einit/CMakeFiles/EinitQemu-kss-entities-built.dir/depend

