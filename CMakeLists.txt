cmake_minimum_required(VERSION 3.29)

project(MySTD)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_custom_target(run COMMAND ${CMAKE_SOURCE_DIR}/bin/proga)

add_executable(proga src/main.c src/string.c src/stdlib.c)