#include <stdio.h>

int main() {
    int dia, dias, anos, meses, anosTotal, mesesTotal;

    scanf("%d", &dia);
    anosTotal = dia/365;
    anos = dia % 365;
    mesesTotal = anos/30;
    meses = anos % 30;
    dias = meses;

    printf("%d ano(s)\n", anosTotal);
    printf("%d mes(es)\n", mesesTotal);
    printf("%d dia(s)\n", dias);

    return 0;
}
