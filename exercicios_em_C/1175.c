#include <stdio.h>

int main() {
    int N[20];

    // Leitura dos valores para o vetor N
    for (int i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }

    // Troca dos elementos: o primeiro com o último, o segundo com o penúltimo, e assim por diante
    for (int i = 0; i < 10; i++) {
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    // Impressão do vetor modificado
    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
