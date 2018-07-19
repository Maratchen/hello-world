cmake_minimum_required(VERSION 3.8)

project(hello)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY
    ${PROJECT_BINARY_DIR}
    CACHE PATH
    "Single directory for all Libraries"
)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)
add_subdirectory(greeter)

add_executable(hello src/main.cpp)
target_link_libraries(hello greeter_lib)
