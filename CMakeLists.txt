cmake_minimum_required(VERSION 4.0)
project(PassThePandas)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PassThePandas src/main.cpp
        include/Dice.h
        src/Dice.cpp
        include/Player.h
        src/Game.cpp
        include/Game.h
        src/Player.cpp)
