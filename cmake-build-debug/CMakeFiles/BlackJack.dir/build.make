# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\diego\Desktop\SilverBlueDiamond

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\diego\Desktop\SilverBlueDiamond\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BlackJack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BlackJack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BlackJack.dir/flags.make

CMakeFiles/BlackJack.dir/BlackJack/BlackJack.c.obj: CMakeFiles/BlackJack.dir/flags.make
CMakeFiles/BlackJack.dir/BlackJack/BlackJack.c.obj: ../BlackJack/BlackJack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\diego\Desktop\SilverBlueDiamond\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BlackJack.dir/BlackJack/BlackJack.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BlackJack.dir\BlackJack\BlackJack.c.obj   -c C:\Users\diego\Desktop\SilverBlueDiamond\BlackJack\BlackJack.c

CMakeFiles/BlackJack.dir/BlackJack/BlackJack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BlackJack.dir/BlackJack/BlackJack.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\diego\Desktop\SilverBlueDiamond\BlackJack\BlackJack.c > CMakeFiles\BlackJack.dir\BlackJack\BlackJack.c.i

CMakeFiles/BlackJack.dir/BlackJack/BlackJack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BlackJack.dir/BlackJack/BlackJack.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\diego\Desktop\SilverBlueDiamond\BlackJack\BlackJack.c -o CMakeFiles\BlackJack.dir\BlackJack\BlackJack.c.s

CMakeFiles/BlackJack.dir/BlackJack/main.c.obj: CMakeFiles/BlackJack.dir/flags.make
CMakeFiles/BlackJack.dir/BlackJack/main.c.obj: ../BlackJack/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\diego\Desktop\SilverBlueDiamond\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/BlackJack.dir/BlackJack/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BlackJack.dir\BlackJack\main.c.obj   -c C:\Users\diego\Desktop\SilverBlueDiamond\BlackJack\main.c

CMakeFiles/BlackJack.dir/BlackJack/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BlackJack.dir/BlackJack/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\diego\Desktop\SilverBlueDiamond\BlackJack\main.c > CMakeFiles\BlackJack.dir\BlackJack\main.c.i

CMakeFiles/BlackJack.dir/BlackJack/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BlackJack.dir/BlackJack/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\diego\Desktop\SilverBlueDiamond\BlackJack\main.c -o CMakeFiles\BlackJack.dir\BlackJack\main.c.s

# Object files for target BlackJack
BlackJack_OBJECTS = \
"CMakeFiles/BlackJack.dir/BlackJack/BlackJack.c.obj" \
"CMakeFiles/BlackJack.dir/BlackJack/main.c.obj"

# External object files for target BlackJack
BlackJack_EXTERNAL_OBJECTS =

BlackJack.exe: CMakeFiles/BlackJack.dir/BlackJack/BlackJack.c.obj
BlackJack.exe: CMakeFiles/BlackJack.dir/BlackJack/main.c.obj
BlackJack.exe: CMakeFiles/BlackJack.dir/build.make
BlackJack.exe: CMakeFiles/BlackJack.dir/linklibs.rsp
BlackJack.exe: CMakeFiles/BlackJack.dir/objects1.rsp
BlackJack.exe: CMakeFiles/BlackJack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\diego\Desktop\SilverBlueDiamond\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable BlackJack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BlackJack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BlackJack.dir/build: BlackJack.exe

.PHONY : CMakeFiles/BlackJack.dir/build

CMakeFiles/BlackJack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BlackJack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BlackJack.dir/clean

CMakeFiles/BlackJack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\diego\Desktop\SilverBlueDiamond C:\Users\diego\Desktop\SilverBlueDiamond C:\Users\diego\Desktop\SilverBlueDiamond\cmake-build-debug C:\Users\diego\Desktop\SilverBlueDiamond\cmake-build-debug C:\Users\diego\Desktop\SilverBlueDiamond\cmake-build-debug\CMakeFiles\BlackJack.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BlackJack.dir/depend

