//
// Created by sebastian on 11/21/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <winbase.h>
#include "Funciones.h"
#define DIM 20

void Ruleta()
{
    char c;
    int n=0,m[DIM],i,premio,k=4;
    srand(time(NULL));
    c=presentacion ();
    switch(c) {
        case 'A' :
            do {
                printf ("1 - Apostarle a los pares \t 2 - Apostarle a los impares\n");
                scanf ("%d",&n);}while(n!=1 && n!=2);
            break;

        case 'B' :
            do {
                printf ("Di tres numeros que quieres apostar! \n(Comprendidos entre 1 y 36):\n");
                for (i=0;i<3;i++)
                    scanf ("%d",&m[i]);
            }
            while((m[0]<=0 || m[0]>36) || (m[1]<=0 || m[1]>36) || (m[2]<=0 || m[2]>36));
            break;
        case 'C' :
            do {
                printf ("Di el numero al que le apostaras \n(Comprendido entre 1 y 36):\n");
                scanf ("%d",&n);
            }
            while(n<=0 || n>36); break;
        default:
        {
            printf("ERROR");
        }
    }
    system("cls");
    printf ("\nUna vez hecha la apuesta, toca ver que numero sale en la ruleta :\n\n");
    for(i=1;i<=100;i++) rand();  //descartamos los 100 primeros números aleatorios
    premio = rand() % 37;      //almacenamos el número premiado
    espera (k);  //simulación de la bola moviéndose en la ruleta
    system("cls");
    printf ("\nUna vez hecha la apuesta, toca ver que numero sale en la ruleta :\n\n");
    printf ("\t%d\n\n",premio);
    if (premio==0) {
        printf ("Gana la banca!");
        system ("pause");
        }
    switch ( c ) {
        case 'A' :
            if ((n==1 && premio%2 == 0) || (n==2 && premio%2 == 1))
                printf ("Has ganado!\tGanaste: $0.00\n");
            else printf ("Perdiste!\tPerdiste: $0.00\n");
            break;
        case 'B' :
            if ((n==1 && premio%3 == 1) || (n==2 && premio%3 == 2) || (n==3 && premio%2 == 0))
                printf ("Has ganado!\tGanaste: $0.00 \n");
            else printf ("Perdiste!\tPerdiste: $0.00\n");
            break;
        case 'C' :
            if ((m[0]==premio) || (m[1]==premio) || (m[2]==premio))
                printf ("Has ganado!\tGanaste: $0.00\n");
            else printf ("Perdiste\tPerdiste: $0.00\n");
            break;
        case 'D' :
            if (n==premio)
                printf ("Has ganado!\tGanaste: $0.00 \n");
            else printf ("Perdiste!\tPerdiste: $0.00\n");
            break;
        default:
        {
            printf("ERROR");
        }
    }
    system ("pause");
    return;
}
char presentacion()
{
    char c;
    do {
        printf("----------------------------------------------------------------------------\n");
        printf ("\t\tR\tU\tL\tE\tT\tA\n");
        printf("----------------------------------------------------------------------------\n");
        printf ("\t\t%cQu%c tipo de apuesta quieres realizar?\n\n",168,130);
        printf ("Pares o Impares[A]\n\n\n\nTerna[B]\n\n\n\nPleno[C]\n");
        scanf ("%c",&c);
        system("cls"); } while (c!='A' && c!='B' && c!='C' && c!='D');
    return c;
}
void espera(int segundos)
{
    //srand(time(NULL));
    int Seg1,Seg2;
    Seg1=(int)clock()/CLOCKS_PER_SEC;
    Seg2=Seg1;
    while((Seg2-Seg1) < segundos){
        if(clock()%400<10){
            system("cls");
            printf ("\nUna vez hecha la apuesta, toca ver que numero sale en la ruleta :\n\n\t%d",rand() % 37);
        }
        Seg2=(int)clock()/CLOCKS_PER_SEC;
    }
}

void casinoshow(){
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

void puerta(){

    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c  %c%c%c  %c  %c  %c\n",186,178,178,157,186,157,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c  %c  %c\n",186,178,178,186,178,178,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,188);

    Sleep(250);
    system("cls");

    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,203,205,203,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c    %c  %c  %c\n",186,178,178,186,205,186,178,178,186);
    printf("\t\t%c  %c  %c  %c%cv%c%c   %c  %c  %c\n",186,178,178,157,186,186,157,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c    %c  %c  %c\n",186,178,178,186,205,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,202,205,202,205,205,205,205,205,205,205,205,205,205,188);

    Sleep(250);
    system("cls");

    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,203,205,205,205,203,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t%c  %c  %c   %c   %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c    %c  %c  %c\n",186,178,178,186,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c  %c%cven%c%c   %c  %c  %c\n",186,178,178,157,186,186,157,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c    %c  %c  %c\n",186,178,178,186,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c   %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,202,205,205,205,202,205,205,205,205,205,205,205,205,205,205,188);

    Sleep(250);
    system("cls");

    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c%c    %c  %c  %c\n",186,178,178,186,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c  %c%cenven%c%c   %c  %c  %c\n",186,178,178,157,186,186,157,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c%c    %c  %c  %c\n",186,178,178,186,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,188);

    Sleep(250);
    system("cls");

    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t%c  %c  %c   %c      %c   %c  %c   %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c      %c   %c  %c   %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c      %c   %c  %c   %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c      %c   %c  %c   %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c%c%c   %c  %c   %c\n",186,178,178,186,205,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c  %c%cenveni%c%c  %c  %c   %c\n",186,178,178,157,186,186,157,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c%c%c   %c  %c   %c\n",186,178,178,186,205,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c   %c      %c   %c  %c   %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c      %c   %c  %c   %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c      %c   %c  %c   %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c      %c   %c  %c   %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,188);

    Sleep(250);
    system("cls");

    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t%c  %c  %c   %c        %c   %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c        %c   %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c        %c   %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c        %c   %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c%c%c%c%c   %c  %c  %c\n",186,178,178,186,205,205,205,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c  %c%cienvenid%c%c  %c  %c  %c\n",186,178,178,157,186,186,157,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c%c%c%c%c   %c  %c  %c\n",186,178,178,186,205,205,205,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c   %c        %c   %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c        %c   %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c        %c   %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c        %c   %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,188);

    Sleep(250);
    system("cls");

    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t%c  %c  %c   %c          %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c          %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c          %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c          %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c%c%c%c%c%c%c    %c  %c  %c\n",186,178,178,186,205,205,205,205,205,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c  %c%cbienvenido%c%c   %c  %c  %c\n",186,178,178,157,186,186,157,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c%c%c%c%c%c%c    %c  %c  %c\n",186,178,178,186,205,205,205,205,205,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c   %c          %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c          %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c          %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c          %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,188);

    Sleep(250);
    system("cls");

    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t%c  %c  %c   %c            %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c            %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c            %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c            %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c  %c%c%c%c%c%c    %c  %c  %c\n",186,178,178,186,205,205,205,205,205,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c  %c%c bienvenido %c%c   %c  %c  %c\n",186,178,178,157,186,186,157,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c  %c%c%c%c%c%c    %c  %c  %c\n",186,178,178,186,205,205,205,205,205,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c   %c            %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c            %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c            %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c            %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,188);

    system("pause");
    system("cls");

    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,187);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c%c    %c  %c   %c\n",186,178,178,186,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c  %c%c   bienvenido   %c%c    %c  %c   %c\n",186,178,178,157,186,186,157,178,178,186);
    printf("\t\t%c  %c  %c   %c%c%c%c%c%c%c    %c  %c   %c\n",186,178,178,186,205,205,205,205,205,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c  %c  %c   %c     %c    %c  %c  %c\n",186,178,178,186,186,178,178,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,188);
}

void creditos()
{


    printf("\t\t\t                  %c%c%c%c               \n",220,219,219,220);
    printf("\t\t\t              .:||||||||:.            \n");
    printf("\t\t\t            (   O      O   )          \n");
    printf("\t\t\t ____@@@@_____________________@@@@___\n");
    printf("\t\t\t|                                    |\n");
    printf("\t\t\t|   Diego Ben%ctez    2018-1603       |\n",161);
    printf("\t\t\t|                                    |\n");
    printf("\t\t\t|                                    |\n");
    printf("\t\t\t|   Sebasti%cn S%cnchez 2018-0032      |\n",160,160);
    printf("\t\t\t|                                    |\n");
    printf("\t\t\t|                                    |\n");
    printf("\t\t\t|   Bryan Vargas Montero 2018-0585   |\n");
    printf("\t\t\t|____________________________________|\n");

    system("pause");
}
