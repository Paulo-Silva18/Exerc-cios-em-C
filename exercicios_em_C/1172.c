#include <stdio.h>

int main() {
    int X[10];

    // Leitura dos valores para o vetor X
    for (int i = 0; i < 10; i++) {
        scanf("%d", &X[i]);

        // Validação: se o valor for zero ou negativo, substitua por 1
        if (X[i] <= 0) {
            X[i] = 1;
        }
    }

    // Impressão do vetor modificado
    for (int i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;
}
