cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED)

project(ccm)

add_executable(ccm "main.cpp" "args.cpp")

target_include_directories(ccm "include")