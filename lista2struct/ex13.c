#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Ingrediente{
    char nomeIg[20];
    float quant;
}ingrediente;

typedef struct Receita{
    char nomeRec[30];
    int quantIg;
    ingrediente ig[30];
}receita;

void cadastrarIgrediente(int cont, receita *y, int tam){
    printf("\n\t--> CADASTRANDO IGREDIENTE\n ");
    for(int j=0; j<tam; j++){
        printf("\t\t-- INGREDIENTE %d\n", j+1);
        printf("--Nome do Ingrediente: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (y[cont].ig[j].nomeIg));
        printf("--Quantidade do Ingrediente: ");
        scanf("%f", &(y[cont].ig[j].quant));
        printf("\n");  
    }

}

void cadastrarReceita(receita *x){
    printf("\t--- LIVRO DE RECEITAS---\n");
    for(int i=0; i<3; i++){

        printf("\t ***RECEITA %d\n", i+1);
        printf("- Nome: ");
        setbuf(stdin,0);
        scanf("%[^\n]", (x+i)->nomeRec);
        printf("- Quantidade de ingredientes: ");
        scanf("%d", &(x+i)->quantIg);
        printf("\n");
        cadastrarIgrediente(i, x, (x+i)->quantIg);
    }
    printf("\n");
}

void buscaReceita(receita *receita, char *busca){
    int var, cont=0;
    for(int i=0; i<3; i++){
        var = strcmp((receita+i)->nomeRec, busca);
        if(var == 0){
            int tam = (receita+i)->quantIg;
            printf("\t\tBUSCA ENCONTRADA!\n");
            printf("- Receita:%s  N° de Ingredientes:%d\n", (receita+i)->nomeRec, (receita+i)->quantIg);
            for(int j=0; j<tam; j++){
                printf("\t- Igrediente: %s   Quantidade: %.1f un\n", receita[i].ig[j].nomeIg, receita[i].ig[j].quant);
                printf("\n");
            }
            printf("\n");
            cont ++;
        }
    }
    if(cont == 0){
        printf("\n\tNENHUM RESULTADO ENCONTRADO!\n");
    }
}


int main(){
    char pesquisa[30];
    receita rec[3];
    cadastrarReceita(rec);

    do{
        printf("\tBANCO DE PESQUISA DE RECEITAS\n");
        printf("- Qual receita deseja pesquisar? ");
        setbuf(stdin, 0);
        scanf("%[^\n]", pesquisa);
        if(pesquisa[0] != '\0'){
            buscaReceita(rec, pesquisa);
        }
    }while(pesquisa[0] != '\0 ');


    return 0;
}