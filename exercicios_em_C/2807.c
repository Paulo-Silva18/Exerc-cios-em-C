#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Declara o vetor para armazenar a sequência
    int iccanobif[N];

    // Inicializa os dois últimos termos da sequência como 1
    iccanobif[N - 1] = 1;
    if (N > 1) {
        iccanobif[N - 2] = 1;
    }

    // Preenche o vetor de trás para frente
    for (int i = N - 3; i >= 0; i--) {
        iccanobif[i] = iccanobif[i + 1] + iccanobif[i + 2];
    }

    // Imprime a sequência
    for (int i = 0; i < N; i++) {
        printf("%d", iccanobif[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
