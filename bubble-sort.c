#include <stdio.h>

void bubbleSort(int valores[], int n)
{

    for (int i = 0; i < n - 1; i++) {
	for (int j = 0; j < n - i - 1; j++) {
	    if (valores[j] > valores[j + 1]) {

		int temporal = valores[j];
		valores[j] = valores[j + 1];
		valores[j + 1] = temporal;
	    }
	}
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
    bubbleSort(valores, n);
    printArray(valores, n);

    return 0;
}
