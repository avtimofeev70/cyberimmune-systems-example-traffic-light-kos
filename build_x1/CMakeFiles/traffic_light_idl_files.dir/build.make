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
CMAKE_SOURCE_DIR = /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build

# Include any dependencies generated for this target.
include CMakeFiles/traffic_light_idl_files.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/traffic_light_idl_files.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/traffic_light_idl_files.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/traffic_light_idl_files.dir/flags.make

_headers_/traffic_light/IMode.idl.h: IMode.idl.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating _headers_/traffic_light/IMode.idl.h"
	/opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/cmake -E copy /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/IMode.idl.h /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/_headers_/traffic_light/../traffic_light/IMode.idl.h

IMode.idl.h: _headers_/traffic_light/IMode.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating IMode.idl.h"
	/opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/nk-gen-c -I /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/_headers_ -I /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/_headers_/traffic_light/.. -I /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/../install/include -I /opt/KasperskyOS-Community-Edition-1.1.1.40/sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/aarch64-kos/include -I /sysroot-aarch64-kos/include -I /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/include -P /opt/KasperskyOS-Community-Edition-1.1.1.40/sysroot-aarch64-kos/include/system.platform -I /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/_headers_/traffic_light/../traffic_light /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/_headers_/traffic_light/../traffic_light/IMode.idl

_headers_/traffic_light/IMode.idl: ../resources/IMode.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating _headers_/traffic_light/IMode.idl"
	/opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/cmake -E copy /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/resources/IMode.idl /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/_headers_/traffic_light/../traffic_light/IMode.idl

traffic_light_idl_files: CMakeFiles/traffic_light_idl_files.dir/build.make
.PHONY : traffic_light_idl_files

# Rule to build all files generated by this target.
CMakeFiles/traffic_light_idl_files.dir/build: traffic_light_idl_files
.PHONY : CMakeFiles/traffic_light_idl_files.dir/build

CMakeFiles/traffic_light_idl_files.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/traffic_light_idl_files.dir/cmake_clean.cmake
.PHONY : CMakeFiles/traffic_light_idl_files.dir/clean

CMakeFiles/traffic_light_idl_files.dir/depend: IMode.idl.h
CMakeFiles/traffic_light_idl_files.dir/depend: _headers_/traffic_light/IMode.idl
CMakeFiles/traffic_light_idl_files.dir/depend: _headers_/traffic_light/IMode.idl.h
	cd /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles/traffic_light_idl_files.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/traffic_light_idl_files.dir/depend
