#include <stdio.h>

int main() {
    int valores[3]; // Vetor para armazenar os valores C, P e F

    // L� os valores para o vetor
    for (int i = 0; i < 3; i++) {
        scanf("%d", &valores[i]);
    }

    // Calcula a quantidade de folhas necess�rias
    int folhas_necessarias = valores[0] * valores[2];

    // Verifica se a quantidade comprada � suficiente
    if (folhas_necessarias <= valores[1]) {
        printf("S\n"); // Suficiente
    } else {
        printf("N\n"); // N�o suficiente
    }

    return 0;
}
