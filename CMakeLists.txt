cmake_minimum_required(VERSION 3.17)
project(tp2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(tp2
        Archivo.cpp
        Archivo.h
        Celula.cpp
        Celula.h
        Gen.cpp
        Gen.h
        globales.h
        InformacionGenetica.cpp
        InformacionGenetica.h
        InformacionYCarga.cpp
        InformacionYCarga.h
        ListaDeGenes.cpp
        ListaDeGenes.h
        logicaBinaria.cpp
        logicaBinaria.h
        main.cpp
        matematica.cpp
        matematica.h
        Tablero.cpp
        Tablero.h)
