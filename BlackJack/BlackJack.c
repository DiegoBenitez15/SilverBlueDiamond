//
// Created by diego on 5/11/2019.
//

#include <time.h>
#include <stdlib.h>

int* generarcartas(int *cards,int x)
{
    int i;
    srand(time(NULL));
    cards = (int*) realloc(cards,x * sizeof(int));

    for(i = 0;i < x;i++)
    {
        if(cards[i] > 0)
        {
        }
        else
        {
            cards[i] = 1 + rand() % (14-1);
        }
    }

    return cards;
}

int sumando(int *cards,int ii,int is,int suma)
{
    if(ii == is)
    {
        return suma;
    }
    else if(cards[ii] == 1)
    {
        if(is == 2)
        {
            suma += 11;
            return sumando(cards,ii+1,is,suma);
        }
        else if(is >= 3)
        {
            if(suma <= 10)
            {
                suma += 11;
                return sumando(cards,ii+1,is,suma);
            }
            else if(suma > 10)
            {
                suma += 21 - suma;
                return sumando(cards,ii+1,is,suma);
            }
        }
    }
    else if(cards[ii] >= 10 && cards[ii] <= 13)
    {
        suma += 10;
        return sumando(cards,ii+1,is,suma);
    }
    else if(cards[ii] < 10)
    {
        suma += cards[ii];
        return sumando(cards,ii+1,is,suma);
    }
}

int comparar(int *cards,int suma,int x)
{
    if(cards[0] == 13 && cards[1] == 1) // BlackJack
    {
        return 3;
    }
    else if(suma <= 21) // Suma de cartas menores o igual a 21
    {
        return 2;
    }
    else if(suma > 21) // Suma de numero es mayor a 21
    {
        return 1;
    }
}

int resultados(int r1,int r2,int suma,int suma2) //Compara ambos jugadores y determina quien gana
{
    if(r1 > r2) // Si el jugador 1 tiene BlackJack
    {
        return 1;
    }
    else if(r1 == r2) //Si ambos jugadores tienen la misma cantidad en la suma de las cartas
    {
        if(r1 == 3 || r1 == 1)
        {
            return 2;
        }
        else if(r1 == 2)
        {
            if(suma > suma2)
            {
                return 1;
            }
            else if(suma <  suma2)
            {
                return 0;
            }
        }
    }
    if(r1 < r2) // Si el jugador 1 se paso de 21
    {
        return 0;
    }
}
