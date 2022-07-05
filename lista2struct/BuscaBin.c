#include <stdio.h>
#include <stdlib.h>

typedef struct TRegistro{
    int chave;
    char letra;
}TRegistro;

void guardaRegistro (TRegistro *x, int tam){
    for(int i=0; i<tam; i++){
        printf("\tREGISTRO %d\n", i+1);
        printf("Informe a chave: ");
        scanf("%d", &(x+i)->chave);
        printf("Informe a letra: ");
        setbuf(stdin, 0);
        scanf("%c", &(x+i)->letra);
        printf("\n");
    }
}

int buscaBinaria(TRegistro *v, int ini, int fim, int k){
    //caso base
    if(ini>fim){
        return -1;
    }
    //encontrar o meio
    int meio = (ini+fim)/2;
    //vetor unitário => meio
    if((v+meio)->chave == k){
        return meio;
    }
    //busca no começo antes do meio
    if(k<(v+meio)->chave){
        return buscaBinaria(v, ini, meio-1, k);
    } else{ //busca no fim depois do meio
        return buscaBinaria(v, meio+1, fim, k);
    } 
}

int main(){
    int num, resultado;
    
    printf("Informe o número de registros: ");
    scanf("%d", &num);
   
    TRegistro *reg = (TRegistro *) malloc(num*sizeof(TRegistro));
   
    if(reg == NULL){
        printf("\tSEM ESPAÇO\n");
        return 0;
    }

    guardaRegistro(reg, num);
    resultado = buscaBinaria(reg, 0, num-1, 3);

    printf("Resultado: %d\n", resultado);

    return 0;
}