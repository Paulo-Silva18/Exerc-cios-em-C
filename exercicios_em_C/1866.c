#include <stdio.h>

int main() {
    int C;

    // Lê a quantidade de casos de teste
    scanf("%d", &C);

    // Vetor para armazenar os resultados de cada caso
    int resultados[C];

    // Para cada caso de teste
    for (int i = 0; i < C; i++) {
        int N;
        scanf("%d", &N);

        // Verifica se N é par ou ímpar e armazena o resultado correspondente
        if (N % 2 == 0) {
            resultados[i] = 0; // Se N é par, o resultado é 0
        } else {
            resultados[i] = 1; // Se N é ímpar, o resultado é 1
        }
    }

    // Imprime os resultados
    for (int i = 0; i < C; i++) {
        printf("%d\n", resultados[i]);
    }

    return 0;
}
