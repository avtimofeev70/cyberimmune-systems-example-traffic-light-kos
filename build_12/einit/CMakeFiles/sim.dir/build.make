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

# Utility rule file for sim.

# Include any custom commands dependencies for this target.
include einit/CMakeFiles/sim.dir/compiler_depend.make

# Include the progress variables for this target.
include einit/CMakeFiles/sim.dir/progress.make

einit/CMakeFiles/sim:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running QEMU with KasperskyOS image..."
	cd /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/einit && /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/qemu-system-aarch64 -m 2048 -machine vexpress-a15,secure=on -cpu cortex-a72 -nographic -monitor none -smp 4 -nic user -serial stdio -kernel /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/einit/kos-qemu-image

sim: einit/CMakeFiles/sim
sim: einit/CMakeFiles/sim.dir/build.make
.PHONY : sim

# Rule to build all files generated by this target.
einit/CMakeFiles/sim.dir/build: sim
.PHONY : einit/CMakeFiles/sim.dir/build

einit/CMakeFiles/sim.dir/clean:
	cd /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/einit && $(CMAKE_COMMAND) -P CMakeFiles/sim.dir/cmake_clean.cmake
.PHONY : einit/CMakeFiles/sim.dir/clean

einit/CMakeFiles/sim.dir/depend:
	cd /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/einit /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/einit /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/einit/CMakeFiles/sim.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : einit/CMakeFiles/sim.dir/depend

