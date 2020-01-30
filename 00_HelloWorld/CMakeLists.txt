cmake_minimum_required(VERSION 3.6)

project(hello_cmake)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_SOURCES src/Hello.cc)

add_subdirectory(third_party/catch)
add_subdirectory(src)
add_subdirectory(test)

