cmake_minimum_required (VERSION 3.8)

add_library(Lab5_lib STATIC "")
target_include_directories(Lab5_lib PUBLIC "../include")
target_sources(Lab5_lib PRIVATE "task1.c" "task2.c" "task3.c" "task4.c" "task5.c" "task6.c")