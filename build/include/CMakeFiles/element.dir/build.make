# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = C:/sdk/cmake/bin/cmake.exe

# The command to remove a file.
RM = C:/sdk/cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build

# Include any dependencies generated for this target.
include include/CMakeFiles/element.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include include/CMakeFiles/element.dir/compiler_depend.make

# Include the progress variables for this target.
include include/CMakeFiles/element.dir/progress.make

# Include the compile flags for this target's objects.
include include/CMakeFiles/element.dir/flags.make

include/CMakeFiles/element.dir/__/src/element.cpp.obj: include/CMakeFiles/element.dir/flags.make
include/CMakeFiles/element.dir/__/src/element.cpp.obj: include/CMakeFiles/element.dir/includes_CXX.rsp
include/CMakeFiles/element.dir/__/src/element.cpp.obj: C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/src/element.cpp
include/CMakeFiles/element.dir/__/src/element.cpp.obj: include/CMakeFiles/element.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object include/CMakeFiles/element.dir/__/src/element.cpp.obj"
	cd C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build/include && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT include/CMakeFiles/element.dir/__/src/element.cpp.obj -MF CMakeFiles/element.dir/__/src/element.cpp.obj.d -o CMakeFiles/element.dir/__/src/element.cpp.obj -c C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/src/element.cpp

include/CMakeFiles/element.dir/__/src/element.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/element.dir/__/src/element.cpp.i"
	cd C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build/include && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/src/element.cpp > CMakeFiles/element.dir/__/src/element.cpp.i

include/CMakeFiles/element.dir/__/src/element.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/element.dir/__/src/element.cpp.s"
	cd C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build/include && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/src/element.cpp -o CMakeFiles/element.dir/__/src/element.cpp.s

# Object files for target element
element_OBJECTS = \
"CMakeFiles/element.dir/__/src/element.cpp.obj"

# External object files for target element
element_EXTERNAL_OBJECTS =

include/libelement.a: include/CMakeFiles/element.dir/__/src/element.cpp.obj
include/libelement.a: include/CMakeFiles/element.dir/build.make
include/libelement.a: include/CMakeFiles/element.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libelement.a"
	cd C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build/include && $(CMAKE_COMMAND) -P CMakeFiles/element.dir/cmake_clean_target.cmake
	cd C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build/include && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/element.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
include/CMakeFiles/element.dir/build: include/libelement.a
.PHONY : include/CMakeFiles/element.dir/build

include/CMakeFiles/element.dir/clean:
	cd C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build/include && $(CMAKE_COMMAND) -P CMakeFiles/element.dir/cmake_clean.cmake
.PHONY : include/CMakeFiles/element.dir/clean

include/CMakeFiles/element.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0 C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/include C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build/include C:/Users/miros/Desktop/faks/OOP/lab/ws/lab4_0/build/include/CMakeFiles/element.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : include/CMakeFiles/element.dir/depend

