# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_SOURCE_DIR = "/home/logan/git/Sorting_Algorithms/Sorting Algorithms"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/logan/git/Sorting_Algorithms/Sorting Algorithms/build"

# Include any dependencies generated for this target.
include CMakeFiles/Sorting.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Sorting.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Sorting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sorting.dir/flags.make

CMakeFiles/Sorting.dir/codegen:
.PHONY : CMakeFiles/Sorting.dir/codegen

CMakeFiles/Sorting.dir/Counting_Sort.cpp.o: CMakeFiles/Sorting.dir/flags.make
CMakeFiles/Sorting.dir/Counting_Sort.cpp.o: /home/logan/git/Sorting_Algorithms/Sorting\ Algorithms/Counting_Sort.cpp
CMakeFiles/Sorting.dir/Counting_Sort.cpp.o: CMakeFiles/Sorting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/logan/git/Sorting_Algorithms/Sorting Algorithms/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sorting.dir/Counting_Sort.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Sorting.dir/Counting_Sort.cpp.o -MF CMakeFiles/Sorting.dir/Counting_Sort.cpp.o.d -o CMakeFiles/Sorting.dir/Counting_Sort.cpp.o -c "/home/logan/git/Sorting_Algorithms/Sorting Algorithms/Counting_Sort.cpp"

CMakeFiles/Sorting.dir/Counting_Sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Sorting.dir/Counting_Sort.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/logan/git/Sorting_Algorithms/Sorting Algorithms/Counting_Sort.cpp" > CMakeFiles/Sorting.dir/Counting_Sort.cpp.i

CMakeFiles/Sorting.dir/Counting_Sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Sorting.dir/Counting_Sort.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/logan/git/Sorting_Algorithms/Sorting Algorithms/Counting_Sort.cpp" -o CMakeFiles/Sorting.dir/Counting_Sort.cpp.s

# Object files for target Sorting
Sorting_OBJECTS = \
"CMakeFiles/Sorting.dir/Counting_Sort.cpp.o"

# External object files for target Sorting
Sorting_EXTERNAL_OBJECTS =

Sorting: CMakeFiles/Sorting.dir/Counting_Sort.cpp.o
Sorting: CMakeFiles/Sorting.dir/build.make
Sorting: CMakeFiles/Sorting.dir/compiler_depend.ts
Sorting: CMakeFiles/Sorting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/logan/git/Sorting_Algorithms/Sorting Algorithms/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sorting"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sorting.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sorting.dir/build: Sorting
.PHONY : CMakeFiles/Sorting.dir/build

CMakeFiles/Sorting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sorting.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sorting.dir/clean

CMakeFiles/Sorting.dir/depend:
	cd "/home/logan/git/Sorting_Algorithms/Sorting Algorithms/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/logan/git/Sorting_Algorithms/Sorting Algorithms" "/home/logan/git/Sorting_Algorithms/Sorting Algorithms" "/home/logan/git/Sorting_Algorithms/Sorting Algorithms/build" "/home/logan/git/Sorting_Algorithms/Sorting Algorithms/build" "/home/logan/git/Sorting_Algorithms/Sorting Algorithms/build/CMakeFiles/Sorting.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Sorting.dir/depend

