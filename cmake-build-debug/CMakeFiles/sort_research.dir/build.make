# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /snap/clion/149/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/149/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/strikez/ntfs/C++/sort_research

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/strikez/ntfs/C++/sort_research/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sort_research.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sort_research.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sort_research.dir/flags.make

CMakeFiles/sort_research.dir/main.cpp.o: CMakeFiles/sort_research.dir/flags.make
CMakeFiles/sort_research.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/strikez/ntfs/C++/sort_research/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sort_research.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sort_research.dir/main.cpp.o -c /media/strikez/ntfs/C++/sort_research/main.cpp

CMakeFiles/sort_research.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sort_research.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/strikez/ntfs/C++/sort_research/main.cpp > CMakeFiles/sort_research.dir/main.cpp.i

CMakeFiles/sort_research.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sort_research.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/strikez/ntfs/C++/sort_research/main.cpp -o CMakeFiles/sort_research.dir/main.cpp.s

# Object files for target sort_research
sort_research_OBJECTS = \
"CMakeFiles/sort_research.dir/main.cpp.o"

# External object files for target sort_research
sort_research_EXTERNAL_OBJECTS =

sort_research: CMakeFiles/sort_research.dir/main.cpp.o
sort_research: CMakeFiles/sort_research.dir/build.make
sort_research: CMakeFiles/sort_research.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/strikez/ntfs/C++/sort_research/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sort_research"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sort_research.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sort_research.dir/build: sort_research

.PHONY : CMakeFiles/sort_research.dir/build

CMakeFiles/sort_research.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sort_research.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sort_research.dir/clean

CMakeFiles/sort_research.dir/depend:
	cd /media/strikez/ntfs/C++/sort_research/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/strikez/ntfs/C++/sort_research /media/strikez/ntfs/C++/sort_research /media/strikez/ntfs/C++/sort_research/cmake-build-debug /media/strikez/ntfs/C++/sort_research/cmake-build-debug /media/strikez/ntfs/C++/sort_research/cmake-build-debug/CMakeFiles/sort_research.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sort_research.dir/depend

