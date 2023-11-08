#include <stdio.h>

void numerosPrimos(int n);

int main() {

  int numero;

  printf("Quantos numeros primos voce quer?");
  scanf("%d", &numero);

  numerosPrimos(numero);

  return 0;
}

void numerosPrimos(int n) {
  int i;
  int contador_primo;
  int contador = 0;
  int aux = 1;
  
  while (contador < n) {
    contador_primo = 0;
    for (i = 1; i <= aux; i++) {
      if (aux % i == 0) {
        contador_primo++;
      }
    }
    if (contador_primo == 2) {
      printf("%d ", aux);
      contador++;
    }
    aux++;
  }
}