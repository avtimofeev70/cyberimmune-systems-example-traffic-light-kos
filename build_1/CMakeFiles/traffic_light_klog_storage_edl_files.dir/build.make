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
include CMakeFiles/traffic_light_klog_storage_edl_files.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/traffic_light_klog_storage_edl_files.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/traffic_light_klog_storage_edl_files.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/traffic_light_klog_storage_edl_files.dir/flags.make

_headers_/traffic_light/KlogStorageEntity.edl.h: KlogStorageEntity.edl.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Generating _headers_/traffic_light/KlogStorageEntity.edl.h"
	/opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/cmake -E copy /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/KlogStorageEntity.edl.h /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/_headers_/traffic_light/../traffic_light/KlogStorageEntity.edl.h

KlogStorageEntity.edl.h: _headers_/traffic_light/KlogStorageEntity.edl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Generating KlogStorageEntity.edl.h"
	/opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/nk-gen-c -I /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/_headers_ -I /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/_headers_/traffic_light/.. -I /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/../install/include -I /opt/KasperskyOS-Community-Edition-1.1.1.40/sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/aarch64-kos/include -I /sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/include -P /opt/KasperskyOS-Community-Edition-1.1.1.40/sysroot-aarch64-kos/include/system.platform -I /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/_headers_/traffic_light/../traffic_light /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/_headers_/traffic_light/../traffic_light/KlogStorageEntity.edl

_headers_/traffic_light/KlogStorageEntity.edl: ../resources/KlogStorageEntity.edl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Generating _headers_/traffic_light/KlogStorageEntity.edl"
	/opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/cmake -E copy /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/resources/KlogStorageEntity.edl /media/sf_VM_share/Day\ 22/cyberimmune-systems-example-traffic-light-kos/build/_headers_/traffic_light/../traffic_light/KlogStorageEntity.edl

traffic_light_klog_storage_edl_files: CMakeFiles/traffic_light_klog_storage_edl_files.dir/build.make
.PHONY : traffic_light_klog_storage_edl_files

# Rule to build all files generated by this target.
CMakeFiles/traffic_light_klog_storage_edl_files.dir/build: traffic_light_klog_storage_edl_files
.PHONY : CMakeFiles/traffic_light_klog_storage_edl_files.dir/build

CMakeFiles/traffic_light_klog_storage_edl_files.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/traffic_light_klog_storage_edl_files.dir/cmake_clean.cmake
.PHONY : CMakeFiles/traffic_light_klog_storage_edl_files.dir/clean

CMakeFiles/traffic_light_klog_storage_edl_files.dir/depend: KlogStorageEntity.edl.h
CMakeFiles/traffic_light_klog_storage_edl_files.dir/depend: _headers_/traffic_light/KlogStorageEntity.edl
CMakeFiles/traffic_light_klog_storage_edl_files.dir/depend: _headers_/traffic_light/KlogStorageEntity.edl.h
	cd "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build" "/media/sf_VM_share/Day 22/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles/traffic_light_klog_storage_edl_files.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/traffic_light_klog_storage_edl_files.dir/depend

