//
// Created by diego on 5/11/2019.
//

#include "minunit.h"

#include "BlackJack.h"

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_NombrePrueba) {
    int *cartas;
    int x = 2;
    cartas = (int*) calloc(x,sizeof(int));

    printf("\nPrimer Intento\n");

    cartas = generarcartas(cartas,x);

    for(int i =0;i < x;i++)
    {
        if(cartas[i] == 1)
        {
            printf("A ");
        }
        else if(cartas[i] == 11)
        {
            printf("J ");
        }
        else if(cartas[i] == 12)
        {
            printf("Q ");
        }
        else if(cartas[i] == 13)
        {
            printf("K ");
        }
        else
        {
            printf("%d ",cartas[i]);
        }
    }

    printf("\nSegundo Intento\n");

    x = 3;
    cartas = generarcartas(cartas,x);

    for(int i =0;i < x;i++)
    {
        if(cartas[i] == 1)
        {
            printf("A ");
        }
        else if(cartas[i] == 11)
        {
            printf("J ");
        }
        else if(cartas[i] == 12)
        {
            printf("Q ");
        }
        else if(cartas[i] == 13)
        {
            printf("K ");
        }
        else
        {
            printf("%d ",cartas[i]);
        }
    }

}

MU_TEST_SUITE(test_suite) {
        MU_RUN_TEST(test_NombrePrueba);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}