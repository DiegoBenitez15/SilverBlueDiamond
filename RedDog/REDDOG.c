//
// Created by diego on 20/11/2019.
//

#include "REDDOG.h"
#include <stdlib.h>

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

