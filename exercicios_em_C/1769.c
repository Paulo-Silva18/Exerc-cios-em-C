#include <stdio.h>

int main() {
    int digitos[11];

    // Lê o CPF no formato d1d2d3.d4d5d6.d7d8d9-d10d11
    while (scanf("%1d%1d%1d.%1d%1d%1d.%1d%1d%1d-%1d%1d",
                 &digitos[0], &digitos[1], &digitos[2],
                 &digitos[3], &digitos[4], &digitos[5],
                 &digitos[6], &digitos[7], &digitos[8],
                 &digitos[9], &digitos[10]) == 11) {

        // Calcula o primeiro dígito verificador (b1)
        int soma_b1 = 0;
        for (int i = 0; i < 9; i++) {
            soma_b1 += digitos[i] * (i + 1);
        }
        int b1 = soma_b1 % 11;
        if (b1 == 10) {
            b1 = 0;
        }

        // Calcula o segundo dígito verificador (b2)
        int soma_b2 = 0;
        for (int i = 0; i < 9; i++) {
            soma_b2 += digitos[i] * (9 - i);
        }
        int b2 = soma_b2 % 11;
        if (b2 == 10) {
            b2 = 0;
        }

        // Verifica se os dígitos calculados correspondem aos dígitos fornecidos
        if (b1 == digitos[9] && b2 == digitos[10]) {
            printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }
    }

    return 0;
}
