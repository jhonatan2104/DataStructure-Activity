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
include CMakeFiles/Fila_Encadeada.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Fila_Encadeada.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Fila_Encadeada.dir/flags.make

CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.o: CMakeFiles/Fila_Encadeada.dir/flags.make
CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.o: ../Fila_Encadeada/filaencadeada.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.o   -c /home/jhonatan/Git-Repository/DataStructure-Activity/Fila_Encadeada/filaencadeada.c

CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jhonatan/Git-Repository/DataStructure-Activity/Fila_Encadeada/filaencadeada.c > CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.i

CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jhonatan/Git-Repository/DataStructure-Activity/Fila_Encadeada/filaencadeada.c -o CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.s

# Object files for target Fila_Encadeada
Fila_Encadeada_OBJECTS = \
"CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.o"

# External object files for target Fila_Encadeada
Fila_Encadeada_EXTERNAL_OBJECTS =

Fila_Encadeada: CMakeFiles/Fila_Encadeada.dir/Fila_Encadeada/filaencadeada.c.o
Fila_Encadeada: CMakeFiles/Fila_Encadeada.dir/build.make
Fila_Encadeada: CMakeFiles/Fila_Encadeada.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Fila_Encadeada"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Fila_Encadeada.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Fila_Encadeada.dir/build: Fila_Encadeada

.PHONY : CMakeFiles/Fila_Encadeada.dir/build

CMakeFiles/Fila_Encadeada.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Fila_Encadeada.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Fila_Encadeada.dir/clean

CMakeFiles/Fila_Encadeada.dir/depend:
	cd /home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jhonatan/Git-Repository/DataStructure-Activity /home/jhonatan/Git-Repository/DataStructure-Activity /home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug /home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug /home/jhonatan/Git-Repository/DataStructure-Activity/cmake-build-debug/CMakeFiles/Fila_Encadeada.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Fila_Encadeada.dir/depend

