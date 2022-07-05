#include <stdio.h>
#include <stdlib.h>

int main(){

    void soma(int *x, int *y);
    /*
    ex 7
    int a=10, b=5;
    soma(&a, &b);
    printf("A: %d, B: %d\n", a, b);*/

    //ex8
    float vetor[8];
    for(int i=0; i<8; i++){
        printf("%d: %p\n", i+1, &*(vetor+i));
    }

    return 0;
}

void soma(int *x, int *y){
    *x = *x+*y;
}