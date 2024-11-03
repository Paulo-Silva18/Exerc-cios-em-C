#include<stdio.h>

int main() {
    int l, r;

    while(scanf("%d %d", &l, &r) && l > 0 && r > 0) {
        int soma =  l + r;
        printf("%d\n", soma);
    }


    return 0;
}
