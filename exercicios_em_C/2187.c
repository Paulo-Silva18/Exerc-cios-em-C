#include<stdio.h>

int main(){
    int v, n=1, i, j, k, l;

    while(scanf("%d", &v) && v > 0){
        i = v / 50;
        v %= 50;

        j = v / 10;
        v %= 10;

        k = v / 5;
        v %= 5;

        l = v;

        printf("Teste %d\n", n);
        printf("%d %d %d %d\n\n", i, j, k, l);
        n++;
    }

    return 0;
}
