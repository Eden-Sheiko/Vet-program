# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/c/Users/Eden/CLionProjects/Vet program"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/Eden/CLionProjects/Vet program/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Vet_program.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Vet_program.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Vet_program.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Vet_program.dir/flags.make

CMakeFiles/Vet_program.dir/main.cpp.o: CMakeFiles/Vet_program.dir/flags.make
CMakeFiles/Vet_program.dir/main.cpp.o: /mnt/c/Users/Eden/CLionProjects/Vet\ program/main.cpp
CMakeFiles/Vet_program.dir/main.cpp.o: CMakeFiles/Vet_program.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Eden/CLionProjects/Vet program/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Vet_program.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Vet_program.dir/main.cpp.o -MF CMakeFiles/Vet_program.dir/main.cpp.o.d -o CMakeFiles/Vet_program.dir/main.cpp.o -c "/mnt/c/Users/Eden/CLionProjects/Vet program/main.cpp"

CMakeFiles/Vet_program.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vet_program.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Eden/CLionProjects/Vet program/main.cpp" > CMakeFiles/Vet_program.dir/main.cpp.i

CMakeFiles/Vet_program.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vet_program.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Eden/CLionProjects/Vet program/main.cpp" -o CMakeFiles/Vet_program.dir/main.cpp.s

# Object files for target Vet_program
Vet_program_OBJECTS = \
"CMakeFiles/Vet_program.dir/main.cpp.o"

# External object files for target Vet_program
Vet_program_EXTERNAL_OBJECTS =

Vet_program: CMakeFiles/Vet_program.dir/main.cpp.o
Vet_program: CMakeFiles/Vet_program.dir/build.make
Vet_program: CMakeFiles/Vet_program.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/Eden/CLionProjects/Vet program/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Vet_program"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Vet_program.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Vet_program.dir/build: Vet_program
.PHONY : CMakeFiles/Vet_program.dir/build

CMakeFiles/Vet_program.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Vet_program.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Vet_program.dir/clean

CMakeFiles/Vet_program.dir/depend:
	cd "/mnt/c/Users/Eden/CLionProjects/Vet program/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/Eden/CLionProjects/Vet program" "/mnt/c/Users/Eden/CLionProjects/Vet program" "/mnt/c/Users/Eden/CLionProjects/Vet program/cmake-build-debug" "/mnt/c/Users/Eden/CLionProjects/Vet program/cmake-build-debug" "/mnt/c/Users/Eden/CLionProjects/Vet program/cmake-build-debug/CMakeFiles/Vet_program.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Vet_program.dir/depend
