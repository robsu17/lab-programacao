#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Aluno {
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    srand(time(NULL));

    struct Aluno alunos[20];
    float media;

    for (int i = 0; i < 20; i++) {
        alunos[i].nota1 = ((double)rand() / RAND_MAX) * 10;
        alunos[i].nota2 = ((double)rand() / RAND_MAX) * 10;
        alunos[i].nota3 = ((double)rand() / RAND_MAX) * 10;
    }

    for (int i = 0; i < 20; i++) {
        int nota = 1;
        printf("Aluno %d:\n", i + 1);
        printf("Nota %d =  %.2f\n", nota, alunos[i].nota1);
        nota++;
        printf("Nota %d =  %.2f\n", nota, alunos[i].nota2);
        nota++;
        printf("Nota %d =  %.2f\n", nota, alunos[i].nota3);
        nota++;
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        printf("Media do aluno = %.2f\n", media);
        if (media >= 7)
            printf("Resultado = Aprovado\n");
        else
            printf("Resultado = Reprovado\n");

        printf("\n");
    }


    return 0;
}
