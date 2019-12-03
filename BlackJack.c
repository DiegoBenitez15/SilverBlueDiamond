//
// Created by diego on 10/11/2019.
//

#include "Funciones.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


void BlackJack()
{
    int mazo[52],cmazo; //Variables del mazo
    cmazo = 52;
    int ccartas,*J1,sumaJ1,r1; //Variables del jugador
    J1 = (int*) calloc(10, sizeof(int));ccartas = 1; sumaJ1 = 0;
    int ccartas2,*J2,sumaJ2,r2; //Variables de la Casa
    J2 = (int*) calloc(10, sizeof(int));ccartas2 = 1; sumaJ2 = 0;
    int i,y,p1,p2; //Variables para el programa
    p1 = 0;p2 = 0;
    srand(time(NULL));

    generar(mazo);
    ccartas = pedircartas(mazo,J1,ccartas,&cmazo);
    ordenar(J1,ccartas);
    sumaJ1 =sumando(J1,0,ccartas,sumaJ1);
    ccartas2 = pedircartas(mazo,J2,ccartas2,&cmazo);
    ordenar(J2,ccartas2);
    sumaJ2 = sumando(J2,0,ccartas2,sumaJ2);

    while(p1 == 0 || p2 == 0)
    {
        if(p2 == 0)
        {
            ordenar(J2,ccartas2);
            p2 = repartidor(J2,mazo,&cmazo,&ccartas2,sumaJ2);
            sumaJ2 = sumando(J2,0,ccartas2,0);
        }

        if(p1 == 0)
        {
            char op;
            system("cls");
            pantallaB(J1,ccartas,0,sumaJ1);
            printf("\n%c Seleccionar %c = ",176,176);
            fflush(stdin);
            scanf(" %c",&op);

            switch(op)
            {
                case '1':
                {
                    ccartas = pedircartas(mazo,J1,ccartas,&cmazo);
                    ordenar(J1,ccartas);
                    sumaJ1 = sumando(J1,0,ccartas,0);
                    break;
                }
                case '2':
                {
                    sumando(J1,0,ccartas,0);
                    p1 = 1;
                    break;
                }
                default:
                {
                    printf("\n%c Error. Digita nuevamente. %c",176,176);
                    system("pause");
                }
            }
        }
    }

    r1 = comparar(J1,sumaJ1);
    r2 = comparar(J2,sumaJ2);
    y = resultados(r1,r2,sumaJ1,sumaJ2);

    if(y == 0)
    {
        printf("\n\n\t\t\t%c |H A S   P E R D I D O| %c",176,176);
    }
    else if(y == 1)
    {
        printf("\n\n\t\t\t%c |H A S  G A N A D O| %c",176,176);
    }
    else if(y == 2)
    {
        printf("\n\n\t\t\t%c |E M P A T E| %c",176,176);
    }

    printf("\n%c Jugador %c =",176,176);
    for(i =0;i<ccartas;i++)
    {
        printf("[%d] ",((J1[i]  % 13) + 1));
    }
    printf("\t\t\t%cSuma del jugador %c = %d",176,176,sumaJ1);

    printf("\n%c Casino %c =",176,176);
    for(i =0;i<ccartas2;i++)
    {
        printf("[%d] ",((J2[i]  % 13) + 1));
    }
    printf("\t\t\t\t%c Suma del Casino %c = %d",176,176,sumaJ2);

    return;
}


void generar(int *p)
{
    int j;

    for(j = 0;j < 52;j++)
    {
        p[j] = j+1;
    }
}

int pedircartas(int *mazo,int *cartas,int ccartas,int *cmazo)
{
    int i,x;

    for(i = 0;i < ccartas + 1;i++)
    {
        if(cartas[i] == 0)
        {
            x = rand() % (*cmazo);
            cartas[i] = mazo[x];

            *cmazo = elimazo(mazo,*cmazo,x);
        }
    }

    return ccartas+1;
}

int elimazo(int* mazo,int cmazo,int pos)
{
    int aux;

    while(pos < (cmazo-1)) //Manda la carta del mazo a la parte final del arreglo y reduce cmazo(variable que controla la cantidad de cartas en el mazo)
    {
        aux = mazo[pos];
        mazo[pos] = mazo[pos+1];
        mazo[pos+1] = aux;

        pos++;
    }

    return (cmazo-1);
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

int comparar(const int *cards,int suma)
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

    return -1;
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

    return -1;
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
        op = rand() % 3;

        if(op == 0 || op ==2)
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

    return 1;
}

void cartainicial(const int *cartas,int x,int y)
{
    gotoxy(x,y);printf(" _______________________");
    gotoxy(x,y+1);printf("%c                      %d|",186,(*(cartas) % 13) + 1);
    gotoxy(x,y+2);printf("%c                       %c",186,186);
    gotoxy(x,y+3);printf("%c                       %c",186,186);
    gotoxy(x,y+4);printf("%c                       %c",186,186);
    gotoxy(x,y+5);printf("%c                       %c",186,186);
    gotoxy(x,y+6);printf("%c                       %c",186,186);
    gotoxy(x,y+7);printf("%c                       %c",186,186);
    gotoxy(x,y+8);printf("%c                       %c",186,186);
    gotoxy(x,y+9);printf("%c                       %c",186,186);
    gotoxy(x,y+10);printf("%c                       %c",186,186);
    gotoxy(x,y+11);printf("%c                       %c",186,186);
    gotoxy(x,y+12);printf("%c                       %c",186,186);
    gotoxy(x,y+13);printf("%c                       %c",186,186);
    gotoxy(x,y+14);printf("%c                       %c",186,186);
    gotoxy(x,y+15);printf("%c%d______________________%c",186,(*(cartas) % 13) + 1,186);
}

void cartaposterior(const int *carta,int x,int y)
{
    gotoxy(x,y);printf("_____");
    gotoxy(x,y+1);printf("   %d|",(*(carta) % 13) + 1);
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
        cartainicial(cartas+ii,x,y);
        imprimirb(cartas,ii+1,ccartas,x+25,y);
    }
    else if(ii > 0)
    {
        cartaposterior(cartas+ii,x,y);
        imprimirb(cartas,ii+1,ccartas,x+7,y);
    }

}


void pantallaB(int *cartas,int ccartas,int x,int suma) {
    int i;
    for (i = 0; i < 100; i++) {
        printf("%c",177);
    }
    printf("\n\n\tB\tL\tA\tC\tK\t\t\tJ\tA\tC\tK\t\t%c Suma %c = %d\n",176,176,suma);
    for (i = 0; i < 100; i++) {
        printf("%c",177);
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