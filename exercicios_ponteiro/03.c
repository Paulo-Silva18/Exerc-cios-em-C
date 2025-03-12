#include<stdio.h>

void parteInteiraEFracionaria(int a, float b){
    int i = a;
    float j = b;

    i = j;
    j = j - i;

    printf("%d\n", i);
    printf("%f", j);
}

int main() {
    int c;
    float d;

    scanf("%d", &c);
    scanf("%f", &d);

    parteInteiraEFracionaria(c, d);

    return 0;
}
