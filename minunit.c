//
// Created by diego on 4/12/2019.
//

#include "minunit.h"

#include "Funciones.h"

#define MINUNIT_EPSILON 1E-12

//BlackJack

MU_TEST(PEDIRCARTA) {
    int mazo[52],cmazo = 52;
    int *J1,ccartas = 1;
    J1 = (int*) calloc(10, sizeof(int));
    generar(mazo);
    ccartas = pedircartas(mazo,J1,ccartas,&cmazo);

    mu_assert_int_eq(50, cmazo);
    mu_assert_int_eq(2, ccartas);
}

MU_TEST(PEDIRCARTA2) {
    int mazo[52],cmazo = 52;
    int *J1,ccartas = 1;
    J1 = (int*) calloc(10, sizeof(int));
    generar(mazo);
    ccartas = pedircartas(mazo,J1,ccartas,&cmazo);
    ccartas = pedircartas(mazo,J1,ccartas,&cmazo);

    mu_assert_int_eq(49, cmazo);
    mu_assert_int_eq(3, ccartas);
}

MU_TEST(SUMANDO_CARTAS) {
    int *J1,ccartas = 2;
    J1 = (int*) calloc(10, sizeof(int));
    J1[0] = 7;
    J1[1] = 8;

    mu_assert_int_eq(17, sumando(J1,0,ccartas,0));
}

MU_TEST(SUMANDO_CARTAS2) {
    int *J1,ccartas = 3;
    J1 = (int*) calloc(10, sizeof(int));
    J1[0] = 1;
    J1[1] = 9;
    J1[2] = 5;

    mu_assert_int_eq(18, sumando(J1,0,ccartas,0));
}

MU_TEST(SUMANDO_CARTAS3) {
    int *J1,ccartas = 3;
    J1 = (int*) calloc(10, sizeof(int));
    J1[0] = 1;
    J1[1] = 12;
    J1[2] = 10;

    mu_assert_int_eq(22, sumando(J1,0,ccartas,0));
}

MU_TEST(COMPARARACARTAS) {
    int *J1,suma;
    J1 = (int*) calloc(10, sizeof(int));
    J1[0] = 13;
    J1[1] = 4;

    suma = 14;

    mu_assert_int_eq(2, comparar(J1,suma));
}

MU_TEST(COMPARARACARTAS2) {
    int *J1,suma;
    J1 = (int*) calloc(10, sizeof(int));
    J1[0] = 0;
    J1[1] = 12;

    suma = 21;

    mu_assert_int_eq(3, comparar(J1,suma));
}

MU_TEST(COMPARARACARTAS3) {
    int *J1,suma;
    J1 = (int*) calloc(10, sizeof(int));
    J1[0] = 7;
    J1[1] = 6;
    J1[2] = 10;

    suma = 23;

    mu_assert_int_eq(1, comparar(J1,suma));
}

// Craps

MU_TEST(LINEADEPASE) {
    int d1,d2;
    d1 = 3;
    d2 = 4;


    mu_assert_int_eq(100, lna_pase(d1,d2,10));
}

MU_TEST(LINEADEPASE2) {
    int d1,d2;
    d1 = 3;
    d2 = 4;

    mu_assert_int_eq(-10, lna_pase(d1,d2,10));
}

MU_TEST(CAMPO) {
    int d1,d2;
    d1 = 2;
    d2 = 1;


    mu_assert_int_eq(50, lna_pase(d1,d2,10));
}

MU_TEST(CAMPO2) {
    int d1,d2;
    d1 = 6;
    d2 = 6;

    mu_assert_int_eq(100, lna_pase(d1,d2,10));
}

MU_TEST(CAMPO3) {
    int d1,d2;
    d1 = 3;
    d2 = 4;

    mu_assert_int_eq(-10, lna_pase(d1,d2,10));
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(PEDIRCARTA);
    MU_RUN_TEST(PEDIRCARTA2);
    MU_RUN_TEST(SUMANDO_CARTAS);
    MU_RUN_TEST(SUMANDO_CARTAS2);
    MU_RUN_TEST(SUMANDO_CARTAS3);
    MU_RUN_TEST(COMPARARACARTAS);
    MU_RUN_TEST(COMPARARACARTAS2);
    MU_RUN_TEST(COMPARARACARTAS3);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}