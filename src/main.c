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
	char **option;

	//Validacion del numero de argumentos del programa
	if(argc<=1 || argc>4)
	{
		mess_help();
	}else if(argc==2)
	{
		contarLinesyChars(&s);
		contarWords(&s);
		printf("  %d  %d %d %s\n",s.numLineas,s.numPalabras,s.numCaracteres,nameFile);
		return 0;
	}

	for (int i=0; i<2; i++) //Se recorre el arreglo de punteros que contiene las opciones al llamar el programa
		option=argv+i;


	if(argc==3)
	{
		if(strcmp(*option,"-c")==0)
		{
			contarLinesyChars(&s);
			printf("%d %s\n",s.numCaracteres,nameFile);
		}
		else if(strcmp(*option,"-l")==0)
		{
			contarLinesyChars(&s);
			printf("%d %s\n",s.numLineas,nameFile);
			return 0;
		}
		else if(strcmp(*option,"-w")==0)
		{
			contarWords(&s);
			printf("%d %s\n",s.numPalabras,nameFile);
			return 0;
		}else if(strcmp(*option,"-h")==0)
		{
			mess_help();
			return 0;
		}else
		{
			fprintf(stderr,"\t\tOpcion no valida");
			mess_help();
		}
	}else if(argc==4){	//Opciones Extra que no se piden, pero con esto se asemeja mas al original 
		char **ss;
		for (int i=0; i<3; i++)
			ss=argv+i;
		if((strcmp(*option,"-c")==0 && strcmp(*ss,"-l")==0)||(strcmp(*option,"-l")==0 && strcmp(*ss,"-c")==0))
		{
			contarLinesyChars(&s);
			printf(" %d %d %s\n",s.numLineas,s.numCaracteres,nameFile);
		}else if((strcmp(*option,"-c")==0 && strcmp(*ss,"-w")==0)||(strcmp(*option,"-w")==0 && strcmp(*ss,"-c")==0))
		{
			contarWords(&s);
			contarLinesyChars(&s);
			printf(" %d %d %s\n",s.numPalabras,s.numCaracteres,nameFile);
		}else if((strcmp(*option,"-l")==0 && strcmp(*ss,"-w")==0)||(strcmp(*option,"-w")==0 && strcmp(*ss,"-l")==0))
		{
			contarWords(&s);
			contarLinesyChars(&s);
			printf(" %d %d %s\n",s.numLineas,s.numPalabras,nameFile);
		}else if(strcmp(*ss,"-h")==0)	
		{
			mess_help();
		}else
		{
			fprintf(stderr,"\t\tOpcion no valida");
			mess_help();
		}
	}
}


