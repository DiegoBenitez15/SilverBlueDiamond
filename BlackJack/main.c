#include <stdio.h>
#include "BlackJack.h"
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    int mazo[52],cmazo,d,y; int *p; //Mazo de Cartas h
    cmazo = 52; d = 0; p = mazo; y =0;
    int cartas[10],ccartas,suma,r1;int *c; //Jugador #1
    c = cartas; ccartas = 1; r1 = 0;
    int cartas2[10],ccartas2,suma2,r2;int *c2;//La Casa
    c2 = cartas2; ccartas2 = 1; suma2 = 0; r2 = 0;

    generar(p);
    ccartas = pedircartas(p,c,ccartas,&cmazo);
    ccartas2 = pedircartas(p,c2,ccartas2,&cmazo);

    while(d == 0)
    {
        ordenar(c2,ccartas2);
        suma2 = sumando(c2,0,ccartas2,0);
        d = repartidor(c2,p,&cmazo,&ccartas2,suma2);
    }

    for(d =0;d< ccartas2;d++)
    {
        printf("%d ",(c2[d] % 13) + 1);
    }
    printf("SUMA: %d",suma2);

    do
    {
        int i,op;
        op = 0;
        d = 0;
        ordenar(cartas,ccartas);
        suma = sumando(c,0,ccartas,0);

        printf("\n|1|Pedir Carta |2|Quedarse\n");
        for(i = 0;i < ccartas;i++)
        {
            printf("%d ",(c[i] % 13) + 1);
        }
        printf("\t\tSuma: %d",suma);
        printf("\nSeleccion: ");
        fflush(stdin);
        scanf("%d",&op);

        switch(op)
        {
            case 1:
            {
                ccartas = pedircartas(p,c,ccartas,&cmazo);
            }
            case 2:
            {
                d = 1;
                r1 = comparar(cartas,suma);
                y = resultados(r1,r2,suma,suma2);
            }
            default:
            {
                printf("\nIngrese una de las dos opciones correctamente\n");
            }
        }

    }while(d == 0);

    if(y == 0)
    {
        printf("\nPERDISTE GAFO\n");
    }
    else if(y == 1)
    {
        printf("\nGANASTE GAFO\n");
    }
    if(y == 2)
    {
        printf("\nEMPATE GAFO\n");
    }

    printf("\t\tR1: %d  R2: %d",r1,r2);
}

