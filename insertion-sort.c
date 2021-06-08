#include <stdio.h>

void insertionSort(int valores[], int n){
  int i, j, aux;

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

  int valores[] = {31, 25, 43, 12, 8, 67, 14};
  int n = sizeof valores / sizeof valores[0];

  for(int i = 0; i < n; i++){
    printf("%i, ", valores[i]);
  }

  insertionSort(valores, n);

  printf("\n");

for(int i = 0; i < n; i++){
    printf("%i, ", valores[i]);
  }

  return 0;
}
