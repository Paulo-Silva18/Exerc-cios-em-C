#include <stdio.h>

int main() {
    int n; // Número de cartas
    scanf("%d", &n);

    int joao[2], maria[2], comum[8]; // Arrays para as cartas
    scanf("%d %d", &joao[0], &joao[1]);
    scanf("%d %d", &maria[0], &maria[1]);

    for (int i = 0; i < n; i++) {
        scanf("%d", &comum[i]);
    }

    // Cálculo da soma das cartas de João
    int somaJoao = 0;
    for (int i = 0; i < 2; i++) {
        somaJoao += (joao[i] < 10) ? joao[i] : 10;
    }
    for (int i = 0; i < n; i++) {
        somaJoao += (comum[i] < 10) ? comum[i] : 10;
    }

    // Cálculo da soma das cartas de Maria
    int somaMaria = 0;
    for (int i = 0; i < 2; i++) {
        somaMaria += (maria[i] < 10) ? maria[i] : 10;
    }
    for (int i = 0; i < n; i++) {
        somaMaria += (comum[i] < 10) ? comum[i] : 10;
    }

    // Determinação das cartas disponíveis
    int contador[14] = {0}; // Contador para as cartas de 1 a 13
    contador[joao[0]]++;
    contador[joao[1]]++;
    contador[maria[0]]++;
    contador[maria[1]]++;

    for (int i = 0; i < n; i++) {
        contador[comum[i]]++;
    }

    int cartasDisponiveis[13];
    int numCartasDisponiveis = 0;
    for (int i = 1; i <= 13; i++) {
        if (contador[i] < 4) {
            cartasDisponiveis[numCartasDisponiveis++] = i; // Adiciona carta se ainda estiver disponível
        }
    }

    // Verificação da menor carta que permite a vitória de Maria
    int carta = -1;
    for (int i = numCartasDisponiveis - 1; i >= 0; i--) {
        int c = cartasDisponiveis[i];
        int valorCarta = (c < 10) ? c : 10; // Calcula o valor da carta

        if (somaMaria + valorCarta == 23 ||
            (somaMaria + valorCarta < 23 && somaJoao + valorCarta > 23)) {
            carta = c;
        }
    }

    printf("%d\n", carta);

    return 0;
}
