//
// Created by diego on 4/12/2019.
//

#include "../Funciones.h"

void cartaposterior(const int *carta,int x,int y)
{
    gotoxy(x,y);printf("_____");
    gotoxy(x,y+1);printf("   %2u|",(*(carta) % 13) + 1);
    gotoxy(x,y+2);printf("     %c",186);
    gotoxy(x,y+3);printf("     %c",186);
    gotoxy(x,y+4);printf("     %c",186);
    gotoxy(x,y+5);printf("     %c",186);
    gotoxy(x,y+6);printf("     %c",186);
    gotoxy(x,y+7);printf("     %c",186);
    gotoxy(x,y+8);printf("     %c",186);
    gotoxy(x,y+9);printf("     %c",186);
    gotoxy(x,y+10);printf("     %c",186);
    gotoxy(x,y+11);printf("     %c",186);
    gotoxy(x,y+12);printf("     %c",186);
    gotoxy(x,y+13);printf("     %c",186);
    gotoxy(x,y+14);printf("     %c",186);
    gotoxy(x,y+15);printf("_____%c",186);
}

void imprimirb(int *cartas,int ii,int ccartas,int x ,int y)
{
    if(ii == ccartas)
    {
        return;
    }
    else if(ii == 0)
    {
        impcarta(cartas,x);
        imprimirb(cartas,ii+1,ccartas,x+25,y);
    }
    else if(ii > 0)
    {
        cartaposterior(cartas+ii,x,y);
        imprimirb(cartas,ii+1,ccartas,x+7,y);
    }

}


void pantallaB(int *cartas,int ccartas,int x,int suma, JUGADOR *jugador) {
    int i;

    printf("\nDinero: $%d\t\t\t\tB  L  A  C  K     J  A  C  K\t\t\t%c Suma %c = %d\n",jugador->dinero,176,176,suma);
    for (i = 0; i < 100; i++) {
        printf("%c",205);
    }
    imprimirb(cartas, 0, ccartas, 17, 4);

    gotoxy(x, 21);
    for (i = 0; i < 100; i++) {
        printf("%c",205);
    }

    botones2(0,3);
    printf("\n\n");
    for (i = 0; i < 100; i++) {
        printf("%c",205);
    }
}

void botones2(int x,int y)
{
    gotoxy(x+20,y+19);printf(" _______________________");
    gotoxy(x+20,y+20);printf("%c [1]Pedir Cartas       %c",186,186);
    gotoxy(x+20,y+21);printf("%c_______________________%c",186,186);
    gotoxy(x+60,y+19);printf(" _______________________");
    gotoxy(x+60,y+20);printf("%c  [2]Retirarse         %c",186,186);
    gotoxy(x+60,y+21);printf("%c_______________________%c",186,186);
}

