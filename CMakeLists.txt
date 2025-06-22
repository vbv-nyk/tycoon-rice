cmake_minimum_required(VERSION 3.10)
project(IdleTycoon)
add_executable(IdleTycoon main.cpp)

target_link_libraries(IdleTycoon sfml-graphics sfml-window sfml-system sfml-graphics sfml-audio)