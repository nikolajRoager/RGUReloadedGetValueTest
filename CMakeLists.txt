cmake_minimum_required(VERSION 4.0)
project(RGUReloadedGetValue)

set(CMAKE_CXX_STANDARD 20)

#Use correct compiler optimization flags on GCC and windows
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set(CMAKE_CXX_FLAGS_RELEASE "-O3")
    set(CMAKE_CXX_FLAGS_DEBUG "-g")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    set(CMAKE_CXX_FLAGS_RELEASE "/O2")
    set(CMAKE_CXX_FLAGS_DEBUG "/Zi /Od")
endif()

if (MSVC)
    add_compile_options(/arch:AVX2)
else()
    add_compile_options(-mavx2)
endif()


include_directories("include")

add_executable(RGUReloadedGetValue src/main.cpp
        include/getValueStandardMatrixMultiplication.h
        src/getValueStandardMatrixMultiplication.cpp
        include/getValueBooleanMatrixMultiplication.h
        src/getValueBooleanMatrixMultiplication.cpp
        include/getValueUnrolledMatrixMultiplication.h
        src/getValueUnrolledMatrixMultiplication.cpp
        include/getValueAVXMatrixMultiplication.h
        src/getValueAVXMatrixMultiplication.cpp)
