#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // L� o n�mero de "Ho" que devem ser falados

    for (int i = 0; i < N; i++) {
        if (i == N - 1) {  // �ltima posi��o
            printf("Ho!");
        } else {
            printf("Ho ");
        }
    }

    printf("\n");  // Quebra de linha final
    return 0;
}
