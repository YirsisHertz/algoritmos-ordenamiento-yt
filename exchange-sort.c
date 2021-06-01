#include <stdio.h>

void ordenar(int valores[], int n){
  printf("Matriz inicial: ");
  for(int i =0; i < n; i++){
    printf("%i, ", valores[i]);
  }

  for(int a = 0; a < n - 1; a++){
    for(int b = a + 1; b < n; b++ ){

      if(valores[a] > valores[b]){
	int temporal = valores[a];
	valores[a] = valores[b];
	valores[b] = temporal;
      }
      
    }
  }

 printf("\n\nMatriz Final: ");
  for(int i =0; i < n; i++){
    printf("%i, ", valores[i]);
  }



}

int main(){

  int valores[] = {70, 43, 52, 6 , 18, 92, 44, 7}; 

  ordenar(valores, 8);

  return 0;
}

