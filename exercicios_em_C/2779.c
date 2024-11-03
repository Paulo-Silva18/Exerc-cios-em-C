#include <stdio.h>

int main() {
    int N, M;

    // Lê o número total de figurinhas e o número de figurinhas compradas
    scanf("%d", &N);
    scanf("%d", &M);

    // Vetor para marcar as figurinhas compradas
    int figurinhas[N+1]; // Vetor com índice de 1 a N
    for (int i = 1; i <= N; i++) {
        figurinhas[i] = 0; // Inicializa todos os espaços como "não comprado"
    }

    // Lê as figurinhas compradas e marca no vetor
    for (int i = 0; i < M; i++) {
        int X;
        scanf("%d", &X);
        figurinhas[X] = 1; // Marca a figurinha como "comprada"
    }

    // Conta quantas figurinhas ainda estão faltando
    int faltando = 0;
    for (int i = 1; i <= N; i++) {
        if (figurinhas[i] == 0) { // Se a figurinha não foi comprada
            faltando++;
        }
    }

    // Exibe o número de figurinhas faltando
    printf("%d\n", faltando);

    return 0;
}
