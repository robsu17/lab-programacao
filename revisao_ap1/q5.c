#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void contadorCaractere(char minhaString[], char caractere);

int main () {

  char string[100];
  char caractere;

  scanf("%c", &caractere);
  scanf("%s", &string);
  
  contadorCaractere(string, caractere);

  return 0;
}

void contadorCaractere(char minhaString[], char caractere) {
  int i = 0;
  while (i < strlen(minhaString)) {
    if (minhaString[i] == caractere) {
      minhaString[i] = ' ';
    }
    i++;
  }

  for (i = 0; i < strlen(minhaString); i++) {
    printf("%c", minhaString[i]);
  }
}