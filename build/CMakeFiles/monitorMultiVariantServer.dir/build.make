# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pi/mzj/OPC_UA_GateWay

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/mzj/OPC_UA_GateWay/build

# Include any dependencies generated for this target.
include CMakeFiles/monitorMultiVariantServer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/monitorMultiVariantServer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/monitorMultiVariantServer.dir/flags.make

CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.o: CMakeFiles/monitorMultiVariantServer.dir/flags.make
CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.o: ../src/monitorMultiVariableServer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/mzj/OPC_UA_GateWay/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.o   -c /home/pi/mzj/OPC_UA_GateWay/src/monitorMultiVariableServer.c

CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/mzj/OPC_UA_GateWay/src/monitorMultiVariableServer.c > CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.i

CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/mzj/OPC_UA_GateWay/src/monitorMultiVariableServer.c -o CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.s

CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.o: CMakeFiles/monitorMultiVariantServer.dir/flags.make
CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.o: ../open62541/open62541.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/mzj/OPC_UA_GateWay/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.o   -c /home/pi/mzj/OPC_UA_GateWay/open62541/open62541.c

CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/mzj/OPC_UA_GateWay/open62541/open62541.c > CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.i

CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/mzj/OPC_UA_GateWay/open62541/open62541.c -o CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.s

# Object files for target monitorMultiVariantServer
monitorMultiVariantServer_OBJECTS = \
"CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.o" \
"CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.o"

# External object files for target monitorMultiVariantServer
monitorMultiVariantServer_EXTERNAL_OBJECTS =

../bin/monitorMultiVariantServer: CMakeFiles/monitorMultiVariantServer.dir/src/monitorMultiVariableServer.c.o
../bin/monitorMultiVariantServer: CMakeFiles/monitorMultiVariantServer.dir/open62541/open62541.c.o
../bin/monitorMultiVariantServer: CMakeFiles/monitorMultiVariantServer.dir/build.make
../bin/monitorMultiVariantServer: CMakeFiles/monitorMultiVariantServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/mzj/OPC_UA_GateWay/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ../bin/monitorMultiVariantServer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/monitorMultiVariantServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/monitorMultiVariantServer.dir/build: ../bin/monitorMultiVariantServer

.PHONY : CMakeFiles/monitorMultiVariantServer.dir/build

CMakeFiles/monitorMultiVariantServer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/monitorMultiVariantServer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/monitorMultiVariantServer.dir/clean

CMakeFiles/monitorMultiVariantServer.dir/depend:
	cd /home/pi/mzj/OPC_UA_GateWay/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/mzj/OPC_UA_GateWay /home/pi/mzj/OPC_UA_GateWay /home/pi/mzj/OPC_UA_GateWay/build /home/pi/mzj/OPC_UA_GateWay/build /home/pi/mzj/OPC_UA_GateWay/build/CMakeFiles/monitorMultiVariantServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/monitorMultiVariantServer.dir/depend

