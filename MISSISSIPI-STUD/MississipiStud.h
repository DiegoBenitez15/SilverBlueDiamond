//
// Created by diego on 20/11/2019.
//

#ifndef PORTAFOLIO_2_MISSISSIPISTUD_H
#define PORTAFOLIO_2_MISSISSIPISTUD_H

void generarcarta(int *mazo);
void eliminarcarta(int *mazo,int *cmazo,int pos);
int carta(int *mazo,int *carta,int *cmazo,int ccarta);
int RedDog(const int *cartas);
int intervalo(const int *cartas);
int tasadeapuestas(int rd);
void ordenar(int *cartas,int ccartas);


#endif //PORTAFOLIO_2_MISSISSIPISTUD_H
