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
}