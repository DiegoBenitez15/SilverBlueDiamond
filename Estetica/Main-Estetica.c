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


