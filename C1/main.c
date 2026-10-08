#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void largo_cadena(char caden[], int* largo){
	*largo = strlen(caden);
	return;
}

int main(int argc, char **argv)
{
	char cadena[10] = {"Hola"};
	int l = 0;
	largo_cadena(cadena, &l);
	printf("El largo de la cadena es %d", l);
	return 0;
}
