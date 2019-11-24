//
// Created by diego on 20/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "REDDOG.h"

int main()
{
    int mazo[52],*m,ccmazo,apuesta,rd,i;
    m= mazo,ccmazo = 52;apuesta = 0;
    int cartas[3],*c,ccartas;
    c = cartas;ccartas = 0;
    srand(time(NULL));

    generarcarta(m);
    for(int i=0;i<2;i++)
    {
        ccartas = carta(m,c,&ccmazo,ccartas);
    }
    ordenar(c,ccartas);

    //printf("\nRealice su apuesta inicial: ");
    //scanf(" %d",&apuesta);
    apuesta = 20;
    rd = RedDog(cartas);
    //system("cls");

    if(rd == 12)
    {
//        system("cls");
        for(i=0;i<100;i++)
        {
            printf("-");
        }
        printf("\n\t\t\t|EMPATE|Juego Consecutivo\n");
        for(i=0;i<100;i++)
        {
            printf("-");
        }
    }
    else if(rd == 13)
    {
        ccartas = carta(m,c,&ccmazo,ccartas);
        pantalla(cartas,0,ccartas,0,rd);

        if(c[2] == c[0])
        {
            apuesta += apuesta;
        }
    }
    else
    {
        int op;
        pantalla(cartas,0,ccartas,0,rd);
        fflush(stdin);
        scanf(" %d",&op);

        switch(op)
        {
            case 1:
            {
                int p;
                ccartas = carta(mazo,cartas,&ccmazo,ccartas);
                p = intervalo(cartas);

                if(p == 0)
                {
                    system("cls");
                    for(i=0;i<100;i++)
                    {
                        printf("-");
                    }
                    printf("\n\t\t\t\t\tLA CASA HA GANADO\n");
                    for(i=0;i<100;i++)
                    {
                        printf("-");
                    }
                    apuesta = (apuesta*2) *(-1);
                }
                else if(p == 1)
                {
                    system("cls");
                    for(i=0;i<100;i++)
                    {
                        printf("-");
                    }
                    printf("\n\t\t\t\t\tTU HAS GANADO\n");
                    for(i=0;i<100;i++)
                    {
                        printf("-");
                    }
                    apuesta += (apuesta) * tasadeapuestas(rd);
                }

                break;
            }
            case 2:
            {
                apuesta = apuesta * (-1);
                break;
            }
            default:
            {
                printf("\nLa opcion ingresada no es valida");
            }
        }

    }
    system("cls");
    printf("\n");
    imprimir(cartas,0,ccartas,0);

    printf("\n");

    for(i=0;i<100;i++)
    {
        printf("-");
    }

    printf("\n");
    printf("\nDinero Obtenido: %d",apuesta);
}