#include <stdio.h>

int main() {
    int N, turma = 1;

    // L� o n�mero de alunos na turma
    while (scanf("%d", &N) && N != 0) {
        int codigos[1000], medias[1000];
        int maiorMedia = -1;

        // L� os dados dos alunos e encontra a maior m�dia
        for (int i = 0; i < N; i++) {
            scanf("%d %d", &codigos[i], &medias[i]);
            if (medias[i] > maiorMedia) {
                maiorMedia = medias[i];
            }
        }

        // Imprime o cabe�alho da turma
        printf("Turma %d\n", turma++);

        // Imprime os c�digos dos alunos com a maior m�dia
        for (int i = 0; i < N; i++) {
            if (medias[i] == maiorMedia) {
                printf("%d ", codigos[i]);
            }
        }
        printf("\n\n"); // Linha em branco ap�s cada turma
    }

    return 0;
}
