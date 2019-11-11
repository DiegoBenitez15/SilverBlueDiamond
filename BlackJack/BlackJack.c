//
// Created by diego on 10/11/2019.
//

#include "BlackJack.h"
#include <stdlib.h>
#include <string.h>

int generar(int *p)
{
    int j,c;
    c = 0;

    for(j = 0;j < 52;j++)
    {
        p[c] = j;
        c++;
    }
}

int* barajar(int *baraja)
{
    int tamano = (int)strlen((char*)baraja);
    int *temp = calloc(tamano + 1,sizeof(int));
    int x;
    int i = 0;

    while(i < tamano)
    {
        x = rand() % 53;
        if(baraja[x] != 0)
        {
            temp[i] = baraja[x];
            baraja[x] = 0;
            i++;
        }
    }
    free(baraja);
    return temp;
}

int pedircartas(int *mazo,int *cartas,int ccartas,int *cmazo)
{
    int i;

    for(i = 0;i < ccartas + 1;i++)
    {
        if(cartas[i] <= 0 || cartas[i] > 52)
        {
            int x = rand() % *cmazo;
            cartas[i] = mazo[x];

            *cmazo = elimazo(mazo,*cmazo,x);
        }
    }

    return ccartas+1;
}

int elimazo(int* mazo,int cmazo,int pos)
{
    int aux;

    while(pos < cmazo) //Manda la carta del mazo a la parte final del arreglo y reduce cmazo(variable que controla la cantidad de cartas en el mazo)
    {
        aux = mazo[pos];
        mazo[pos] = mazo[pos+1];
        mazo[pos+1] = aux;

        pos++;
    }

    return cmazo-1;
}

int sumando(int *cards,int ii,int is,int suma)
{
    if(ii == is)
    {
        return suma;
    }
    else if((cards[ii]  % 13) + 1 == 1)
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
    else if((cards[ii]  % 13) + 1 >= 10 && (cards[ii]  % 13) + 1 <= 13)
    {
        suma += 10;
        return sumando(cards,ii+1,is,suma);
    }
    else if((cards[ii]  % 13) + 1 > 0 && (cards[ii]  % 13) + 1 < 10)
    {
        suma += (cards[ii]  % 13) + 1;
        return sumando(cards,ii+1,is,suma);
    }

    return -1;
}

int comparar(int *cards,int suma)
{
    if((cards[0]  % 13) + 1 == 13 && (cards[1]  % 13) + 1 == 1) // BlackJack
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

int repartidor(int *cartas,int *mazo,int *cmazo,int *ccarta,int suma)
{
    if(suma <= 11)
    {
        *ccarta = pedircartas(mazo,cartas,*ccarta,cmazo);
        return 0;
    }
    else if(suma > 11 && suma <= 16)
    {
        int op;
        op = rand() % 1;

        if(op == 0)
        {
            *ccarta = pedircartas(mazo,cartas,*ccarta,cmazo);
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if(suma >= 17)
    {
        return 1;
    }
}

void ordenar(int *cartas,int ccartas)
{
    int i, j, aux;

    for (i = 0 ; i < ccartas - 1; i++)
    {
        for (j = 0 ; j < ccartas - i - 1; j++)
        {
            if (cartas[j] < cartas[j+1])
            {
                aux       = cartas[j];
                cartas[j]   = cartas[j+1];
                cartas[j+1] = aux;
            }
        }
    }
}


