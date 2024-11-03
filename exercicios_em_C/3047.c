#include <stdio.h>

int main() {
    int M, A, B;
    int idades[3]; // Vetor para armazenar as idades dos tr�s filhos

    // L� a idade de dona M�nica e as idades dos dois filhos conhecidos
    scanf("%d", &M);
    scanf("%d", &A);
    scanf("%d", &B);

    // Calcula a idade do terceiro filho
    int C = M - (A + B);

    // Armazena as idades dos filhos no vetor
    idades[0] = A;
    idades[1] = B;
    idades[2] = C;

    // Determina a maior idade usando um la�o de repeti��o
    int idade_mais_velho = idades[0];
    for (int i = 1; i < 3; i++) {
        if (idades[i] > idade_mais_velho) {
            idade_mais_velho = idades[i];
        }
    }

    // Imprime a idade do filho mais velho
    printf("%d\n", idade_mais_velho);

    return 0;
}
