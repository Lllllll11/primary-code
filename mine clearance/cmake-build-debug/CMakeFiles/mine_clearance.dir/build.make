# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\C\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\C\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\code\12\mine clearance"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code\12\mine clearance\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/mine_clearance.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mine_clearance.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mine_clearance.dir/flags.make

CMakeFiles/mine_clearance.dir/main.c.obj: CMakeFiles/mine_clearance.dir/flags.make
CMakeFiles/mine_clearance.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code\12\mine clearance\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/mine_clearance.dir/main.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\mine_clearance.dir\main.c.obj -c "D:\code\12\mine clearance\main.c"

CMakeFiles/mine_clearance.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mine_clearance.dir/main.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\code\12\mine clearance\main.c" > CMakeFiles\mine_clearance.dir\main.c.i

CMakeFiles/mine_clearance.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mine_clearance.dir/main.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\code\12\mine clearance\main.c" -o CMakeFiles\mine_clearance.dir\main.c.s

CMakeFiles/mine_clearance.dir/game.c.obj: CMakeFiles/mine_clearance.dir/flags.make
CMakeFiles/mine_clearance.dir/game.c.obj: ../game.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code\12\mine clearance\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/mine_clearance.dir/game.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\mine_clearance.dir\game.c.obj -c "D:\code\12\mine clearance\game.c"

CMakeFiles/mine_clearance.dir/game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mine_clearance.dir/game.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\code\12\mine clearance\game.c" > CMakeFiles\mine_clearance.dir\game.c.i

CMakeFiles/mine_clearance.dir/game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mine_clearance.dir/game.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\code\12\mine clearance\game.c" -o CMakeFiles\mine_clearance.dir\game.c.s

# Object files for target mine_clearance
mine_clearance_OBJECTS = \
"CMakeFiles/mine_clearance.dir/main.c.obj" \
"CMakeFiles/mine_clearance.dir/game.c.obj"

# External object files for target mine_clearance
mine_clearance_EXTERNAL_OBJECTS =

mine_clearance.exe: CMakeFiles/mine_clearance.dir/main.c.obj
mine_clearance.exe: CMakeFiles/mine_clearance.dir/game.c.obj
mine_clearance.exe: CMakeFiles/mine_clearance.dir/build.make
mine_clearance.exe: CMakeFiles/mine_clearance.dir/linklibs.rsp
mine_clearance.exe: CMakeFiles/mine_clearance.dir/objects1.rsp
mine_clearance.exe: CMakeFiles/mine_clearance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code\12\mine clearance\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable mine_clearance.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mine_clearance.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mine_clearance.dir/build: mine_clearance.exe

.PHONY : CMakeFiles/mine_clearance.dir/build

CMakeFiles/mine_clearance.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mine_clearance.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mine_clearance.dir/clean

CMakeFiles/mine_clearance.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code\12\mine clearance" "D:\code\12\mine clearance" "D:\code\12\mine clearance\cmake-build-debug" "D:\code\12\mine clearance\cmake-build-debug" "D:\code\12\mine clearance\cmake-build-debug\CMakeFiles\mine_clearance.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/mine_clearance.dir/depend

