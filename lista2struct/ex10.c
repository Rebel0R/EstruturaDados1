#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Carro{
    char marca[15];
    int ano;
    float preco;
}carro;

int main(){

    carro carro1[3];
    float p;

    printf("\tCADASTRO CARRO\n");
    for(int i=0; i<3; i++){
        printf("\t\tCARRO: %d\n", i+1);
        printf("- Marca: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (carro1+i)->marca);
        printf("- Ano: ");
        scanf("%d", &(carro1+i)->ano);
        printf("- Preço R$: ");
        scanf("%f", &(carro1+i)->preco);
        printf("\n");
    }

    do{
        printf("Informe o preço que deseja pesquisa: ");
        scanf("%f", &p);
        for(int i=0; i<3; i++){
            if(((carro1+i)->preco)<p){
                printf("\tPreços inferiores à: R$ %.2f\n", p);
                printf("Marca: %s  Ano: %d  Preço: R$ %.2f\n", (carro1+i)->marca, (carro1+i)->ano, (carro1+i)->preco);
            }
            printf("\n");
        }

    }while(p>0);

    return 0;
}
