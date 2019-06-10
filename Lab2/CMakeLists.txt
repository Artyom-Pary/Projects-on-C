# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("Lab2")

# Include sub-projects.
add_subdirectory("src_lib_1")
add_subdirectory("src_lib_2")
add_subdirectory("src_exe")
