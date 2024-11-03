#include<stdio.h>

int main(){
    float a, b, PESOA = 3.5, PESOB = 7.5, resultado, divisao;

    scanf("%f", &a);
    scanf("%f", &b);

    resultado = (a * PESOA) + (b * PESOB);
    divisao = resultado / 11;

    printf("MEDIA = %.5f\n", divisao);

    return 0;
}
