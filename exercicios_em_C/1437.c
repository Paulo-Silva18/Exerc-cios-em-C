#include <stdio.h>

int main() {
    int N;
    int comando, pos;

    while (1) {
        scanf("%d", &N);

        if (N == 0) {
            break;
        }

        pos = 0;

        for (int i = 0; i < N; i++) {
            scanf(" %c", &comando);

            if (comando == 'D') {
                pos = (pos + 1) % 4;
            } else if (comando == 'E') {
                pos = (pos + 3) % 4;
            }
        }

        if (pos == 0) {
            printf("N\n");
        } else if (pos == 1) {
            printf("L\n");
        } else if (pos == 2) {
            printf("S\n");
        } else if (pos == 3) {
            printf("O\n");
        }
    }

    return 0;
}
