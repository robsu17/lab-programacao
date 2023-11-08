#include <stdio.h>

struct Aluno {
    unsigned int matricula: 14;
    unsigned int sexo: 1;
    unsigned int rendimento: 7;
    unsigned int primeiraVez: 1;
};

int main() {

    struct Aluno aluno;
    size_t tamanho = sizeof(aluno);
    printf("Tamanho da estrutura: %lu bytes\n", tamanho);

    return 0;
}
