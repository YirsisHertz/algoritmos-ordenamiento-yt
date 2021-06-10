#include <stdio.h>
#include <stdlib.h>

void insertionSort(int valores[], int n){
  int i, j, aux;
  system("clear");

  for(i = 1; i < n; i++){
    j = i;
    aux = valores[i];
    while(j > 0 && aux < valores[j - 1]){
      valores[j] = valores[j - 1];
      j--;
    }
    valores[j] = aux;
  }
}


int main(){

  int valores[5];

  for(int i = 0; i < 5; i++){
    scanf("%i", &valores[i]);
  }

  int n = sizeof valores / sizeof valores[0];

  printf("Desordenado: ");

  for(int i = 0; i < n; i++){
    printf("%i, ", valores[i]);
    /* cprintf("Desordenado: "); */
  }

  insertionSort(valores, n);

  printf("\n");
  printf("Ordenado: ");
  /* textcolor(2); */

for(int i = 0; i < n; i++){
    printf("%i, ", valores[i]); 
  }

 printf("\n");

  return 0;
}
