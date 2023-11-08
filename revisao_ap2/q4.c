#include <stdio.h>

struct Metricas {
    float acuracia;
    float precisao;
};

struct Metricas calcularMetricas(float m[2][2]) {
    struct Metricas resultado;

    float somaDaMatriz = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            somaDaMatriz += m[i][j];
        }
    }

    resultado.acuracia = (m[0][0] + m[1][1]) / (somaDaMatriz);
    resultado.precisao = (m[1][1]) / (m[1][0] + m[1][1]);

    return resultado;
}

int main() {

    float matriz[2][2] = {{5, 6}, {4.7, 10.5}};

    struct Metricas metricas = calcularMetricas(matriz);
    printf("Precisao = %.2f\n", metricas.precisao);
    printf("Acuracia = %.2f\n", metricas.acuracia);

    return 0;
}