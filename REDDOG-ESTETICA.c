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

void pantalla(int *cartas,int ii,int ccartas,int x,int rd)
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

    gotoxy(x,18);
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
    gotoxy(x,4); printf(" _______________________");
    gotoxy(x,5); printf("|%d                      |",(*cards  % 13)+1);
    gotoxy(x,6); printf("|                       |");
    gotoxy(x,7); printf("|                       |");
    gotoxy(x,8); printf("|                       |");
    gotoxy(x,9); printf("|                       |");
    gotoxy(x,10);printf("|                       |");
    gotoxy(x,11);printf("|                       |");
    gotoxy(x,12);printf("|                       |");
    gotoxy(x,13);printf("|                       |");
    gotoxy(x,14);printf("|                       |");
    gotoxy(x,15);printf("|                     %d |",(*cards  % 13)+1);
    gotoxy(x,16);printf("|_______________________|");
}

void botones()
{
    gotoxy(20,19);printf(" _______________________");
    gotoxy(20,20);printf("|   [1]  S E G U I R    |");
    gotoxy(20,21);printf("|_______________________|");
    gotoxy(60,19);printf(" _______________________");
    gotoxy(60,20);printf("|  [2] Q U E D A R S E  |");
    gotoxy(60,21);printf("|_______________________|");
}
