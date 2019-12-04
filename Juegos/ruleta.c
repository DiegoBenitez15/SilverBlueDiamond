//
// Created by sebastian on 11/21/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../Funciones.h"
#define DIM 20

int Ruleta()
{
    char c;
    int n=0,m[DIM],i,premio,k=4;
    srand(time(NULL));
    c=presentacion ();
    switch(c) {
        case 'A' :
            do {
                printf("\n\n\n");
                for(int i=0; i< 85;i++){
                    printf("%c",177);
                }
                printf ("\n\n\t\t\t\tApostarle a los pares [1]\n\n\n\n\t\t\t\tApostarle a los impares [2]\n");
                printf("\n");
                for(int i=0; i< 85;i++){
                    printf("%c",177);
                }
                printf("\n");
                scanf ("%d",&n);}while(n!=1 && n!=2);
            break;

        case 'B' :
            do {
                printf ("\n\n\t\t\t\t\t%c Tres numeros que quieres apostar! %c\n\t\t\t\t\t   %c(Comprendidos entre 1 y 36)%c\n",176,176,178,178);
                printf("\n\n\t\t\t\t\t\t\t");
                for (i=0;i<3;i++)
                    scanf ("%d",&m[i]);
            }
            while((m[0]<=0 || m[0]>36) || (m[1]<=0 || m[1]>36) || (m[2]<=0 || m[2]>36));
            break;
        case 'C' :
            do {
                printf ("\n\n\t\t\t\t\t%c Di el numero al que le apostaras %c\n\n\t\t\t\t\t   %c(Comprendido entre 1 y 36)%c\n",176,176,178,178);
                printf("\n\n\t\t\t\t\t\t\t");
                scanf ("%d",&n);
            }
            while(n<=0 || n>36); break;
        default:
        {
            printf("%c Error. Digite Nuevamente %c",176,176);
        }
    }
    system("cls");
    for(i=1;i<=100;i++) rand();  //descartamos los 100 primeros números aleatorios
    premio = rand() % 37;      //almacenamos el número premiado
    espera (k);  //simulación de la bola moviéndose en la ruleta
    system("cls");
    printf("\n\n\t\t\t\t\t");
    printf ("\n\n\t\t\t\t\t%c%c%d\n\n",176,176,premio);
    if (premio==0) {
        printf ("%c %cGana la banca! %c ",176,168,176);
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
            printf("%c Error. Digita nuevamente %c",176,176);
        }
    }
    system ("pause");
    return premio;
}
char presentacion()
{
    char c;
    do {
        for(int i=0; i< 85;i++){
            printf("%c",177);
        }
        printf("\n\t\t\tR\tU\tL\tE\tT\tA\n");
        for(int i=0; i< 85;i++){
            printf("%c",177);
        }
        printf ("\n\t\t%cQu%c tipo de apuesta quieres realizar?\n\n",168,130);
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
            printf("\n\n\t\t\t\t\t");
            for (int i = 0; i < 5; i++){
                printf("%c",176);
            }
            printf ("\n\n\n\t\t\t\t\t%c%c%d%c%c",178,178,rand() % 37,178,178);
        }
        Seg2=(int)clock()/CLOCKS_PER_SEC;
    }
}

