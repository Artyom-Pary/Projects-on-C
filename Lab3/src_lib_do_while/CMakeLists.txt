cmake_minimum_required (VERSION 3.8)

add_library(Lab3_lib_do_while STATIC "")
target_include_directories(Lab3_lib_do_while PUBLIC "../Include")
target_sources(Lab3_lib_do_while PRIVATE "task1.c" "task2.c" "task3.c" "task4.c" "task5.c" "func.c")