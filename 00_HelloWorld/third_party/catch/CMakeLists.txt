project(Catch)

# Headers only library, therefor Interface
add_library(catch INTERFACE)

# INTERFACE targets only have INTERFACE properties
target_include_directories(catch INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)