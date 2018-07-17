cmake_minimum_required(VERSION 3.8)

project(hello)

add_subdirectory(greeter)

add_executable(hello
    src/main.cpp
)

target_link_libraries(hello
    greeter_lib
)