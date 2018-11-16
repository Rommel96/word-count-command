/* globlales.h */
#include <stdio.h>
#ifndef _GLOBALES_H_
#define _GLOBALES_H_
//Declaracion de variables globales
char *nameFile;
static FILE *ptrFile;

typedef struct Salidas{ //Declaracion de structura para las salidas
	int numLineas;
	int numCaracteres;
	int numPalabras;
}Salidas_t;
#endif
