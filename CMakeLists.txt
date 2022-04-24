cmake_minimum_required(VERSION 3.22)
project(PineappleEMU)

set(CMAKE_CXX_STANDARD 14)

include_directories(NESEmu/NESEmu)

add_executable(PineappleEMU
        NESEmu/NESEmu/bus.cpp
        NESEmu/NESEmu/bus.h
        NESEmu/NESEmu/main.cpp
        NESEmu/NESEmu/pineapple6502.cpp
        NESEmu/NESEmu/pineapple6502.h NESEmu/NESEmu/olcPixelGameEngine.h NESEmu/NESEmu/olcPixelGameEngine.cpp NESEmu/NESEmu/png.h)
