#include <stdio.h>
#include <stdlib.h>

int main(){
    int somarDobroInteiros(int *x, int *y);
    int a, b, soma;
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);

    soma = somarDobroInteiros(&a, &b);

    printf("Valores dobrados\nValor de A: %d\nValor de B: %d\nSoma do dobro dos valores: %d", a, b, soma);

    return 0;
}

int somarDobroInteiros(int *x, int *y){
    int dobro;
    *x = *x * 2;
    *y = *y * 2;

    dobro = *x + *y;
    return dobro;
}