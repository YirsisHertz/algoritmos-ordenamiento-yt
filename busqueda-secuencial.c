#include <stdio.h>

//O(n)
int main(void)
{
    int iteraciones = 0;

    int valores[] = { 13, 18, 9, 7, 23, 41, 5, 17 };

    int objetivo = 17;

    while (iteraciones < 8 && objetivo != valores[iteraciones])
	iteraciones++;

    printf("El valor %d esta en el indice: %d\n", objetivo, iteraciones);

    /* for (int i = 0; i < 8; i++) { */

    /* if (objetivo == valores[i]) { */
    /* printf("El valor %d esta en el indice: %d\n", objetivo, i); */
    /* } */

    /* iteraciones++; */
    /* } */

    printf("%d\n", iteraciones + 1);

    return 0;
}
