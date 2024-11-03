#include <stdio.h>

int main() {
    int N;

    // Leitura dos casos de teste até o final do arquivo
    while (scanf("%d", &N) != EOF) {
        int votos[N]; // Vetor para armazenar os votos
        int favoraveis = 0;

        // Leitura dos votos e contagem dos votos favoráveis ao impeachment
        for (int i = 0; i < N; i++) {
            scanf("%d", &votos[i]);
            if (votos[i] == 1) {
                favoraveis++;
            }
        }

        // Verifica se os votos favoráveis são pelo menos 2/3 do total
        if (favoraveis >= (2 * N + 2) / 3) {  // Evita arredondamento no cálculo de dois terços
            printf("impeachment\n");
        } else {
            printf("acusacao arquivada\n");
        }
    }

    return 0;
}
