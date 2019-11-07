cmake_minimum_required(VERSION 3.10)
project(lab4AK)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab4AK main.cpp calculator.cpp)
set(SOURCE_EXE main.cpp)
set(SOURCE_LIB calculator.cpp)
add_library(calculator STATIC ${SOURCE_LIB})
add_executable(labhello ${SOURCE_EXE})
target_link_libraries(labhello calculator)