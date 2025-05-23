# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/ethan/opencv_build/opencv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ethan/opencv_build/build

# Include any dependencies generated for this target.
include modules/face/CMakeFiles/opencv_face.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include modules/face/CMakeFiles/opencv_face.dir/compiler_depend.make

# Include the progress variables for this target.
include modules/face/CMakeFiles/opencv_face.dir/progress.make

# Include the compile flags for this target's objects.
include modules/face/CMakeFiles/opencv_face.dir/flags.make

modules/face/CMakeFiles/opencv_face.dir/src/bif.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/bif.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/bif.cpp
modules/face/CMakeFiles/opencv_face.dir/src/bif.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/bif.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/bif.cpp.o -MF CMakeFiles/opencv_face.dir/src/bif.cpp.o.d -o CMakeFiles/opencv_face.dir/src/bif.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/bif.cpp

modules/face/CMakeFiles/opencv_face.dir/src/bif.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/bif.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/bif.cpp > CMakeFiles/opencv_face.dir/src/bif.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/bif.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/bif.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/bif.cpp -o CMakeFiles/opencv_face.dir/src/bif.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/eigen_faces.cpp
modules/face/CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.o -MF CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.o.d -o CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/eigen_faces.cpp

modules/face/CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/eigen_faces.cpp > CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/eigen_faces.cpp -o CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/face_alignment.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/face_alignment.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/face_alignment.cpp
modules/face/CMakeFiles/opencv_face.dir/src/face_alignment.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/face_alignment.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/face_alignment.cpp.o -MF CMakeFiles/opencv_face.dir/src/face_alignment.cpp.o.d -o CMakeFiles/opencv_face.dir/src/face_alignment.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/face_alignment.cpp

modules/face/CMakeFiles/opencv_face.dir/src/face_alignment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/face_alignment.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/face_alignment.cpp > CMakeFiles/opencv_face.dir/src/face_alignment.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/face_alignment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/face_alignment.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/face_alignment.cpp -o CMakeFiles/opencv_face.dir/src/face_alignment.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/face_basic.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/face_basic.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/face_basic.cpp
modules/face/CMakeFiles/opencv_face.dir/src/face_basic.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/face_basic.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/face_basic.cpp.o -MF CMakeFiles/opencv_face.dir/src/face_basic.cpp.o.d -o CMakeFiles/opencv_face.dir/src/face_basic.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/face_basic.cpp

modules/face/CMakeFiles/opencv_face.dir/src/face_basic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/face_basic.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/face_basic.cpp > CMakeFiles/opencv_face.dir/src/face_basic.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/face_basic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/face_basic.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/face_basic.cpp -o CMakeFiles/opencv_face.dir/src/face_basic.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/facemark.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/facemark.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemark.cpp
modules/face/CMakeFiles/opencv_face.dir/src/facemark.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/facemark.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/facemark.cpp.o -MF CMakeFiles/opencv_face.dir/src/facemark.cpp.o.d -o CMakeFiles/opencv_face.dir/src/facemark.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemark.cpp

modules/face/CMakeFiles/opencv_face.dir/src/facemark.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/facemark.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemark.cpp > CMakeFiles/opencv_face.dir/src/facemark.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/facemark.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/facemark.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemark.cpp -o CMakeFiles/opencv_face.dir/src/facemark.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemarkAAM.cpp
modules/face/CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.o -MF CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.o.d -o CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemarkAAM.cpp

modules/face/CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemarkAAM.cpp > CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemarkAAM.cpp -o CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemarkLBF.cpp
modules/face/CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.o -MF CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.o.d -o CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemarkLBF.cpp

modules/face/CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemarkLBF.cpp > CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/facemarkLBF.cpp -o CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/facerec.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/facerec.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/facerec.cpp
modules/face/CMakeFiles/opencv_face.dir/src/facerec.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/facerec.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/facerec.cpp.o -MF CMakeFiles/opencv_face.dir/src/facerec.cpp.o.d -o CMakeFiles/opencv_face.dir/src/facerec.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/facerec.cpp

modules/face/CMakeFiles/opencv_face.dir/src/facerec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/facerec.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/facerec.cpp > CMakeFiles/opencv_face.dir/src/facerec.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/facerec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/facerec.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/facerec.cpp -o CMakeFiles/opencv_face.dir/src/facerec.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/fisher_faces.cpp
modules/face/CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.o -MF CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.o.d -o CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/fisher_faces.cpp

modules/face/CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/fisher_faces.cpp > CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/fisher_faces.cpp -o CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/getlandmarks.cpp
modules/face/CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.o -MF CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.o.d -o CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/getlandmarks.cpp

modules/face/CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/getlandmarks.cpp > CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/getlandmarks.cpp -o CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/lbph_faces.cpp
modules/face/CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.o -MF CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.o.d -o CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/lbph_faces.cpp

modules/face/CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/lbph_faces.cpp > CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/lbph_faces.cpp -o CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/mace.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/mace.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/mace.cpp
modules/face/CMakeFiles/opencv_face.dir/src/mace.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/mace.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/mace.cpp.o -MF CMakeFiles/opencv_face.dir/src/mace.cpp.o.d -o CMakeFiles/opencv_face.dir/src/mace.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/mace.cpp

modules/face/CMakeFiles/opencv_face.dir/src/mace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/mace.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/mace.cpp > CMakeFiles/opencv_face.dir/src/mace.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/mace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/mace.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/mace.cpp -o CMakeFiles/opencv_face.dir/src/mace.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/predict_collector.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/predict_collector.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/predict_collector.cpp
modules/face/CMakeFiles/opencv_face.dir/src/predict_collector.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/predict_collector.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/predict_collector.cpp.o -MF CMakeFiles/opencv_face.dir/src/predict_collector.cpp.o.d -o CMakeFiles/opencv_face.dir/src/predict_collector.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/predict_collector.cpp

modules/face/CMakeFiles/opencv_face.dir/src/predict_collector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/predict_collector.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/predict_collector.cpp > CMakeFiles/opencv_face.dir/src/predict_collector.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/predict_collector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/predict_collector.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/predict_collector.cpp -o CMakeFiles/opencv_face.dir/src/predict_collector.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/regtree.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/regtree.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/regtree.cpp
modules/face/CMakeFiles/opencv_face.dir/src/regtree.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/regtree.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/regtree.cpp.o -MF CMakeFiles/opencv_face.dir/src/regtree.cpp.o.d -o CMakeFiles/opencv_face.dir/src/regtree.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/regtree.cpp

modules/face/CMakeFiles/opencv_face.dir/src/regtree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/regtree.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/regtree.cpp > CMakeFiles/opencv_face.dir/src/regtree.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/regtree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/regtree.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/regtree.cpp -o CMakeFiles/opencv_face.dir/src/regtree.cpp.s

modules/face/CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.o: modules/face/CMakeFiles/opencv_face.dir/flags.make
modules/face/CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.o: /home/ethan/opencv_build/opencv_contrib/modules/face/src/trainFacemark.cpp
modules/face/CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.o: modules/face/CMakeFiles/opencv_face.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object modules/face/CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.o"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT modules/face/CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.o -MF CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.o.d -o CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.o -c /home/ethan/opencv_build/opencv_contrib/modules/face/src/trainFacemark.cpp

modules/face/CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.i"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ethan/opencv_build/opencv_contrib/modules/face/src/trainFacemark.cpp > CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.i

modules/face/CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.s"
	cd /home/ethan/opencv_build/build/modules/face && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ethan/opencv_build/opencv_contrib/modules/face/src/trainFacemark.cpp -o CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.s

# Object files for target opencv_face
opencv_face_OBJECTS = \
"CMakeFiles/opencv_face.dir/src/bif.cpp.o" \
"CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.o" \
"CMakeFiles/opencv_face.dir/src/face_alignment.cpp.o" \
"CMakeFiles/opencv_face.dir/src/face_basic.cpp.o" \
"CMakeFiles/opencv_face.dir/src/facemark.cpp.o" \
"CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.o" \
"CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.o" \
"CMakeFiles/opencv_face.dir/src/facerec.cpp.o" \
"CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.o" \
"CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.o" \
"CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.o" \
"CMakeFiles/opencv_face.dir/src/mace.cpp.o" \
"CMakeFiles/opencv_face.dir/src/predict_collector.cpp.o" \
"CMakeFiles/opencv_face.dir/src/regtree.cpp.o" \
"CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.o"

# External object files for target opencv_face
opencv_face_EXTERNAL_OBJECTS =

lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/bif.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/eigen_faces.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/face_alignment.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/face_basic.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/facemark.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/facemarkAAM.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/facemarkLBF.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/facerec.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/fisher_faces.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/getlandmarks.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/lbph_faces.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/mace.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/predict_collector.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/regtree.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/src/trainFacemark.cpp.o
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/build.make
lib/libopencv_face.so.4.10.0: lib/libopencv_photo.so.4.10.0
lib/libopencv_face.so.4.10.0: lib/libopencv_objdetect.so.4.10.0
lib/libopencv_face.so.4.10.0: 3rdparty/lib/libtegra_hal.a
lib/libopencv_face.so.4.10.0: lib/libopencv_dnn.so.4.10.0
lib/libopencv_face.so.4.10.0: lib/libopencv_calib3d.so.4.10.0
lib/libopencv_face.so.4.10.0: lib/libopencv_features2d.so.4.10.0
lib/libopencv_face.so.4.10.0: lib/libopencv_flann.so.4.10.0
lib/libopencv_face.so.4.10.0: lib/libopencv_imgproc.so.4.10.0
lib/libopencv_face.so.4.10.0: lib/libopencv_core.so.4.10.0
lib/libopencv_face.so.4.10.0: modules/face/CMakeFiles/opencv_face.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ethan/opencv_build/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX shared library ../../lib/libopencv_face.so"
	cd /home/ethan/opencv_build/build/modules/face && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_face.dir/link.txt --verbose=$(VERBOSE)
	cd /home/ethan/opencv_build/build/modules/face && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/libopencv_face.so.4.10.0 ../../lib/libopencv_face.so.410 ../../lib/libopencv_face.so

lib/libopencv_face.so.410: lib/libopencv_face.so.4.10.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libopencv_face.so.410

lib/libopencv_face.so: lib/libopencv_face.so.4.10.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libopencv_face.so

# Rule to build all files generated by this target.
modules/face/CMakeFiles/opencv_face.dir/build: lib/libopencv_face.so
.PHONY : modules/face/CMakeFiles/opencv_face.dir/build

modules/face/CMakeFiles/opencv_face.dir/clean:
	cd /home/ethan/opencv_build/build/modules/face && $(CMAKE_COMMAND) -P CMakeFiles/opencv_face.dir/cmake_clean.cmake
.PHONY : modules/face/CMakeFiles/opencv_face.dir/clean

modules/face/CMakeFiles/opencv_face.dir/depend:
	cd /home/ethan/opencv_build/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ethan/opencv_build/opencv /home/ethan/opencv_build/opencv_contrib/modules/face /home/ethan/opencv_build/build /home/ethan/opencv_build/build/modules/face /home/ethan/opencv_build/build/modules/face/CMakeFiles/opencv_face.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/face/CMakeFiles/opencv_face.dir/depend

