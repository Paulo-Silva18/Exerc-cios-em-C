#include <stdio.h>

int main() {
    int N, i, ingresso;
    int teste = 1;

    while (1) {
        scanf("%d", &N);

        if (N == 0) {
            break;
        }

        for (i = 1; i <= N; i++) {
            scanf("%d", &ingresso);
            if (ingresso == i) {
                printf("Teste %d\n", teste);
                printf("%d\n\n", ingresso);
            }
        }
        teste++;
    }

    return 0;
}
