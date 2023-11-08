#include <stdio.h>

#define TAM 15

void preencheVetor(int vetorA[], int vetorB[]);

int main() {
  int vetA[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  int vetB[TAM];

  preencheVetor(vetA, vetB);

  return 0;
}

void preencheVetor(int vetorA[], int vetorB[]) {
  int i, j;
  int indice_cont = 0;
  for (i = 0; i < TAM; i++) {
    int contador_primo = 0;
    for (j = 1; j <= vetorA[i]; j++) {
      if (vetorA[i] % j == 0) {
        contador_primo++;
      }
    }
    if (contador_primo == 2) {
      vetorB[indice_cont] = vetorA[i];
      indice_cont++;
    }
  }
  
  for (i = 0; i < indice_cont; i++) {
    printf("%d ", vetorB[i]);
  }
}
