cmake_minimum_required(VERSION 3.1.0)
CMAKE_C_STANDARD=9
project(workflow-learn C99)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
add_executable(main main.c fuction.c)
include_directories(${PROJECT_SOURCE_DIR}/include)