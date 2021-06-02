#include <stdio.h>

void selectionSort(int valores[], int n){
  int valorMinimo;

  for(int a = 0; a < n - 1; a++){
	valorMinimo = a;

	for(int b = a + 1; b < n; b++){
	  if(valores[b] < valores[valorMinimo]){
	    valorMinimo = b;
	  }
	}

	if(a != valorMinimo){
	  int temporal = valores[a];
	  valores[a] = valores[valorMinimo];
	  valores[valorMinimo] = temporal;
	}
  }
}


int main(){

  int valores[] = {78, 87, 3, 54, 21, 1, 89, 566, 3123, 378, 65, 4, 11, 2};
  
  int n =  sizeof valores  / sizeof *valores;


  for(int i = 0; i < n; i++){
    printf("%i, ", valores[i]);
  }

  selectionSort(valores, n);

  printf("\nFinal: ");
  for(int i = 0; i < n; i++){
    printf("%i, ", valores[i]);
  }

  return 0;
}
