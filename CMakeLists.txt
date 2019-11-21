cmake_minimum_required(VERSION 3.14)
project(Portafolio-2)

set(CMAKE_C_STANDARD 99)

add_executable(BlackJack BlackJack/BlackJack.c BlackJack/main.c BlackJack/BlackJack.h)

add_executable(Craps Craps/fcraps.c Craps/fcraps.h Craps/maincp.c)

add_executable(JACKPOT JACKPOT/jackmain)

add_executable(MISSISSIPI-STUD MISSISSIPI-STUD/main.c MISSISSIPI-STUD/MississipiStud.c MISSISSIPI-STUD/MississipiStud.h)

add_executable(RedDog RedDog/main.c RedDog/REDDOG.c RedDog/REDDOG.h)
add_executable(ruleta ruleta/ruleta.c)