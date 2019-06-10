add_library (Lab7_Task2_lib STATIC "")

target_include_directories (Lab7_Task2_lib PUBLIC "../include")

target_sources (Lab7_Task2_lib PRIVATE "readArray.c" "sort.c" "sortHeapArray.c" "writeArray.c")