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
include CMakeFiles/addMethodServer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/addMethodServer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/addMethodServer.dir/flags.make

CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.o: CMakeFiles/addMethodServer.dir/flags.make
CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.o: ../src/addFunctionServer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/mzj/OPC_UA_GateWay/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.o   -c /home/pi/mzj/OPC_UA_GateWay/src/addFunctionServer.c

CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/mzj/OPC_UA_GateWay/src/addFunctionServer.c > CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.i

CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/mzj/OPC_UA_GateWay/src/addFunctionServer.c -o CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.s

CMakeFiles/addMethodServer.dir/open62541/open62541.c.o: CMakeFiles/addMethodServer.dir/flags.make
CMakeFiles/addMethodServer.dir/open62541/open62541.c.o: ../open62541/open62541.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/mzj/OPC_UA_GateWay/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/addMethodServer.dir/open62541/open62541.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/addMethodServer.dir/open62541/open62541.c.o   -c /home/pi/mzj/OPC_UA_GateWay/open62541/open62541.c

CMakeFiles/addMethodServer.dir/open62541/open62541.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/addMethodServer.dir/open62541/open62541.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/mzj/OPC_UA_GateWay/open62541/open62541.c > CMakeFiles/addMethodServer.dir/open62541/open62541.c.i

CMakeFiles/addMethodServer.dir/open62541/open62541.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/addMethodServer.dir/open62541/open62541.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/mzj/OPC_UA_GateWay/open62541/open62541.c -o CMakeFiles/addMethodServer.dir/open62541/open62541.c.s

# Object files for target addMethodServer
addMethodServer_OBJECTS = \
"CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.o" \
"CMakeFiles/addMethodServer.dir/open62541/open62541.c.o"

# External object files for target addMethodServer
addMethodServer_EXTERNAL_OBJECTS =

../bin/addMethodServer: CMakeFiles/addMethodServer.dir/src/addFunctionServer.c.o
../bin/addMethodServer: CMakeFiles/addMethodServer.dir/open62541/open62541.c.o
../bin/addMethodServer: CMakeFiles/addMethodServer.dir/build.make
../bin/addMethodServer: CMakeFiles/addMethodServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/mzj/OPC_UA_GateWay/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ../bin/addMethodServer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/addMethodServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/addMethodServer.dir/build: ../bin/addMethodServer

.PHONY : CMakeFiles/addMethodServer.dir/build

CMakeFiles/addMethodServer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/addMethodServer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/addMethodServer.dir/clean

CMakeFiles/addMethodServer.dir/depend:
	cd /home/pi/mzj/OPC_UA_GateWay/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/mzj/OPC_UA_GateWay /home/pi/mzj/OPC_UA_GateWay /home/pi/mzj/OPC_UA_GateWay/build /home/pi/mzj/OPC_UA_GateWay/build /home/pi/mzj/OPC_UA_GateWay/build/CMakeFiles/addMethodServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/addMethodServer.dir/depend

