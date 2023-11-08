#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Candidato {
    double notaProvaEscrita;
    double notaProvaDidatica;
    double notaProvaTitulos;
    int idade;
};

struct Candidato melhorColocado(struct Candidato candidato[2]) {
    double somaDeTodasAsNotas[2];
    double soma;

    for (int i = 0; i < 2; ++i) {
        soma = 0;
        soma += candidato[i].notaProvaDidatica;
        soma += candidato[i].notaProvaEscrita;
        soma += candidato[i].notaProvaTitulos;
        somaDeTodasAsNotas[i] = soma;
    }

    if (somaDeTodasAsNotas[0] == somaDeTodasAsNotas[1]) {
        if (candidato[0].idade > candidato[1].idade) {
            return candidato[0];
        }
        return candidato[1];
    } else {
        if (somaDeTodasAsNotas[0] > somaDeTodasAsNotas[1]) {
            return candidato[0];
        }
        return candidato[1];
    }
}

struct Candidato* candidatoBemColocado(struct Candidato candidatos[], int tamanho) {
    struct Candidato* candidatoMaisBemColocado;
    double soma;
    double notaMaior = 0;

    for (int i = 0; i < tamanho; ++i) {
        soma = candidatos[i].notaProvaEscrita + candidatos[i].notaProvaTitulos + candidatos[i].notaProvaDidatica;
        if (soma > notaMaior) {
            notaMaior = soma;
            candidatoMaisBemColocado = &candidatos[i];
        }
    }

    return candidatoMaisBemColocado;
}

int main() {

    srand(time(NULL));

    struct Candidato candidatos[10];
    double somaDasNotas;

    for (int i = 0; i < 10; ++i) {
        candidatos[i].idade = 18 + (rand() % 42);
        candidatos[i].notaProvaTitulos = ((double)rand() / RAND_MAX) * 10.0;
        candidatos[i].notaProvaEscrita = ((double)rand() / RAND_MAX) * 10.0;
        candidatos[i].notaProvaDidatica = ((double)rand() / RAND_MAX) * 10.0;
    }

    for (int i = 0; i < 10; ++i) {
        somaDasNotas = candidatos[i].notaProvaDidatica + candidatos[i].notaProvaTitulos + candidatos[i].notaProvaEscrita;
        printf("Candidato %d:\n", i + 1);
        printf("Nota de Prova de titulos = %.2f\n", candidatos[i].notaProvaTitulos);
        printf("Nota de Prova Escrita = %.2f\n", candidatos[i].notaProvaEscrita);
        printf("Nota de Prova Didatica = %.2f\n", candidatos[i].notaProvaDidatica);
        printf("Soma das notas = %.2f\n", somaDasNotas);
        printf("Idade = %d\n", candidatos[i].idade);
        printf("\n");
    }

    struct Candidato* melhorCandidato = candidatoBemColocado(candidatos, 10);

    printf("Melhor candidato: \n");
    printf("Idade = %d\n", melhorCandidato->idade);
    printf("Nota de Prova de titulos = %.2f\n", melhorCandidato->notaProvaTitulos);
    printf("Nota de Prova Escrita = %.2f\n", melhorCandidato->notaProvaEscrita);
    printf("Nota de Prova Didatica = %.2f\n", melhorCandidato->notaProvaDidatica);



    return 0;
}