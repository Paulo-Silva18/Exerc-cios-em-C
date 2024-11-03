#include <stdio.h>

int main() {
    int N;

    // L� o n�mero de candidatos
    scanf("%d", &N);

    // L� os votos do primeiro candidato (Carlos)
    int votosCarlos;
    scanf("%d", &votosCarlos);

    // Vari�vel para armazenar o maior n�mero de votos entre os outros candidatos
    int maxOutros = votosCarlos;

    // L� os votos dos outros candidatos e encontra o maior valor
    for (int i = 1; i < N; i++) {
        int votos;
        scanf("%d", &votos);

        // Atualiza o m�ximo se o candidato atual tiver mais votos
        if (votos > maxOutros) {
            maxOutros = votos;
        }
    }

    // Verifica se Carlos foi eleito
    if (votosCarlos >= maxOutros) {
        printf("S\n"); // Carlos foi eleito
    } else {
        printf("N\n"); // Carlos n�o foi eleito
    }

    return 0;
}
