# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/jhonatan/Downloads/clion-2019.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/jhonatan/Downloads/clion-2019.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jhonatan/Git-Repository/DataStructure-Activity

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Arvore.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Arvore.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Arvore.dir/flags.make

CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.o: CMakeFiles/Arvore.dir/flags.make
CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.o: ../Arvore_Binaria/Tree_pptx/Tree.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.o   -c /home/jhonatan/Git-Repository/DataStructure-Activity/Arvore_Binaria/Tree_pptx/Tree.c

CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jhonatan/Git-Repository/DataStructure-Activity/Arvore_Binaria/Tree_pptx/Tree.c > CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.i

CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jhonatan/Git-Repository/DataStructure-Activity/Arvore_Binaria/Tree_pptx/Tree.c -o CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.s

# Object files for target Arvore
Arvore_OBJECTS = \
"CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.o"

# External object files for target Arvore
Arvore_EXTERNAL_OBJECTS =

Arvore: CMakeFiles/Arvore.dir/Arvore_Binaria/Tree_pptx/Tree.c.o
Arvore: CMakeFiles/Arvore.dir/build.make
Arvore: CMakeFiles/Arvore.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Arvore"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Arvore.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Arvore.dir/build: Arvore

.PHONY : CMakeFiles/Arvore.dir/build

CMakeFiles/Arvore.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Arvore.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Arvore.dir/clean

CMakeFiles/Arvore.dir/depend:
	cd /home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jhonatan/Git-Repository/DataStructure-Activity /home/jhonatan/Git-Repository/DataStructure-Activity /home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug /home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug /home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug/CMakeFiles/Arvore.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Arvore.dir/depend
