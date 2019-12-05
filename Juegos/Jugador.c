//
// Created by diego on 1/12/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Funciones.h"

void ordenarpuntuaciones(JUGADOR *cabeza)
{
    JUGADOR *temp;
    temp = cabeza;
    if(temp != NULL)
    {
        JUGADOR *pivote = NULL,*actual = NULL;
        int tmp;
        double tmp2;
        char *tmp3;
        pivote = temp;
        while(pivote != NULL)
        {
            actual = pivote->siguiente;
            while(actual != NULL)
            {
                if(pivote->puntuacion < actual->puntuacion)
                {
                    tmp = pivote->dinero;
                    pivote->dinero = actual->dinero;
                    actual->dinero = tmp;

                    tmp2 = pivote->puntuacion;
                    pivote->puntuacion = actual->puntuacion;
                    actual->puntuacion = tmp2;

                    tmp3 = pivote->nombre;
                    pivote->nombre = actual->nombre;
                    actual->nombre = tmp3;
                }
                actual = actual->siguiente;
            }
            pivote = pivote->siguiente;
        }
        imprimirpunt(temp);
    }
}

JUGADOR* anadir(JUGADOR* cabeza,char *nombre,int dinero,int punt)
{
    JUGADOR *jugador;
    jugador = malloc(sizeof(JUGADOR));
    jugador->nombre = malloc(strlen(nombre) * sizeof(char));
    strcpy(jugador->nombre,nombre);
    jugador->dinero = dinero;
    jugador->puntuacion = punt;
    jugador->siguiente = cabeza;

    return jugador;
}

JUGADOR* anadirnuevo(JUGADOR **cabeza, char *nombre)
{
    JUGADOR *jugador;
    jugador = malloc(sizeof(JUGADOR));
    jugador->nombre = malloc(strlen(nombre) * sizeof(char));
    strcpy(jugador->nombre,nombre);
    jugador->dinero = 1000;
    jugador->puntuacion = 0;
    jugador->siguiente = *cabeza;
    *cabeza = jugador;

    return jugador;
}

JUGADOR* busqueda(JUGADOR *cabeza,char *destino)
{
    JUGADOR *indice;
    for (indice = cabeza; indice != NULL; indice = indice->siguiente)
    {
        if (stricmp(destino,indice->nombre) == 0)
        {
            return indice;
        }
    }

    return NULL;
}

JUGADOR* jugador(JUGADOR **jugadores)
{
    char *nombre = malloc(sizeof(char));
    gets(nombre);
    JUGADOR* p = *jugadores;
    p = busqueda(p,nombre);

    if(p != NULL)
    {
        return p;
    }
    else
    {
        anadirnuevo(jugadores,nombre);
        return *jugadores;
    }
}


FILE* escribir(JUGADOR *p)
{
    int i = 0;
    FILE *archivo;
    archivo = fopen("Jugadores","wt");

    while(p != NULL)
    {
        fprintf(archivo,"\t\t%s\n%d\n%d\n",p->nombre,p->dinero,p->puntuacion);
        p = p->siguiente;
    }

    fclose(archivo);

    return archivo;
}

JUGADOR* leer()
{
    FILE* archivo;
    archivo = fopen("Jugadores","rt");
    char *nombre = malloc(sizeof(char));
    int dinero,puntuacion;
    JUGADOR *p = NULL;
    printf("\t\t");
    while(fscanf(archivo,"%s\n%d\n%d\n",nombre,&dinero,&puntuacion) != EOF)
    {
        p = anadir(p,nombre,dinero,puntuacion);
    }

    fclose(archivo);

    if(p == NULL)
    {
        return NULL;
    }

    return p;
}