project(Hello)

add_library(hello_lib STATIC hello.cc hello.h)
target_include_directories(hello_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(main main.cc)
target_link_libraries(main PRIVATE hello_lib)