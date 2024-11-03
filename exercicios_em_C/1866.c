#include <stdio.h>

int main() {
    int C;

    // L� a quantidade de casos de teste
    scanf("%d", &C);

    // Vetor para armazenar os resultados de cada caso
    int resultados[C];

    // Para cada caso de teste
    for (int i = 0; i < C; i++) {
        int N;
        scanf("%d", &N);

        // Verifica se N � par ou �mpar e armazena o resultado correspondente
        if (N % 2 == 0) {
            resultados[i] = 0; // Se N � par, o resultado � 0
        } else {
            resultados[i] = 1; // Se N � �mpar, o resultado � 1
        }
    }

    // Imprime os resultados
    for (int i = 0; i < C; i++) {
        printf("%d\n", resultados[i]);
    }

    return 0;
}
