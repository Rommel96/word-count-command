/* mess_help.c */
#include <stdio.h>
#include <stdlib.h>
#include "include/mess_help.h"
// Implementacion de la funcion que imprime el mensaje de ayuda
int mess_help()
{
	fprintf(stderr,"\nwc [option] FILE\nwc, o ''word count,'' muestra en consola el número de saltos de línea, palabras, y caracteres del archivo de entrada.\n-h: ayuda, muestra este mensaje\n-l: muestra el total de saltos de línea\n-w: muestra el total de palabras\n-c: muestra el total de caracteres\n");
	return 0;
}
