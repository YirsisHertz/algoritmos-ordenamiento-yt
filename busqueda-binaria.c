#include <stdio.h>

int busquedaBinaria(int valores[], int objetivo, int primero, int ultimo)
{

    if (ultimo >= primero) {
	int central = primero + (ultimo - primero) / 2;

	if (valores[central] == objetivo) {
	    return central;
	}

	if (valores[central] > objetivo) {
	    return busquedaBinaria(valores, objetivo, primero, central - 1);
	}

	return busquedaBinaria(valores, objetivo, central + 1, ultimo);
    }

    return -1;
}

int main(void)
{

    int valores[] = { 13, 15, 18, 23, 32, 45, 55, 81, 90 };
    //
    int n = sizeof(valores) / sizeof(valores[0]);

    int resultado = busquedaBinaria(valores, 23, 0, n - 1);
    if (resultado == -1) {
	printf("El elemento no se encontro\n");
    } else {
	printf("El elemento esta en el indice: %d\n", resultado);
    }

    return 0;
}
