# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/0ggmr0/code/C++/jumphorse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/0ggmr0/code/C++/jumphorse/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/jumphorse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/jumphorse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/jumphorse.dir/flags.make

CMakeFiles/jumphorse.dir/main.cpp.o: CMakeFiles/jumphorse.dir/flags.make
CMakeFiles/jumphorse.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/0ggmr0/code/C++/jumphorse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/jumphorse.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jumphorse.dir/main.cpp.o -c /Users/0ggmr0/code/C++/jumphorse/main.cpp

CMakeFiles/jumphorse.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jumphorse.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/0ggmr0/code/C++/jumphorse/main.cpp > CMakeFiles/jumphorse.dir/main.cpp.i

CMakeFiles/jumphorse.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jumphorse.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/0ggmr0/code/C++/jumphorse/main.cpp -o CMakeFiles/jumphorse.dir/main.cpp.s

# Object files for target jumphorse
jumphorse_OBJECTS = \
"CMakeFiles/jumphorse.dir/main.cpp.o"

# External object files for target jumphorse
jumphorse_EXTERNAL_OBJECTS =

jumphorse: CMakeFiles/jumphorse.dir/main.cpp.o
jumphorse: CMakeFiles/jumphorse.dir/build.make
jumphorse: CMakeFiles/jumphorse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/0ggmr0/code/C++/jumphorse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable jumphorse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jumphorse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/jumphorse.dir/build: jumphorse

.PHONY : CMakeFiles/jumphorse.dir/build

CMakeFiles/jumphorse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/jumphorse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/jumphorse.dir/clean

CMakeFiles/jumphorse.dir/depend:
	cd /Users/0ggmr0/code/C++/jumphorse/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/0ggmr0/code/C++/jumphorse /Users/0ggmr0/code/C++/jumphorse /Users/0ggmr0/code/C++/jumphorse/cmake-build-debug /Users/0ggmr0/code/C++/jumphorse/cmake-build-debug /Users/0ggmr0/code/C++/jumphorse/cmake-build-debug/CMakeFiles/jumphorse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/jumphorse.dir/depend

