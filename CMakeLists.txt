cmake_minimum_required(VERSION 4.4)
project(cypher)

set(CMAKE_CXX_STANDARD 20)

add_executable(cypher main.cpp)
target_link_options(cypher PRIVATE -static-libgcc -static-libstdc++)
