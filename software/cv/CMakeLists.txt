cmake_minimum_required(VERSION 2.8)

project(Expiriment)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(Expiriment expiriment.cpp)

target_link_libraries(Expiriment ${OpenCV_LIBS})
