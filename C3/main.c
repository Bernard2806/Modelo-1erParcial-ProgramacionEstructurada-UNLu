#include <stdio.h>

int coincidencias_iniciales(char *palabra1, char *palabra2)
{
	int cantidad = 0;
	while (*palabra1 != '\0' && *palabra2 != '\0' && *palabra1 == *palabra2)
	{
		cantidad++;
		palabra1++;
		palabra2++;
	}
	return cantidad;
}

int main(int argc, char **argv)
{
	char palabra1[] = "Materia";
	char palabra2[] = "Matrero";
	printf("Caracteres consecutivos iguales desde el principio: %d\n", coincidencias_iniciales(palabra1, palabra2));
	return 0;
}
