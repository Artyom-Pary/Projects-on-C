﻿# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("Lab7")

# Включите подпроекты.
add_subdirectory ("Task1")
add_subdirectory ("Task2")
add_subdirectory ("Task3")