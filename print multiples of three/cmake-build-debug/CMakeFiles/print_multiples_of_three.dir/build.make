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
CMAKE_SOURCE_DIR = "D:\code\8\print multiples of three"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code\8\print multiples of three\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/print_multiples_of_three.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/print_multiples_of_three.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/print_multiples_of_three.dir/flags.make

CMakeFiles/print_multiples_of_three.dir/main.c.obj: CMakeFiles/print_multiples_of_three.dir/flags.make
CMakeFiles/print_multiples_of_three.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code\8\print multiples of three\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/print_multiples_of_three.dir/main.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\print_multiples_of_three.dir\main.c.obj -c "D:\code\8\print multiples of three\main.c"

CMakeFiles/print_multiples_of_three.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/print_multiples_of_three.dir/main.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\code\8\print multiples of three\main.c" > CMakeFiles\print_multiples_of_three.dir\main.c.i

CMakeFiles/print_multiples_of_three.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/print_multiples_of_three.dir/main.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\code\8\print multiples of three\main.c" -o CMakeFiles\print_multiples_of_three.dir\main.c.s

# Object files for target print_multiples_of_three
print_multiples_of_three_OBJECTS = \
"CMakeFiles/print_multiples_of_three.dir/main.c.obj"

# External object files for target print_multiples_of_three
print_multiples_of_three_EXTERNAL_OBJECTS =

print_multiples_of_three.exe: CMakeFiles/print_multiples_of_three.dir/main.c.obj
print_multiples_of_three.exe: CMakeFiles/print_multiples_of_three.dir/build.make
print_multiples_of_three.exe: CMakeFiles/print_multiples_of_three.dir/linklibs.rsp
print_multiples_of_three.exe: CMakeFiles/print_multiples_of_three.dir/objects1.rsp
print_multiples_of_three.exe: CMakeFiles/print_multiples_of_three.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code\8\print multiples of three\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable print_multiples_of_three.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\print_multiples_of_three.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/print_multiples_of_three.dir/build: print_multiples_of_three.exe

.PHONY : CMakeFiles/print_multiples_of_three.dir/build

CMakeFiles/print_multiples_of_three.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\print_multiples_of_three.dir\cmake_clean.cmake
.PHONY : CMakeFiles/print_multiples_of_three.dir/clean

CMakeFiles/print_multiples_of_three.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code\8\print multiples of three" "D:\code\8\print multiples of three" "D:\code\8\print multiples of three\cmake-build-debug" "D:\code\8\print multiples of three\cmake-build-debug" "D:\code\8\print multiples of three\cmake-build-debug\CMakeFiles\print_multiples_of_three.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/print_multiples_of_three.dir/depend

