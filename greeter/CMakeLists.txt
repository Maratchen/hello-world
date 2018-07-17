cmake_minimum_required(VERSION 3.8)

project(greeter)

add_library(greeter_lib
    include/greeter/make_greeting.h
    include/greeter/config.h
    src/make_greeting.cpp
)

target_include_directories(greeter_lib PUBLIC include)
target_include_directories(greeter_lib PRIVATE src)

if(BUILD_SHARED_LIBS)
  target_compile_definitions(greeter_lib PRIVATE GREETER_EXPORTS)
  target_compile_definitions(greeter_lib INTERFACE GREETER_IMPORTS)
endif()