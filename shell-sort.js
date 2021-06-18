const shellSort = (valores = []) => {
  let salto = Math.floor(valores.length / 2);

  while (salto > 0) {
    for (let i = salto; i < valores.length; i++) {
      let j = i - salto;
      while (j >= 0) {
        let k = j + salto;
        if (valores[j] <= valores[k]) j = -1;
        else {
          let temporal = valores[j];
          valores[j] = valores[k];
          valores[k] = temporal;

          j -= salto;
        }
      }
    }
    salto = Math.floor(salto / 2);
  }
};

const printArray = (valores = []) => {
  for (let i = 0; i < valores.length; i++) {
    console.log(valores[i] + ", ");
  }
};

const valores = [15, 42, 3, 12, 4, 1, 8, 98, 32, 123, 42, 1, 32, 3, 45, 9];

console.log("Valores desordenados:");
printArray(valores);

shellSort(valores);

console.log("Valores ordenados:");
printArray(valores);
