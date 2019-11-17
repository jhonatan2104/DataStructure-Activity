cmake_minimum_required(VERSION 3.15)
project(Matriz_Esparsa C)

set(CMAKE_C_STANDARD 99)

add_executable(Matriz Matriz_Esparsa/matrizEsparsa.c Matriz_Esparsa/matrizEsparsa.h)