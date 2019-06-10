add_library (Lab7_Task3_lib STATIC "")

target_include_directories (Lab7_Task3_lib PUBLIC "../include")

target_sources (Lab7_Task3_lib PRIVATE "delete.c" "find.c" "insert.c" "strcat.c" "strcpy.c")