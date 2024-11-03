#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main() {
    float r;
    double resultado;

    scanf("%f", &r);
    resultado = (4/3.0) * PI * pow(r, 3);
    printf("VOLUME = %.3lf\n", resultado);


    return 0;
}
