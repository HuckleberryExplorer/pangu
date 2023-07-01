cmake_minimum_required(VERSION 3.10)
project(pangu)
set(CMAKE_CXX_STANDARD 17)

set(EXTERNAL_PREFIX ${PROJECT_SOURCE_DIR}/thirdparty)

# 用于指定cmake查找第三方库的路径
list(APPEND CMAKE_PREFIX_PATH "${EXTERNAL_PREFIX}")

# 用于指定cmake查找cmake模块的路径
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/Modules")

message(STATUS "CMAKE_PREFIX_PATH (${CMAKE_PREFIX_PATH})")
message(STATUS "CMAKE_MODULE_PATH (${CMAKE_MODULE_PATH})")

#
# 导入第三方库
#
find_package(GFlags REQUIRED)
find_package(Glog REQUIRED)

set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_NO_SYSTEM_PATHS ON)
set(Boost_USE_STATIC_RUNTIME OFF)
set(BOOST_INCLUDEDIR ${EXTERNAL_PREFIX}/boost/1.82.0/include)
set(BOOST_LIBRARYDIR ${EXTERNAL_PREFIX}/boost/1.82.0/lib)
find_package(
  Boost 1.82.0
  COMPONENTS date_time
             filesystem
             system
             random
             thread
             program_options
             chrono
             iostreams
             locale
             regex
             log
             serialization
  REQUIRED)

set(PANGU_LIB_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib/include)

add_subdirectory(lib)
add_subdirectory(src)
