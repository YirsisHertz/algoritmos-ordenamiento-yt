#include <stdio.h>
#include <time.h>

void ordenar(int valores[], int n)
{

    for (int a = 0; a < n - 1; a++) {
	for (int b = a + 1; b < n; b++) {

	    if (valores[a] > valores[b]) {
		int temporal = valores[a];
		valores[a] = valores[b];
		valores[b] = temporal;
	    }
	}
    }
}

int main()
{
    int valores[] = { 70, 43, 52, 6, 18, 92, 44, 7 };
    /* int valores[] = { 13, 18, 3, 7, 41, 50 }; */
    printf("Matriz inicial: ");
    for (int i = 0; i < 8; i++) {
	printf("%i, ", valores[i]);
    }

    ordenar(valores, 8);

    printf("\n\nMatriz Final: ");
    for (int i = 0; i < 8; i++) {
	printf("%i, ", valores[i]);
    }

    return 0;
}
