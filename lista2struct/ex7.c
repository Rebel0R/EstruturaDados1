#include <stdio.h>
#include <stdlib.h>

typedef struct Vetor{
    float x;
    float y;
    float z;
}vetor;

void somaVetor(vetor *beta){
    float a, b, c;

    a = beta->x + (beta+1)->x;
    b = beta->y + (beta+1)->y;
    c = beta->z + (beta+1)->z;

    printf("\tA soma dos vetores: vetor 1 + vetor 2 = (%f, %f, %f)\n", a, b, c);
}

int main(){

    vetor obj[2];

    printf("\tAtribua os valores dos vetores(x,y,z)\n");
    for(int i=0; i<2; i++){
        printf("VETOR %d\n", i+1);
        printf("Informe x: ");
        scanf("%f", &(obj+i)->x);
        printf("Informe y: ");
        scanf("%f", &(obj+i)->y);
        printf("Informe z: ");
        scanf("%f", &(obj+i)->z);
        printf("\n");
    }

    somaVetor(obj);

    return 0;
}