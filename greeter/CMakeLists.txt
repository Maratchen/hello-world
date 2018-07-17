cmake_minimum_required(VERSION 3.8)

project(greeter)

add_library(greeter_lib
    include/greeter/make_greeting.h
    include/greeter/config.h
    src/make_greeting.cpp
)

target_include_directories(greeter_lib PUBLIC include)