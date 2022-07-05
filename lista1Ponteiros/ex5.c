#include <stdio.h>
#include <stdlib.h>

int main(){

    void compararValor(int *x, int *y);

    int a, b;
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);
    compararValor(&a, &b);
    printf("\ncomparando valores...\n");
    printf("Valor de A: %d\nValor de B: %d\n", a, b);

    return 0;
}

void compararValor(int *x, int *y){
    int valor;
    if(*y>*x){
        valor = *x;
        *x = *y;
        *y = valor;
    }
    printf("valor alterado!\n\n");
}