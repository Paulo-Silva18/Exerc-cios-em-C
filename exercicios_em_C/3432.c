#include <stdio.h>

int main() {
    int N[8]; // Vetor para armazenar os 8 números lidos
    int leituraComSucesso = 1; // Variável para indicar se todos os bits foram lidos com sucesso

    // Leitura dos 8 números
    for (int i = 0; i < 8; i++) {
        scanf("%d", &N[i]);
        // Verificar se algum número é 9
        if (N[i] == 9) {
            leituraComSucesso = 0; // Indicar falha na leitura
        }
    }

    // Imprimir "S" se todos os bits foram lidos com sucesso, caso contrário "F"
    if (leituraComSucesso) {
        printf("S\n");
    } else {
        printf("F\n");
    }

    return 0;
}
