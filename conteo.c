/* conteo.c */
#include <include/globales.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "include/mess_help.h"
#include "include/conteo.h"
int contarLinesyChars(Salidas_t *sal)
{
	Salidas_t s;
	char c;
	if((ptrFile=fopen(nameFile, "r"))==NULL)
	{
		fprintf(stderr,"\n\t\tError al abrir el archivo o no existe!!\n");
		mess_help();
		exit(0);
	}
	while((c=fgetc(ptrFile))!=EOF)
	{
		sal->numCaracteres++;
		if(c=='\n')
			sal->numLineas++;
	}
	fclose(ptrFile);
	return 1;
}


void contarWords(Salidas_t *sal)
{
	Salidas_t s;
	int c;
	int inWord=0, especial=0, otro=0;
	if((ptrFile=fopen(nameFile, "r"))!=NULL)
	{
		while((c=fgetc(ptrFile))!=EOF)
		{
		if(isspace(c)) especial++;

			 else if(isalpha(c)!=0 || isdigit(c)!=0)
			{
				if(inWord==0)
				{
					sal->numPalabras+=1;
					inWord=1;
				}
			}else if(inWord==1){
				inWord=0;
			}
		}
	}else{
		fprintf(stderr,"\n\t\tError al abrir el archivo o no existe!!\n");
		mess_help();
		exit(0);
	}
	sal->numPalabras=especial;
	fclose(ptrFile);
}
