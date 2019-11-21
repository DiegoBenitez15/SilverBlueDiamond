//
// Created by diego on 20/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "REDDOG.h"

int main()
{
    int mazo[52],*m,ccmazo,apuesta,rd;
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

    printf("\nRealice su apuesta inicial: ");
    scanf(" %d",&apuesta);
    rd = RedDog(cartas);
    printf("CARTAS:");
    for(int i=0;i<ccartas;i++)
    {
        printf("%d ",(cartas[i] % 13) + 1);
    }
    printf("\t\tPerro Rojo: %d",rd);

    if(rd == 12)
    {
        printf("\n|EMPATE|Juego Consecutivo");
    }
    else if(rd == 13)
    {
        ccartas = carta(m,c,&ccmazo,ccartas);
        printf("\nCARTAS:");
        for(int i=0;i<ccartas;i++)
        {
            printf("%d ",(cartas[i] % 13) + 1);
        }

        if(c[2] == c[0])
        {
            apuesta += apuesta;
        }
    }
    else
    {
        int op;
        printf("\n|1|Seguir\t\t|2|Quedarse");
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
                    printf("\nLA CASA HA GANADO");
                    apuesta = (apuesta*2) *(-1);
                }
                else if(p == 1)
                {
                    printf("\nTU HAS GANADO");
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

    printf("\n");
    for(int i=0;i<ccartas;i++)
    {
        printf("%d ",((cartas[i] % 13)+1));
    }

    printf("\nDinero Obtenido: %d",apuesta);
}