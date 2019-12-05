//
// Created by diego on 4/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "../Funciones.h"

void casinoshow(){
    system("cls");
    for(int i=0; i< 85;i++){
        printf("%c",177);
    }
    printf("\n\n");
    printf("\t\t\t%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c%c %c%c%c %c%c%c %c%c %c%c%c%c%c%c\n",177,219,223,223,219,178,219,223,223,219,177,219,223,223,223,219,223,219,223,177,219,220,177,219,177,219,223,223,223,219);
    printf("\t\t\t%c%c    %c%c%c%c%c %c%c%c%c%c%c %c%c%c %c%c %c %c %c%c   %c\n",177,219,177,219,220,220,219,178,223,223,223,220,220,177,219,178,177,219,219,219,177,219,219);
    printf("\t\t\t%c%c%c%c%c %c%c%c%c%c %c%c%c%c%c%c %c%c%c %c%c  %c%c %c%c%c%c%c%c\n\n",177,219,220,220,219,177,219,178,177,219,177,219,220,220,220,219,220,219,220,177,219,223,219,177,219,220,220,220,219);
    for(int i=0; i< 85;i++){
        printf("%c",177);
    }
}


void creditos()
{

    printf("\n\n");
    printf("\t\t                  %c%c%c%c               \n",220,219,219,220);
    printf("\t\t              .:||||||||:.            \n");
    printf("\t\t            (   O      O   )          \n");
    printf("\t\t ____@@@@_____________________@@@@___\n");
    printf("\t\t|                                    |\n");
    printf("\t\t|   Diego Ben%ctez    2018-1603       |\n",161);
    printf("\t\t|                                    |\n");
    printf("\t\t|                                    |\n");
    printf("\t\t|   Sebasti%cn S%cnchez 2018-0032      |\n",160,160);
    printf("\t\t|                                    |\n");
    printf("\t\t|                                    |\n");
    printf("\t\t|   Bryan Vargas Montero 2018-0585   |\n");
    printf("\t\t|____________________________________|\n");
    printf("\n\n\t\t    ");
    system("pause");
}

void imprimirpunt(JUGADOR * jug)
{
    JUGADOR *temp;

    for(temp = jug;temp != NULL;temp = temp->siguiente)
    {
        printf("%7s ........................ %7u\n",temp->nombre,temp->puntuacion);
    }
}

void bienvenido(){
    printf("\n\n");

    printf("\t\t\t   %c%c%c%c%c %c%c%c %c%c%c%c %c%c%c %c%c %c%c   %c %c%c%c%c %c%c%c %c%c %c%c%c %c%c%c%c %c%c%c%c%c%c\n",177,219,223,223,254,223,219,223,177,219,223,223,177,219,220,177,219,177,219,219,177,219,223,223,177,219,254,177,219,223,219,223,219,223,223,254,177,219,223,223,223,219);
    printf("\t\t\t   %c%c%c%c%c %c%c%c %c%c%c%c %c%c %c%c%c %c%c   %c %c%c%c%c %c%c %c%c%c %c%c%c %c %c%c %c%c   %c\n",177,219,223,223,220,178,219,178,177,219,254,254,177,219,219,177,219,177,219,219,177,219,254,254,177,219,219,177,219,177,219,178,219,177,219,177,219);
    printf("\t\t\t   %c%c%c%c%c %c%c%c %c%c%c%c %c%c  %c%c  %c%c%c%c  %c%c%c%c %c%c  %c%c %c%c%c %c%c%c%c %c%c%c%c%c%c\n",177,219,220,220,223,220,219,220,177,219,220,220,177,219,223,219,177,223,220,223,177,219,220,220,177,219,223,219,220,219,220,219,220,220,254,177,219,220,220,220,219);

    printf("\n\n");

    printf("\n\n\n");
    printf("\t\t\t\t\t..::INGRESE SU USUARIO::..\n ");
    printf("\t\t\t\t\t\t ");
}

void mesacraps(){
    printf("%c",201);
    for(int i = 0; i < 28; i++)
        printf("%c",205);
    printf("%c",203);
    for(int i = 0; i < 9; i++)
        printf("%c",205);
    printf("%c\n",187);
    printf("\t\t\t%c\tC  A  M  P  O\t     %c \t BIG   %c\n",186,186,186);
    printf("\t\t\t%c   %c",186,218);
    for(int i = 0; i < 19; i++)
        printf("%c",196);
    printf("\t\t\t%c    %c   %c6%c   %c\n",191,186,174,175,186);
    printf("\t\t\t%c  %c%c3 %c 4 %c 9 %c 10 %c 11%c%c   %c  %c X 25 %c\n",186,174,179,250,250,250,250,179,175,186,36,186);
    printf("\t\t\t%c   %c",186,192);
    for(int i = 0; i < 19; i++)
        printf("%c",196);
    printf("%c    %c",217,204);
    for(int i = 0; i < 9; i++)
        printf("%c",205);
    printf("\t\t\t%c\n",185);
    printf("\t\t\t%c\t %c %c  X  5 %c\t     %c    P    %c\n",186,179,36,179,186,186);
    printf("\t\t\t%c   %c     %c",186,245,218);
    for(int i = 0; i < 8; i++)
        printf("%c",196);
    printf("\t\t\t%c\t %c   %c         %c\n",191,245,186,186);
    printf("\t\t\t%c   %c    %c%c 2 %c 12 %c%c    %c   %c    A    %c\n",186,245,174,179,250,179,175,245,186,186);
    printf("\t\t\t%c   %c     %c",186,245,192);
    for(int i = 0; i < 8; i++)
        printf("%c",196);
    printf("\t\t\t%c     %c   %c         %c\n",217,245,186,186);
    printf("\t\t\t%c   %c     %c%c  X  10%c     %c   %c    S    %c\n",186,245,179,36,179,245,186,186);
    printf("\t\t\t%c   %c                    %c   %c         %c\n",186,245,245,186,186);
    printf("\t\t\t%c\tC  A  M  P  O\t     %c \t  E    %c\n",186,186,186);
    printf("\t\t\t%c",204);
    for(int i = 0; i < 8; i++)
        printf("%c",205);
    printf("\t\t\t%c",203);
    for(int i = 0; i < 19; i++)
        printf("%c",205);
    printf("\t\t\t%c\t       %c\n",188,186);
    printf("\t\t\t%c  BIG   %c L   I   N   E   A     D E   %c\n",186,186,186);
    printf("\t\t\t%c %c 8 %c  %c\t\t\t       %c\n",186,174,175,186,186);
    printf("\t\t\t%c %c X 25 %c  %c 7 %c 11 %c  = %c%c  X  10%c   %c\n",186,36,186,174,38,175,179,36,179,186);
    printf("\t\t\t%c",200);
    for(int i = 0; i < 8; i++)
        printf("%c",205);
    printf("\t\t\t%c",202);
    for(int i = 0; i < 29; i++)
        printf("%c",205);
    printf("\t\t\t%c\n",188);
}

void instrucciones_bj(){
    system("cls");
    printf("\t  __^__                                                         __^__ \n");
    printf("\t ( ___ )-------------------------------------------------------( ___ ) \n");
    printf("\t  | | |                                                         | | |  \n");
    printf("\t  | | |     El blackjack consiste en un juego de cartas en      | | |  \n");
    printf("\t  | | |        donde la suma de ellas debe dar 21 tienes        | | |  \n");
    printf("\t  | | |    dos opciones pedir una nueva carta del mazo o si     | | |  \n");
    printf("\t  | | |   no te quieres rriesgar tienes la opcion de quedarte.  | | |  \n");
    printf("\t  | | |               Cada carta posee un valor:                | | |  \n");
    printf("\t  | | |                                                         | | |  \n");
    printf("\t  | | |                    1 = A = 1 o 11                       | | |  \n");
    printf("\t  | | |                    1 = A = 1 o 11                       | | |  \n");
    printf("\t  | | |        2 al 10 = su valor nominal [Ejemplo 2 = 2]       | | |  \n");
    printf("\t  | | |                    10 al 13 = 10                        | | |  \n");
    printf("\t  | | |                                                         | | |  \n");
    printf("\t  | | |     La regla fundamental es no debes pasarte de 21,     | | |  \n");
    printf("\t  | | |       tienes que tener una suma menor o igual a 21      | | |  \n");
    printf("\t  | | |           y tener un numero mayor en la suma            | | |  \n");
    printf("\t  | | |              que el repartidor para ganar               | | |  \n");
    printf("\t  |_|_|                                                         |_|_|  \n");
    printf("\t (_____)-------------------------------------------------------(_____) \n");
    system("pause");
}

void instrucciones_reddog(){
    system("cls");
    printf("\t  __^__                                                       __^__  \n");
    printf("\t ( ___ )-----------------------------------------------------( ___ ) \n");
    printf("\t  | | |                                                       | | |  \n");
    printf("\t  | | |        Red dog debes de conseguir una carta que       | | |  \n");
    printf("\t  | | |     se encuentre entre el valor de las dos cartas     | | |  \n");
    printf("\t  | | |       repartidas por el repatidor, tu decides si      | | |  \n");
    printf("\t  | | |    seguir o quedarte, el red dog indica la cantidad   | | |  \n");
    printf("\t  | | |      de cartas entre cada intervalo mientras menor    | | |  \n");
    printf("\t  | | |              sea mayor sera la recompesa              | | |  \n");
    printf("\t  | | |                                                       | | |  \n");
    printf("\t  | | |        Apuesta                     Valor carta        | | |  \n");
    printf("\t  | | |          1:5                          1= 14           | | |  \n");
    printf("\t  | | |          2:4               2 al 13 = Su valor nominal | | |  \n");
    printf("\t  | | |          3:2                                          | | |  \n");
    printf("\t  | | |         n>3:1                                         | | |  \n");
    printf("\t (_____)-----------------------------------------------------(_____) \n");
    printf("\n");
    system("pause");
}
void instrucciones_jp(){
    system("cls");
    printf("\t  __^__                                                        __^__  \n");
    printf("\t ( ___ )------------------------------------------------------( ___ ) \n");
    printf("\t  | | |                                                        | | |  \n");
    printf("\t  | | |          Jackpot es un juego totalmente de azar,       | | |  \n");
    printf("\t  | | |              consiste en accionar una maquina          | | |  \n");
    printf("\t  | | |           y sacar todos los numeros consecutivos       | | |  \n");
    printf("\t  | | |        posibles, las recompensas por apuestas son:     | | |  \n");
    printf("\t  | | |                                                        | | |  \n");
    printf("\t  | | |      4 aciertos la apuesta se multiplica por 5         | | |  \n");
    printf("\t  | | |      5 aciertos la apuesta se multiplica por 10        | | |  \n");
    printf("\t  | | |      6 aciertos la apuesta se multiplica por 15        | | |  \n");
    printf("\t  | | |  7 aciertos la apuesta se multiplica por 100 [JACKPOT] | | |  \n");
    printf("\t  | | |                                                        | | |  \n");
    printf("\t (_____)------------------------------------------------------(_____) \n");
    printf("\n");
    system("pause");
}
void instrucciones_craps(){
    system("cls");
    printf("\t  __^__                                                                      __^__ \n");
    printf("\t ( ___ )--------------------------------------------------------------------( ___ ) \n");
    printf("\t  | | |                                                                      | | |  \n");
    printf("\t  | | |            Craps consiste en apostar a la posible combinacion        | | |  \n");
    printf("\t  | | |               de numeros que sumen dos dados, hay varias             | | |  \n");
    printf("\t  | | |                       uniones para apostar que son:                  | | |  \n");
    printf("\t  |_|_|                                                                      |_|_|  \n");
    printf("\t  | | |          Linea de pase: se ganan cuando los dados suman 7 y 11.      | | |  \n");
    printf("\t  | | |                   [La apuesta se multiplica por 10]                  | | |  \n");
    printf("\t  | | |                                                                      | | |  \n");
    printf("\t  | | |                 Campo: se gana cuando los dados suman                | | |  \n");
    printf("\t  |_|_|                         2, 3, 4, 9, 10, 11, 12.                      |_|_|  \n");
    printf("\t  | | |                  [La apuesta se multiplica por 5 y si                | | |  \n");
    printf("\t  | | |                          son 2 y 12 se por 10]                       | | |  \n");
    printf("\t  |_|_|                                                                      |_|_|  \n");
    printf("\t  | | |                Big 6 y Big 8: ambos con el mismo concepto,           | | |  \n");
    printf("\t  |_|_|                   se gana cuando los dados suman 6 u 8.              |_|_|  \n");
    printf("\t  | | |                     [la apuesta se multiplica por 25]                | | |  \n");
    printf("\t  |_|_|                                                                      |_|_|  \n");
    printf("\t (_____)--------------------------------------------------------------------(_____) \n");
    printf("\n");
    system("pause");

}