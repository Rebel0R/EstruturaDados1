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

int buscaSequencial(TRegistro v[], int ini, int fim, int k){
    //caso base, onde o vetor é vazio
    if(ini > fim){
        return -1;
    }
    //vetor unitário
    if(v[ini].chave == k){
        return ini;
    }
    //ini<fim
    return buscaSequencial(v, ini+1, fim, k);
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
    resultado = buscaSequencial(reg, 0, 2, 12);

    printf("Resultado: %d\n", resultado);

    return 0;
}