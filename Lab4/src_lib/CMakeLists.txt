add_library (Lab4_lib STATIC "")

target_include_directories (Lab4_lib PUBLIC "../include")

target_sources (Lab4_lib PRIVATE "function.c" "writeArray.c" "readArray.c" "sort.c" "sortStackArray.c")