#include <stdio.h>

int main() {
    int V, N;

    // L� o n�mero de voltas (V) e o n�mero de placas (N)
    scanf("%d %d", &V, &N);

    // Calcula o total de placas percorridas
    int total_placas = V * N;

    // Calcula e imprime as placas necess�rias para atingir cada porcentagem
    for (int i = 1; i <= 9; i++) {
        int placas_necessarias = (total_placas * i * 10 + 99) / 100;
        printf("%d ", placas_necessarias);
    }

    printf("\n");
    return 0;
}

