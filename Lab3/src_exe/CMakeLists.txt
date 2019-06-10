cmake_minimum_required (VERSION 3.8)

add_executable (Lab3_for "main.c")

target_link_libraries(Lab3_for Lab3_lib_for)


add_executable (Lab3_while "main.c")


target_link_libraries(Lab3_while Lab3_lib_while)


add_executable (Lab3_do_while "main.c")


target_link_libraries(Lab3_do_while Lab3_lib_do_while)