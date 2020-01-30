project(hello_tests)

add_executable(tests testmain.cc)

target_link_libraries(tests PRIVATE hello_lib catch)