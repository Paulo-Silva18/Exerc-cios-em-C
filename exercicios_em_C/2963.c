#include <stdio.h>

int main() {
    int N;

    // Lê o número de candidatos
    scanf("%d", &N);

    // Lê os votos do primeiro candidato (Carlos)
    int votosCarlos;
    scanf("%d", &votosCarlos);

    // Variável para armazenar o maior número de votos entre os outros candidatos
    int maxOutros = votosCarlos;

    // Lê os votos dos outros candidatos e encontra o maior valor
    for (int i = 1; i < N; i++) {
        int votos;
        scanf("%d", &votos);

        // Atualiza o máximo se o candidato atual tiver mais votos
        if (votos > maxOutros) {
            maxOutros = votos;
        }
    }

    // Verifica se Carlos foi eleito
    if (votosCarlos >= maxOutros) {
        printf("S\n"); // Carlos foi eleito
    } else {
        printf("N\n"); // Carlos não foi eleito
    }

    return 0;
}
