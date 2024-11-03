#include <stdio.h>

int main() {
    int N, turma = 1;

    // Lê o número de alunos na turma
    while (scanf("%d", &N) && N != 0) {
        int codigos[1000], medias[1000];
        int maiorMedia = -1;

        // Lê os dados dos alunos e encontra a maior média
        for (int i = 0; i < N; i++) {
            scanf("%d %d", &codigos[i], &medias[i]);
            if (medias[i] > maiorMedia) {
                maiorMedia = medias[i];
            }
        }

        // Imprime o cabeçalho da turma
        printf("Turma %d\n", turma++);

        // Imprime os códigos dos alunos com a maior média
        for (int i = 0; i < N; i++) {
            if (medias[i] == maiorMedia) {
                printf("%d ", codigos[i]);
            }
        }
        printf("\n\n"); // Linha em branco após cada turma
    }

    return 0;
}
