#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TENTATIVAS 10

int main() {
    srand(time(NULL));

    int jogada, contator_tentativas = 1;
    int numero_aleatorio = rand() % 100 + 1;
    
    while (contator_tentativas <= TENTATIVAS) {
        printf("Digite um numero entre 1 e 100: ");
        scanf("%d", &jogada);
        if (jogada > numero_aleatorio) {
            printf("Numero eh menor\n");
            contator_tentativas++;
        } else if (jogada < numero_aleatorio) {
            printf("Numero eh maior\n");
            contator_tentativas++;
        } else {
            if (contator_tentativas == 1) {
                printf("\nParabens voce acertou de primeira\n");
            } else {
                printf("\nParabens voce acertou o numero em %d tentativas\n", contator_tentativas);
            }
            break;
        }
        if (contator_tentativas == 10) {
            printf("\nInfelizmente voce atingiu o limite de tentativas\n");
        }
    }
    
    return 0;
}
