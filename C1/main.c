#include <stdio.h>

int largo_cadena(char *cadena)
{
	int largo = 0;
	while (*cadena != '\0')
	{
		largo++;
		cadena++;
	}
	return largo;
}

int main(int argc, char **argv)
{
	char cadena[10] = {"Hola"};
	printf("El largo de la cadena es %d\n", largo_cadena(cadena));
	return 0;
}
