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
include lights_gpio/CMakeFiles/LightsGPIO.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lights_gpio/CMakeFiles/LightsGPIO.dir/compiler_depend.make

# Include the progress variables for this target.
include lights_gpio/CMakeFiles/LightsGPIO.dir/progress.make

# Include the compile flags for this target's objects.
include lights_gpio/CMakeFiles/LightsGPIO.dir/flags.make

lights_gpio/CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.o: lights_gpio/CMakeFiles/LightsGPIO.dir/flags.make
lights_gpio/CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.o: ../lights_gpio/src/lights_gpio.c
lights_gpio/CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.o: lights_gpio/CMakeFiles/LightsGPIO.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lights_gpio/CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.o"
	cd /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/lights_gpio && /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/aarch64-kos-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lights_gpio/CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.o -MF CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.o.d -o CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.o -c /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/lights_gpio/src/lights_gpio.c

lights_gpio/CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.i"
	cd /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/lights_gpio && /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/aarch64-kos-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/lights_gpio/src/lights_gpio.c > CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.i

lights_gpio/CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.s"
	cd /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/lights_gpio && /opt/KasperskyOS-Community-Edition-1.1.1.40/toolchain/bin/aarch64-kos-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/lights_gpio/src/lights_gpio.c -o CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.s

# Object files for target LightsGPIO
LightsGPIO_OBJECTS = \
"CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.o"

# External object files for target LightsGPIO
LightsGPIO_EXTERNAL_OBJECTS =

lights_gpio/LightsGPIO: lights_gpio/CMakeFiles/LightsGPIO.dir/src/lights_gpio.c.o
lights_gpio/LightsGPIO: lights_gpio/CMakeFiles/LightsGPIO.dir/build.make
lights_gpio/LightsGPIO: lights_gpio/CMakeFiles/LightsGPIO.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LightsGPIO"
	cd /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/lights_gpio && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LightsGPIO.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lights_gpio/CMakeFiles/LightsGPIO.dir/build: lights_gpio/LightsGPIO
.PHONY : lights_gpio/CMakeFiles/LightsGPIO.dir/build

lights_gpio/CMakeFiles/LightsGPIO.dir/clean:
	cd /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/lights_gpio && $(CMAKE_COMMAND) -P CMakeFiles/LightsGPIO.dir/cmake_clean.cmake
.PHONY : lights_gpio/CMakeFiles/LightsGPIO.dir/clean

lights_gpio/CMakeFiles/LightsGPIO.dir/depend:
	cd /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/lights_gpio /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/lights_gpio /home/vboxuser/Documents/Day_2/cyberimmune-systems-example-traffic-light-kos/build/lights_gpio/CMakeFiles/LightsGPIO.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lights_gpio/CMakeFiles/LightsGPIO.dir/depend

