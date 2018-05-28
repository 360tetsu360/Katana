cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(katana)

add_subdirectory(lib/RakNet)

add_subdirectory(src)
add_subdirectory(include)
