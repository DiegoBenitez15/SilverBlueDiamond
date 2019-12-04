cmake_minimum_required(VERSION 3.14)
project(Portafolio-2)

set(CMAKE_C_STANDARD 99)

add_executable(CASINO Juegos/REDDOG.c Estetica/REDDOG-ESTETICA.c Juegos/fcraps.c Juegos/BlackJack.c main.c Funciones.h Juegos/ruleta.c Juegos/jfuncc.c Juegos/Jugador.c Estetica/Blackjack-Estetica.c Estetica/Craps-Estetica.c Estetica/Jackpot-Estetica.c Estetica/Main-Estetica.c)
add_executable(Minunit Juegos/REDDOG.c Estetica/REDDOG-ESTETICA.c Juegos/fcraps.c Juegos/BlackJack.c minunit.c minunit.h Funciones.h Juegos/ruleta.c Juegos/jfuncc.c Juegos/Jugador.c Estetica/Blackjack-Estetica.c Estetica/Craps-Estetica.c Estetica/Jackpot-Estetica.c Estetica/Main-Estetica.c)