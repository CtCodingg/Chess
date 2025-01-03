cmake_minimum_required(VERSION 3.10)

project(Chess)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(${OPENGL_INCLUDE_DIR} ${GLUT_INCLUDE_DIRS})

set(SOURCES main.cpp)

add_executable(chess ${SOURCES})

target_link_libraries(chess ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})