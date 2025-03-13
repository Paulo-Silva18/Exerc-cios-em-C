#include<stdio.h>

void funcao(int v[], int t, int* mi, int* ma){
    *mi = v[0];
    *ma = v[0];
    for (int i = 0; i < t; i++){
        if (v[i] < *mi) *mi = v[i];
        if (v[i] < *ma) *ma = v[i];
    }
}

int main(){
    int v[] = { 5, 3, 1, 4, 2, 6};
    int mi, ma;

    funcao(v, 6, &mi, &ma);
    printf("%d %d\n", mi, ma);
    return 0;
}
