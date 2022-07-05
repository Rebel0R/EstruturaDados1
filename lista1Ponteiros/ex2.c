#include <stdio.h>
#include <stdlib.h>

int main(){
    //ex 2!!
    /*int a, b;
    //a = 10;
    //b = 11;
    int *p;

    printf("a: %p\nb: %p\n", &a, &b);
    if (&a > &b){
        p = &a;
        printf("A tem o maior end: %p\n", p);
    }else{
        p = &b;
        printf("B tem o maior end: %p\n", p);
    }*/

    //ex3!!
    int x, v, *p;

    printf("Informe o valor de X: ");
    scanf("%d", &x);
    printf("Informe o valor de V: ");
    scanf("%d", &v);
    
    if(&x>&v){
        p = &x;
         printf("X tem o maior end: %p\n", p);

    }else{
        p = &v;
         printf("V tem o maior end: %p\n", p);
    }
    return 0;
}