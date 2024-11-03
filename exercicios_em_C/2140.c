#include <stdio.h>

int main() {
    int N, M;
    int notas[] = {2, 5, 10, 20, 50, 100}; // Valores das notas dispon�veis
    int tamanho = 6; // N�mero de notas dispon�veis

    // Loop at� que a entrada seja N = 0 e M = 0
    while (1) {
        // L� os valores de N e M
        scanf("%d %d", &N, &M);

        // Condi��o de parada
        if (N == 0 && M == 0) {
            break;
        }

        int troco = M - N;
        int possible = 0;

        // Verifica todas as combina��es de duas notas para ver se � poss�vel dar o troco exato
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
