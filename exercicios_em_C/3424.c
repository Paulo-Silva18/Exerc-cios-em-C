#include <stdio.h>

int main() {
    int N;
    char s[100001]; // Array para armazenar at� 100.000 caracteres

    // Leitura do tamanho e dos caracteres
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf(" %c", &s[i]);
    }

    int count_a = 0; // Contador para o n�mero de caracteres 'a' em trechos mon�tonos n�o-triviais
    int i = 0;

    // Percorrer o vetor para encontrar trechos mon�tonos maximais
    while (i < N) {
        char current_char = s[i];
        int length = 1; // Contador para o comprimento do trecho atual

        // Contar o comprimento do trecho mon�tono
        while (i + 1 < N && s[i + 1] == current_char) {
            i++;
            length++;
        }

        // Verificar se o trecho � n�o-trivial (comprimento >= 2)
        if (length >= 2 && current_char == 'a') {
            count_a += length; // Incrementar o contador com o comprimento do trecho de 'a'
        }

        i++; // Avan�ar para o pr�ximo caractere
    }

    // Imprimir o resultado
    printf("%d\n", count_a);

    return 0;
}
