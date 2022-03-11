cmake_minimum_required(VERSION 3.21)
project(hyper)

set(CMAKE_CXX_STANDARD 23)

add_executable(hyper src/main.cpp src/Scanner.cpp src/Scanner.h src/Hyper.cpp src/Hyper.h src/Token.cpp src/Token.h)
target_link_libraries(hyper -static)