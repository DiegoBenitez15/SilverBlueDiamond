//
// Created by sebastian on 11/21/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Funciones.h"
#define DIM 20

void Ruleta()
{
    char c;
    int n=0,m[DIM],i,premio,k=4;
    srand(time(NULL));
    c=presentacion ();
    switch (c) {
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
        return 0;}
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
    }
    system ("pause");
    return 0;
}
char presentacion()
{
    char c;
    do {
        printf ("\tRuleta!\n");
        printf ("Que tipo de apuesta quieres realizar?\t(Para elegir escribe la mayuscula correspondiente: )\n\n");
        printf ("A - Pares o Impares \t B - Terna \t C - Pleno (un numero)\n");
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