#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Livro{
    char titulo[30];
    char autor [15];

}livro;

void buscaLivro(livro *li){
    char Livro[30];
    int tam, cont=0;
    printf("Qual livro deseja pesquisa?\n");
    setbuf(stdin, 0);
    scanf("%[^\n]", Livro);
    tam = strlen(Livro);

    for(int j=0; j<3; j++){
        for(int k=0; k<tam; k++){
            if(Livro[k]==((li+j)->titulo[k])){
                cont++;
            }
            if(cont == 3){
                printf("\n\tRESULTADOS ENCONTRADOS\n");
                printf("Título: %s     Autor: %s\n", (li+j)->titulo, (li+j)->autor);
                cont=0;
                j=j+1;
                k = 0;
            }
        }
        
    }
}

int main(){

    livro book[3];
    printf("\tCADASTRO DE LIVRO\n");
    for(int i=0; i<3; i++){
        printf("\t\tLIVRO %d\n", i+1);
        printf("Informe o título: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (book+i)->titulo);
        printf("Informe o autor: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (book+i)->autor);
        printf("\n");
    }
    buscaLivro(book);

    return 0;
}