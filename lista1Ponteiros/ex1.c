#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=10;
    float b = 5.8;
    char c = 'a';

    printf("a: %d, b: %f, c: %c\n", a, b, c);

    int *pontA = &a;
    float *pontB= &b;
    char *pontC = &c;
    
    *pontA = 12;
    *pontB = 12.6;
    *pontC = 'G';

    printf("a: %d, b: %f, c: %c\n", a, b, c);
    return 0;
}