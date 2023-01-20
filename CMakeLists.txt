cmake_minimum_required(VERSION 3.24)
project(FirstGame_v2)

set(CMAKE_CXX_STANDARD 17)

add_executable(FirstGame_v2 main.cpp src/Player.cpp src/Player.h src/Map.cpp src/Map.h src/game_const.h src/Monster.cpp src/Monster.h)
