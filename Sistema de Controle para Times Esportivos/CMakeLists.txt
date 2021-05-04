cmake_minimum_required(VERSION 3.19)
project(Sistema_de_Controle_para_Times_Esportivos)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Sistema_de_Controle_para_Times_Esportivos
        Empresa.cpp
        Empresa.hpp
        Jogador.cpp
        Jogador.hpp
        main.cpp
        Time.cpp
        Time.hpp)
