cmake_minimum_required(VERSION 3.16)
project(pangu)

set(EXTERNAL_PREFIX ${PROJECT_SOURCE_DIR}/thirdparty)

# 用于指定cmake查找第三方库的路径
set(CMAKE_PREFIX_PATH "${EXTERNAL_PREFIX}")

# 用于指定cmake查找cmake模块的路径
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/Modules")

message(STATUS "${CMAKE_PREFIX_PATH}")

find_package(Boost 1.82.0 COMPONENTS random thread REQUIRED)

set(PANGU_LIB_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib/include)

add_subdirectory(lib)
add_subdirectory(pangu)