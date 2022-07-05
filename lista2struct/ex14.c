#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Endereco{
    char rua[30];
    char cidade[20];
    char uf[2];
}endereco;

typedef struct Cadastro{
    char nome[50];
    int idade;
    int rg;
    char sexo; //M ou F
    float salario;
    endereco end;

}cadastro;


void cadastroTotal(cadastro *c){
    printf("\t\t =>CADASTRO DE PESSOA\n");
    for(int i=0; i<3; i++){
        printf("\tPESSOA %d...\n", i+1);
        printf("-Nome: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (c+i)->nome);
        printf("-RG: ");
        scanf("%d", &(c+i)->rg);
        printf("-Idade: ");
        scanf("%d", &(c+i)->idade);
        printf("-Sexo: ");
        setbuf(stdin, 0);
        scanf("%c", &(c+i)->sexo);
        printf("-Salário: R$ ");
        scanf("%f", &(c+i)->salario);
        printf("\tCADASTRO DE ENDEREÇO\n");
        printf("-Rua: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (c+i)->end.rua);
        printf("-Cidade: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (c+i)->end.cidade);
        printf("-UF: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (c+i)->end.uf);
        printf("\n");
    }
}

void maiorIdade(cadastro *c){
    int idade = 0;
    for(int i=0; i<3; i++){
        if ((c+i)->idade>idade){
            idade = (c+i)->idade;
        }
    }
    for(int j=0; j<3; j++){
        if(((c+j)->idade)==idade){
            printf("\tMAIOR IDADE\n");
            printf("Nome: %s   Idade: %d\n", (c+j)->nome, (c+j)->idade);
        }
    }
}

void sexoMasculino(cadastro *c){
    char x = 'M';
    for(int i=0; i<3; i++){
        if((c+i)->sexo == x){
            printf("Nome: %s   Sexo: %c\n", (c+i)->nome, (c+i)->sexo);
        }
    }
}

void buscaSalario(cadastro *c){
    int cont=0;
    for(int i=0; i<3; i++){
        if((c+i)->salario > 1000){
            printf("Nome: %s   Salário: R$%.2f\n", (c+i)->nome, (c+i)->salario);
            cont++;
        }
    }
    if(cont == 0){
        printf("Nenhum usuário apresenta salário maior que R$ 1000.00\n");
    }
}

void imprimirCliente(cadastro *c, int id){
    for(int i=0; i<3; i++){
        if((c+i)->rg == id){
            printf("Nome: %s  Idade: %d  RG: %d  Sexo: %c  Salário: R$%.2f\n", (c+i)->nome, (c+i)->idade, (c+i)->rg, (c+i)->sexo, (c+i)->salario);
            printf("Rua: %s  Cidade: %s  UF: %s\n", (c+i)->end.rua, (c+i)->end.cidade, (c+i)->end.uf);
        }
    }
}

int main(){
    cadastro cad[3];
    int opcao;

    do{
        printf("\t\t...MENU DE CADASTRO...\n");
        printf("1- Cadastrar clientes\n2- Encontrar maior idade\n3- Encontrar sexo Masculino\n4- Encontrar salário > 1000\n5-Imprime cliente específico\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("\t)=> Opção Cadastrar Cliente escolhida\n");
                cadastroTotal(cad);
                printf("\n");
                break;
            
            case 2:
                printf("\t)=> Opção Encontrar Maior Idade\n");
                maiorIdade(cad);
                printf("\n");
                break;

            case 3:
                printf("\t)=> Opção Encontrar Sexo Masculino\n");
                sexoMasculino(cad);
                printf("\n");
                break;

            case 4:
                printf("\t)=> Opção Encontrar Maior Salário\n");
                buscaSalario(cad);
                printf("\n");
                break;

            case 5:
                printf("\t)=> Opção Imprimir Usuário Específico\n");
                int x;
                printf("Digite o RG que deseja pesquisar: ");
                scanf("%d", &x);
                imprimirCliente(cad, x);
                printf("\n");
                break;
        }

    }while(opcao!=0);




    return 0;
}