/*  main.c  */

#include <include/globales.h>
#include <stdio.h>
#include <string.h>
#include <include/mess_help.h>
#include <include/conteo.h>

int main(int argc, char **argv)
{
	//Inicializacion de las variables de salida
	Salidas_t s;
	s.numLineas=0;
	s.numCaracteres=0;
	s.numPalabras=0;
	nameFile=argv[argc-1];
	char **option;;

	//Validacion de argumentos del programa
	if(argc<=1 || argc>3)
	{
		mess_help();
	}else if(argc==2)
	{
		contarLinesyChars(&s);
		contarWords(&s);
		printf("  %d  %d %d %s\n",s.numLineas,s.numPalabras,s.numCaracteres,nameFile);
		return 0;
	}

	for (int i=0; i<2; i++)
		option=argv+i;


	if(argc==3)
	{
		if(strcmp(*option,"-c")==0)
		{
			contarLinesyChars(&s);
			printf("  %d %s\n",s.numCaracteres,nameFile);
		}
		else if(strcmp(*option,"-l")==0)
		{
			contarLinesyChars(&s);
			printf("  %d %s\n",s.numLineas,nameFile);
			return 0;
		}
		else if(strcmp(*option,"-w")==0)
		{
			contarWords(&s);
			printf("  %d %s\n",s.numPalabras,nameFile);
			return 0;
		}else if(strcmp(*option,"-h")==0)
		{
			mess_help();
			return 0;
		}else 
			fprintf(stderr,"\t\tOpcion no valida");
			mess_help();
	}
	
}


