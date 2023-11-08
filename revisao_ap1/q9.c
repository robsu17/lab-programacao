#include <stdio.h>

int numeroPrimo(int n) {
  int cont = 0, i;
  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      cont++;
    }
  }
  if (cont == 2) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int numero;

  printf("Digite um numero para saber se eh primo: ");
  scanf("%d", &numero);

  printf("Numero primo (1 - sim, 0 - nao): %d", numeroPrimo(numero));

  return 0;
}

