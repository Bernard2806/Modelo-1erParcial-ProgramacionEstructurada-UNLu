#include <stdio.h>

#define N 5

void cargar(int matriz[N][N])
{
	int i, j;
	int k = 1;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			matriz[i][j] = k * k;
			k++;
		}
	}
}

void resta(int matriz[N][N], int restas[N])
{
	int j;
	for (j = 0; j < N; j++)
	{
		restas[j] = matriz[N - 1][j] - matriz[0][j];
	}
}

int main(int argc, char **argv)
{
	int matriz[N][N];
	int restas[N];
	int j;

	cargar(matriz);
	resta(matriz, restas);

	for (j = 0; j < N; j++)
	{
		printf("Resta de la columna %d: %d\n", j + 1, restas[j]);
	}
	return 0;
}
