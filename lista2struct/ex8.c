#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa{
    char nome[100];
    int tel;
    char endereco[200];
}pessoa;

void ordenaNome(pessoa *pe){
    int comp;
    char aux[100], palavra[3][100];

    for(int i=0; i<3; i++){
       strcpy(palavra[i], (pe+i)->nome);
    }

    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            comp = strcmp(palavra[i], palavra[j]);
            if(comp>0){
                strcpy(aux, palavra[i]);
                strcpy(palavra[i], palavra[j]);
                strcpy(palavra[j], aux);
            }
        }
    }
    
    for(int i=0; i<3; i++){
         printf("Nome: %s\n", palavra[i]);
    }
}

int main(){
    
    int size;
    pessoa p[3];

    printf("\tCADASTRO DE PESSOAS\n");
    for(int i=0; i<3; i++){
        printf("\t\tPESSOA %d\n", i+1);
        printf("Informe o nome: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (p+i)->nome);
        printf("Informe o telefone: ");
        scanf("%d", &((p+i)->tel));
        printf("Informe o endereco: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (p+i)->endereco);
        printf("\n");
    }

    printf("\tNOMES ORDENADOS\n");
    ordenaNome(p);

    //Mostra o tamanho do vetor de struct
    //size = sizeof(p)/sizeof(p[0]);
    //printf("\n\tTamanho da struct: %d\n", size);

}