#include <stdio.h>
#include <stdlib.h>

int main(){
    void trocaValor(int *x, int *y);

    int a, b;
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);

    printf("\ntrocando valores...\n");
    trocaValor(&a, &b);

    printf("Valor de A: %d\nValor de B: %d\n", a, b);

    return 0;
}

void trocaValor(int *x, int *y){
    int valor;
    valor = *x;
    *x = *y;
    *y = valor;
    printf("valores trocados!\n\n");
}