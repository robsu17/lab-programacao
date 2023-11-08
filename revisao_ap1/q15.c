#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {
  srand(time(NULL));
  int matriz[TAM][TAM], soma= 0;
  
  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM; j++) {
      matriz[i][j] = rand() % 10;
    }
  }
  
  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  
  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM; j++) {
      if (i - j >= 1 && i -j < 5) {
        soma += matriz[i][j];
      }
    }
  }
  
  printf("Soma = %d\n", soma);
    
  return 0;
}