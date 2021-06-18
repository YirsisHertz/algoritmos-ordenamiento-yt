#include <stdio.h>

void shellSort(int valores[], int n)
{
    int salto = n / 2;
    int i, j, k;

    while (salto > 0) {

	for (i = 0; i < n; i++) {

	    j = i - salto;
	    while (j >= 0) {
		k = j + salto;

		if (valores[j] <= valores[k]) {
		    j = -1;
		} else {
		    int temporal = valores[j];
		    valores[j] = valores[k];
		    valores[k] = temporal;

		    j -= salto;
		}
	    }
	}

	salto = salto / 2;
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
    int valores[] = { 15, 42, 3, 12, 4, 1, 8, 98, 32, 123, 42, 1, 32, 3, 45, 9 };
    int n = sizeof(valores) / sizeof(valores[0]);

    printArray(valores, n);
    shellSort(valores, n);
    printArray(valores, n);

    return 0;
}
