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
CMAKE_SOURCE_DIR = "D:\code\13\swap array"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code\13\swap array\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/swap_array.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/swap_array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/swap_array.dir/flags.make

CMakeFiles/swap_array.dir/main.c.obj: CMakeFiles/swap_array.dir/flags.make
CMakeFiles/swap_array.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code\13\swap array\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/swap_array.dir/main.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\swap_array.dir\main.c.obj -c "D:\code\13\swap array\main.c"

CMakeFiles/swap_array.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/swap_array.dir/main.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\code\13\swap array\main.c" > CMakeFiles\swap_array.dir\main.c.i

CMakeFiles/swap_array.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/swap_array.dir/main.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\code\13\swap array\main.c" -o CMakeFiles\swap_array.dir\main.c.s

# Object files for target swap_array
swap_array_OBJECTS = \
"CMakeFiles/swap_array.dir/main.c.obj"

# External object files for target swap_array
swap_array_EXTERNAL_OBJECTS =

swap_array.exe: CMakeFiles/swap_array.dir/main.c.obj
swap_array.exe: CMakeFiles/swap_array.dir/build.make
swap_array.exe: CMakeFiles/swap_array.dir/linklibs.rsp
swap_array.exe: CMakeFiles/swap_array.dir/objects1.rsp
swap_array.exe: CMakeFiles/swap_array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code\13\swap array\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable swap_array.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\swap_array.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/swap_array.dir/build: swap_array.exe

.PHONY : CMakeFiles/swap_array.dir/build

CMakeFiles/swap_array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\swap_array.dir\cmake_clean.cmake
.PHONY : CMakeFiles/swap_array.dir/clean

CMakeFiles/swap_array.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code\13\swap array" "D:\code\13\swap array" "D:\code\13\swap array\cmake-build-debug" "D:\code\13\swap array\cmake-build-debug" "D:\code\13\swap array\cmake-build-debug\CMakeFiles\swap_array.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/swap_array.dir/depend

