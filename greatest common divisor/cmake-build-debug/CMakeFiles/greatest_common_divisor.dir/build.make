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
CMAKE_SOURCE_DIR = "D:\code\8\greatest common divisor"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code\8\greatest common divisor\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/greatest_common_divisor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/greatest_common_divisor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/greatest_common_divisor.dir/flags.make

CMakeFiles/greatest_common_divisor.dir/main.c.obj: CMakeFiles/greatest_common_divisor.dir/flags.make
CMakeFiles/greatest_common_divisor.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code\8\greatest common divisor\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/greatest_common_divisor.dir/main.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\greatest_common_divisor.dir\main.c.obj -c "D:\code\8\greatest common divisor\main.c"

CMakeFiles/greatest_common_divisor.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/greatest_common_divisor.dir/main.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\code\8\greatest common divisor\main.c" > CMakeFiles\greatest_common_divisor.dir\main.c.i

CMakeFiles/greatest_common_divisor.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/greatest_common_divisor.dir/main.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\code\8\greatest common divisor\main.c" -o CMakeFiles\greatest_common_divisor.dir\main.c.s

# Object files for target greatest_common_divisor
greatest_common_divisor_OBJECTS = \
"CMakeFiles/greatest_common_divisor.dir/main.c.obj"

# External object files for target greatest_common_divisor
greatest_common_divisor_EXTERNAL_OBJECTS =

greatest_common_divisor.exe: CMakeFiles/greatest_common_divisor.dir/main.c.obj
greatest_common_divisor.exe: CMakeFiles/greatest_common_divisor.dir/build.make
greatest_common_divisor.exe: CMakeFiles/greatest_common_divisor.dir/linklibs.rsp
greatest_common_divisor.exe: CMakeFiles/greatest_common_divisor.dir/objects1.rsp
greatest_common_divisor.exe: CMakeFiles/greatest_common_divisor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code\8\greatest common divisor\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable greatest_common_divisor.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\greatest_common_divisor.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/greatest_common_divisor.dir/build: greatest_common_divisor.exe

.PHONY : CMakeFiles/greatest_common_divisor.dir/build

CMakeFiles/greatest_common_divisor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\greatest_common_divisor.dir\cmake_clean.cmake
.PHONY : CMakeFiles/greatest_common_divisor.dir/clean

CMakeFiles/greatest_common_divisor.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code\8\greatest common divisor" "D:\code\8\greatest common divisor" "D:\code\8\greatest common divisor\cmake-build-debug" "D:\code\8\greatest common divisor\cmake-build-debug" "D:\code\8\greatest common divisor\cmake-build-debug\CMakeFiles\greatest_common_divisor.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/greatest_common_divisor.dir/depend

