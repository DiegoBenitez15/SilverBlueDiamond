//
// Created by diego on 20/11/2019.
//

#include "Funciones.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int REDDOG()
{
    int mazo[52],*m,ccmazo,apuesta,rd,i;
    m= mazo,ccmazo = 52;apuesta = 0;
    int cartas[3],*c,ccartas;
    c = cartas;ccartas = 0;
    srand(time(NULL));

    generarcarta(m);
    for(i=0;i<2;i++)
    {
        ccartas = carta(m,c,&ccmazo,ccartas);
    }
    ordenar(c,ccartas);

    //printf("\nRealice su apuesta inicial: ");
    //scanf(" %d",&apuesta);
    apuesta = 20;
    rd = RedDog(cartas);
    system("cls");

    if(rd == 12)
    {
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
        pantalla(cartas,ccartas,0,rd);

        if(c[2] == c[0])
        {
            apuesta += apuesta;
        }
    }
    else
    {
        int op;
        pantalla(cartas,ccartas,0,rd);
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

    imprimir(cartas,0,ccartas,0);

    printf("\n");

    for(i=0;i<100;i++)
    {
        printf("-");
    }

    printf("\n");
    printf("\nDinero Obtenido: %d",apuesta);

    return apuesta;
}

void generarcarta(int *mazo)
{
    int i;

    for(i=0;i<52;i++)
    {
        mazo[i] = i+1;
    }
}

int carta(int *mazo,int *carta,int *cmazo,int ccarta)
{
    int x = rand() % *cmazo;

    carta[ccarta] = mazo[x];
    eliminarcarta(mazo,cmazo,x);

    return ccarta+1;
}

void eliminarcarta(int *mazo,int *cmazo,int pos)
{
    int aux;
    *cmazo -= 1;

    while(pos < *cmazo)
    {
        aux = mazo[pos];
        mazo[pos] = mazo[pos+1];
        mazo[pos+1] = aux;

        pos++;
    }
}

int RedDog(const int *cartas)
{
    if((cartas[0]  % 13)+1 == (cartas[1]  % 13)+1)
    {
        return 13;
    }
    else if((((cartas[0]  % 13)+2) == (cartas[1]  % 13)+1))
    {
        return 12;
    }
    else
    {
        if(((cartas[0] % 13)+1) == 1)
        {
            return (14 - ((cartas[1] % 13)+1))-1;
        }
        else
        {
            return (((cartas[1]  % 13) + 1) - ((cartas[0]  % 13) + 1)) - 1;
        }
    }
}

int intervalo(const int *cartas)
{
    if(((cartas[0] % 13)+1) == 1)
    {
        if(((cartas[2] % 13)+1) < 14 && ((cartas[2] % 13)+1) > ((cartas[1] % 13)+1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if(((cartas[2] % 13)+1) > ((cartas[0] % 13)+1) && ((cartas[2] % 13)+1) < ((cartas[1] % 13)+1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int tasadeapuestas(int rd)
{
    if(rd == 1)
    {
        return 5;
    }
    else if(rd == 2)
    {
        return 4;
    }
    else if(rd == 3)
    {
        return 2;
    }
    else if(rd > 3)
    {
        return 1;
    }

    return -1;
}

void ordenar(int *cartas,int ccartas)
{
    int i, j, aux;

    for (i = 0 ; i < ccartas - 1; i++)
    {
        for (j = 0 ; j < ccartas - i - 1; j++)
        {
            if ((cartas[j] % 13)+1 > (cartas[j+1] % 13)+1)
            {
                aux       = cartas[j];
                cartas[j]   = cartas[j+1];
                cartas[j+1] = aux;
            }
        }
    }
}

