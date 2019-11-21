#include <stdio.h>
#include "BlackJack.h"
#include <stdlib.h>
#include <time.h>


int main() {
    int mazo[52],cmazo; //Variables del mazo
    cmazo = 52;
    int ccartas,*J1,sumaJ1,r1; //Variables del jugador
    J1 = (int*) calloc(10, sizeof(int));ccartas = 1; sumaJ1 = 0;
    int ccartas2,*J2,sumaJ2,r2; //Variables de la Casa
    J2 = (int*) calloc(10, sizeof(int));ccartas2 = 1; sumaJ2 = 0;
    int i,d,y,p1,p2; //Variables para el programa
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
            printf("\nCARTAS:");
            for(i =0;i<ccartas2;i++)
            {
                printf("%d ",((J2[i]  % 13) + 1));
            }
            printf("\t\tSuma: %d",sumaJ2);
        }

       if(p1 == 0)
       {
           char op;
           printf("\n|1|Pedir Cartas    |2|Quedarse");
           printf("\nCARTAS:");
           for(i =0;i<ccartas;i++)
           {
               printf("%d ",((J1[i]  % 13) + 1));
           }
           printf("\t\tSuma: %d",sumaJ1);
           printf("\nSeleccionar: ");
           fflush(stdin);
           scanf(" %c",&op);

           switch(op)
           {
               case '1':
               {
                   ccartas = pedircartas(mazo,J1,ccartas,&cmazo);
                   ordenar(J1,ccartas);
                   sumaJ1 = sumando(J1,0,ccartas,sumaJ1);
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
                   printf("\nError opcion no valida");
               }
           }
       }
    }

    r1 = comparar(J1,sumaJ1);
    r2 = comparar(J2,sumaJ2);
    y = resultados(r1,r2,sumaJ1,sumaJ2);

    if(y == 0)
    {
        printf("\n\n|LO LAMENTO HAS PERDIDO|");
    }
    else if(y == 1)
    {
        printf("\n\n|FELICIDADEEEEES HAS GANADO|");
    }
    else if(y == 2)
    {
        printf("\n\n|EMPATE|");
    }

    printf("\nJugador:");
    for(i =0;i<ccartas;i++)
    {
        printf("%d ",((J1[i]  % 13) + 1));
    }
    printf("\t\tSuma: %d",sumaJ1);

    printf("\nCASINO:");
    for(i =0;i<ccartas2;i++)
    {
        printf("%d ",((J2[i]  % 13) + 1));
    }
    printf("\t\tSuma2: %d",sumaJ2);

}