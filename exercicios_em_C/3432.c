#include <stdio.h>

int main() {
    int N[8]; // Vetor para armazenar os 8 n�meros lidos
    int leituraComSucesso = 1; // Vari�vel para indicar se todos os bits foram lidos com sucesso

    // Leitura dos 8 n�meros
    for (int i = 0; i < 8; i++) {
        scanf("%d", &N[i]);
        // Verificar se algum n�mero � 9
        if (N[i] == 9) {
            leituraComSucesso = 0; // Indicar falha na leitura
        }
    }

    // Imprimir "S" se todos os bits foram lidos com sucesso, caso contr�rio "F"
    if (leituraComSucesso) {
        printf("S\n");
    } else {
        printf("F\n");
    }

    return 0;
}
