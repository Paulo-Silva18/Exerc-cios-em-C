#include <stdio.h>

int main() {
    int N, M;
    int notas[] = {2, 5, 10, 20, 50, 100}; // Valores das notas disponíveis
    int tamanho = 6; // Número de notas disponíveis

    // Loop até que a entrada seja N = 0 e M = 0
    while (1) {
        // Lê os valores de N e M
        scanf("%d %d", &N, &M);

        // Condição de parada
        if (N == 0 && M == 0) {
            break;
        }

        int troco = M - N;
        int possible = 0;

        // Verifica todas as combinações de duas notas para ver se é possível dar o troco exato
        for (int i = 0; i < tamanho; i++) {
            for (int j = i + 1; j < tamanho; j++) {
                if (notas[i] + notas[j] == troco) {
                    possible = 1;
                    break;
                }
            }
            if (possible) {
                break;
            }
        }

        // Imprime o resultado
        if (possible) {
            printf("possible\n");
        } else {
            printf("impossible\n");
        }
    }

    return 0;
}
