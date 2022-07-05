#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cadastro{
    char nome[10];
    int idade;
    char endereco[50];
}cadastro;


int main(){

    cadastro cad1;
    int tam;
    printf("\tCADASTRO DO USUÁRIO\n");
    printf("Informe seu nome: ");
    scanf("%s", (cad1.nome));
    //fgets(cad1.nome, 10, stdin);
    printf("Informe sua idade: ");
    scanf("%d", &(cad1.idade));
    printf("Informe seu endereço: ");
    setbuf(stdin, 0);
    scanf("%[^\n]", (cad1.endereco));
    //fgets((cad1.endereco), 50, stdin); //está lendo um pular linha

    printf("\tCADASTRO\n");
    printf("Nome: %s Idade: %d anos Endereço: %s Idade: %d\n", cad1.nome, cad1.idade, (cad1.endereco));

    
    return 0;
}