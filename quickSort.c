#include <stdio.h>

void quickSort(int valores[], int primero, int ultimo)
{
    int i, j, centro, pivote;

    centro = (primero + ultimo) / 2;
    pivote = valores[centro];
    i = primero;
    j = ultimo;

    do {

	while (valores[i] < pivote) {
	    i++;
	}

	while (valores[j] > pivote) {
	    j--;
	}

	if (i <= j) {
	    int temporal = valores[i];
	    valores[i] = valores[j];
	    valores[j] = temporal;

	    i++;
	    j--;
	}

    } while (i <= j);

    if (primero < j) {
	quickSort(valores, primero, j);
    }

    if (i < ultimo) {
	quickSort(valores, i, ultimo);
    }
}

void printArray(int valores[], int n)
{
    for (int i = 0; i < n; i++) {
	printf("%i, ", valores[i]);
    }
    printf("\n");
}

int main()
{
    int valores[] = { 15, 42, 3, 12, 4, 1, 8, 98, 32, 123, 42, 32, 45, 7, 9 };
    int n = sizeof(valores) / sizeof(valores[0]);

    printArray(valores, n);

    quickSort(valores, 0, n - 1);

    printArray(valores, n);

    return 0;
}
