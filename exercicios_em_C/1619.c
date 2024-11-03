#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    // Vetor para armazenar os dias em cada mês
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < N; i++) {
        int ano1, mes1, dia1, ano2, mes2, dia2;

        // Lendo as duas datas
        scanf("%d-%d-%d %d-%d-%d", &ano1, &mes1, &dia1, &ano2, &mes2, &dia2);

        // Calculando os dias desde 01/01/1970 para a primeira data
        int dias1 = 0;
        for (int ano = 1970; ano < ano1; ano++) {
            // Verificando se o ano é bissexto
            if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
                dias1 += 366;
            } else {
                dias1 += 365;
            }
        }

        // Somando os dias dos meses completos do ano corrente para a primeira data
        for (int mes = 1; mes < mes1; mes++) {
            dias1 += diasMes[mes - 1];
            // Ajustando para ano bissexto em fevereiro
            if (mes == 2 && ((ano1 % 400 == 0) || (ano1 % 4 == 0 && ano1 % 100 != 0))) {
                dias1 += 1;
            }
        }

        // Somando os dias restantes do mês corrente para a primeira data
        dias1 += dia1;

        // Calculando os dias desde 01/01/1970 para a segunda data
        int dias2 = 0;
        for (int ano = 1970; ano < ano2; ano++) {
            // Verificando se o ano é bissexto
            if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
                dias2 += 366;
            } else {
                dias2 += 365;
            }
        }

        // Somando os dias dos meses completos do ano corrente para a segunda data
        for (int mes = 1; mes < mes2; mes++) {
            dias2 += diasMes[mes - 1];
            // Ajustando para ano bissexto em fevereiro
            if (mes == 2 && ((ano2 % 400 == 0) || (ano2 % 4 == 0 && ano2 % 100 != 0))) {
                dias2 += 1;
            }
        }

        // Somando os dias restantes do mês corrente para a segunda data
        dias2 += dia2;

        // Calculando a diferença absoluta entre os dias
        int diferenca = abs(dias1 - dias2);

        // Imprimindo o resultado
        printf("%d\n", diferenca);
    }

    return 0;
}

