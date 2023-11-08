#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contadorCaractere(char minhaString[], char caractere);

int main () {

  char string[100];
  char caractere;

  scanf("%c", &caractere);
  scanf("%s", &string);

  printf("%c se repete, na string %s, %d vezes", caractere, string, contadorCaractere(string, caractere));

  return 0;
}

int contadorCaractere(char minhaString[], char caractere) {
  int contador = 0;
  int i = 0;
  while (i < strlen(minhaString)) {
    if (minhaString[i] == caractere) {
      contador++;
    }
    i++;
  }
  return contador;
}