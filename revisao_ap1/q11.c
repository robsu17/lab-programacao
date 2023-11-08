#include <stdio.h>
#include <string.h>

void imprimePoltronas();

int main() {

  int poltrona;
  int poltrona_vetor[44];
  char nome_passageiro[30];
  char passageiros[44][30];

  imprimePoltronas();

  for (int i = 0; i < 44; i++) {
    strcpy(passageiros[i], "----");
  }

  for (int i = 0; i < 44; i++) {
    poltrona_vetor[i] = i;
  }

  while (1) {
    printf("\nEscolha uma poltrona: ");
    scanf("%d", &poltrona);
    
    if (poltrona >= 1 && poltrona <= 44) {
      printf("\nPoltrona: %d\n", poltrona);
      if (strcmp(passageiros[poltrona - 1], "----") != 1) {
        printf("Digite seu nome: ");
        scanf("%s", &nome_passageiro);
        strcpy(passageiros[poltrona - 1], nome_passageiro);
      } else {
        printf("Poltrona indisponivel!\n");
      }
    } else {
      printf("\nPoltrona Passageiro\n");
      for (int i = 0; i < 44; i++) {
        printf("%d \t %s\n", poltrona_vetor[i] + 1, passageiros[i]);
      }
      break;
    }
  }

  return 0;
}

void imprimePoltronas() {
  int poltronas[4][11];
  int contador = 1;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 11; j++) {
      poltronas[i][j] = contador;
      contador++; 
    }
  } 
  
  printf("===Companhia de onibus Deus te leve===\n");
  printf(" =================================\n");
  for (int i = 0; i < 4; i++) {
    printf("|");
    for (int j = 0; j < 11; j++) {
      if ((poltronas[i][j] / 10) == 0) {
        printf("0%d ", poltronas[i][j]);
      } else {
        printf("%d ", poltronas[i][j]);
      }
    }
    printf("|");
    printf("\n");
  } 
  printf(" =================================\n");
}
