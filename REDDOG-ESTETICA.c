//
// Created by diego on 24/11/2019.
//

#include "Funciones.h"
#include <stdio.h>
#include <windows.h>



void gotoxy(int x,int y)
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hCon,dwPos);
}

void pantalla(int *cartas,int ccartas,int x,int rd)
{
    int i;

    for(i=0;i<100;i++)
    {
        printf("-");
    }
    printf("\n\t\t\t\t\t R E D  D O G\t\t\t\tred dog: %d\n",rd);
    for(i=0;i<100;i++)
    {
        printf("-");
    }
    imprimir(cartas,0,ccartas,x);

    gotoxy(x,21);
    for(i=0;i<100;i++)
    {
        printf("-");
    }
    printf("\n");

    botones();

    printf("\n\n");
    for(i=0;i<100;i++)
    {
        printf("-");
    }
    gotoxy(x,30);
}

void imprimir(int *cartas,int ii,int ccartas,int x)
{
    if(ii == ccartas)
    {
        return;
    }
    else if(ii < ccartas)
    {
        impcarta(cartas + ii,x);
        imprimir(cartas,ii+1,ccartas,x+35);
    }
}

void impcarta(const int *cards,int x)
{
    if(*cards > 0 && *cards < 14)
    {
        impcartacorazones(cards,x);
    }
    else if(*cards > 13 && *cards < 27)
    {
        impcartadiamante(cards,x);
    }
    else if(*cards > 26 && *cards < 40)
    {
        impcartatrebol(cards,x);
    }
    else if(*cards > 39 && *cards < 53)
    {
        impcartaespada(cards,x);
    }
}

void impcartacorazones(const int *cards,int x)
{
    gotoxy(x,4);printf(" _______________________");
    gotoxy(x,5);printf("|%2u                     |",(*cards  % 13)+1);
    gotoxy(x,6);printf("|                       |");
    gotoxy(x,7);printf("|                       |");
    gotoxy(x,8);printf("|                       |");
    gotoxy(x,9);printf("|         _   _         |");
    gotoxy(x,10);printf("|        / %c / %c        |",92,92);
    gotoxy(x,11);printf("|        %c  v  /        |",92);
    gotoxy(x,12);printf("|         %c   /         |",92);
    gotoxy(x,13);printf("|          %c /          |",92);
    gotoxy(x,14);printf("|           V           |");
    gotoxy(x,15);printf("|                       |");
    gotoxy(x,16);printf("|                       |");
    gotoxy(x,17);printf("|                       |");
    gotoxy(x,18);printf("|                     %2u|",(*cards  % 13)+1);
    gotoxy(x,19);printf("|_______________________|");
}

void impcartatrebol(const int *cards,int x)
{
    gotoxy(x,4);printf(" _______________________");
    gotoxy(x,5);printf("|%2u                     |",(*cards  % 13)+1);
    gotoxy(x,6);printf("|                       |");
    gotoxy(x,7);printf("|                       |");
    gotoxy(x,8);printf("|                       |");
    gotoxy(x,9);printf("|                       |");
    gotoxy(x,10);printf("|         %c%c%c           |\n",201,205,187);
    gotoxy(x,11);printf("|       %c%c%c %c%c%c         |\n",201,205,188,200,205,187);
    gotoxy(x,12);printf("|       %c%c%c%c%c%c%c         |\n",200,205,188,186,200,205,188);
    gotoxy(x,13);printf("|         %c%c%c           |\n",205,202,205);
    gotoxy(x,14);printf("|                       |");
    gotoxy(x,15);printf("|                       |");
    gotoxy(x,16);printf("|                       |");
    gotoxy(x,17);printf("|                       |");
    gotoxy(x,18);printf("|                     %2u|",(*cards  % 13)+1);
    gotoxy(x,19);printf("|_______________________|");
}

void impcartadiamante(const int *cards,int x)
{
    gotoxy(x,4);printf(" _______________________");
    gotoxy(x,5);printf("|%2u                     |",(*cards  % 13)+1);
    gotoxy(x,6);printf("|                       |");
    gotoxy(x,7);printf("|                       |");
    gotoxy(x,8);printf("|                       |");
    gotoxy(x,9);printf("|           %c           |",94);
    gotoxy(x,10);printf("|          /%c%c          |",220,92);
    gotoxy(x,11);printf("|         /%c%c%c%c         |",177,178,177,92);
    gotoxy(x,12);printf("|         %c%c%c%c/         |",92,177,178,177);
    gotoxy(x,13);printf("|          %c%c/          |",92,223);
    gotoxy(x,14);printf("|           v           |");
    gotoxy(x,15);printf("|                       |");
    gotoxy(x,16);printf("|                       |");
    gotoxy(x,17);printf("|                       |");
    gotoxy(x,18);printf("|                     %2u|",(*cards  % 13)+1);
    gotoxy(x,19);printf("|_______________________|");
}

void impcartaespada(const int *cards,int x)
{
    gotoxy(x,4);printf(" _______________________");
    gotoxy(x,5);printf("|%2u                     |",(*cards  % 13)+1);
    gotoxy(x,6);printf("|                       |");
    gotoxy(x,7);printf("|                       |");
    gotoxy(x,8);printf("|                       |");
    gotoxy(x,9);printf("|           %c           |",94);
    gotoxy(x,10);printf("|          / %c          |",92);
    gotoxy(x,11);printf("|         /   %c         |",92);
    gotoxy(x,12);printf("|        /  %c  %c        |",94,92);
    gotoxy(x,13);printf("|        %c_/%c%c_/        |",92,179,92);
    gotoxy(x,14);printf("|         %c%c%c%c%c         |",196,196,193,196,196);
    gotoxy(x,15);printf("|                       |");
    gotoxy(x,16);printf("|                       |");
    gotoxy(x,17);printf("|                       |");
    gotoxy(x,18);printf("|                     %2u|",(*cards  % 13)+1);
    gotoxy(x,19);printf("|_______________________|");
}

void botones()
{
    gotoxy(20,22);printf(" ________________");
    gotoxy(20,23);printf("|   [1] Seguir   |");
    gotoxy(20,24);printf("|________________|");
    gotoxy(60,22);printf(" _________________");
    gotoxy(60,23);printf("|  [2] Quedarse   |");
    gotoxy(60,24);printf("|_________________|");
}
