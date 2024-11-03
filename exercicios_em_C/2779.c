#include <stdio.h>

int main() {
    int N, M;

    // L� o n�mero total de figurinhas e o n�mero de figurinhas compradas
    scanf("%d", &N);
    scanf("%d", &M);

    // Vetor para marcar as figurinhas compradas
    int figurinhas[N+1]; // Vetor com �ndice de 1 a N
    for (int i = 1; i <= N; i++) {
        figurinhas[i] = 0; // Inicializa todos os espa�os como "n�o comprado"
    }

    // L� as figurinhas compradas e marca no vetor
    for (int i = 0; i < M; i++) {
        int X;
        scanf("%d", &X);
        figurinhas[X] = 1; // Marca a figurinha como "comprada"
    }

    // Conta quantas figurinhas ainda est�o faltando
    int faltando = 0;
    for (int i = 1; i <= N; i++) {
        if (figurinhas[i] == 0) { // Se a figurinha n�o foi comprada
            faltando++;
        }
    }

    // Exibe o n�mero de figurinhas faltando
    printf("%d\n", faltando);

    return 0;
}
