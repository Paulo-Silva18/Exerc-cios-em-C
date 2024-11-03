#include <stdio.h>

int main() {
    int numeros[2]; // Vetor para armazenar os números A e B

    // Lê os dois valores e os armazena no vetor
    for (int i = 0; i < 2; i++) {
        scanf("%d", &numeros[i]);
    }

    // Verifica se são múltiplos entre si
    if ((numeros[0] % numeros[1] == 0) || (numeros[1] % numeros[0] == 0)) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}
