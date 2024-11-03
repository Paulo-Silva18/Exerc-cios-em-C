#include<stdio.h>

int main(){
    int cod1, qnt1, cod2, qnt2;
    double preco1, preco2, resultado;

    scanf("%d %d %lf", &cod1, &qnt1, &preco1);
    scanf("%d %d %lf", &cod2, &qnt2, &preco2);

    resultado = (qnt1 * preco1) + (qnt2 * preco2);

    printf("VALOR A PAGAR: R$ %.2lf\n", resultado);

    return 0;
}
