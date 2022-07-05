#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Funcionario{
    char nome[100];
    int idade;
    char sexo; //M ou F
    char cpf[10];
    char cargo[50];
    float salario;
    int dia;
    char mes[10];
    int ano;
    int codigo;
}funcionario;

void removePulaLinha(char *arg){
    int tam = strlen(arg);
    //int num = tam;
    for(int i=0; i<tam; i++){
        if(*(arg +i)=='\n'){
            for(int j=i; j<tam; j++){
                *(arg+j) = *(arg+j+1);
            }
            tam--;
        }
    }
}

int main(){
    funcionario fun1;
    printf("\t--CADASTRO FUNCIONÁRIO--\n");
    printf("Informe o nome e sobrenome: ");
    fgets(fun1.nome, 100, stdin);
    printf("Idade: ");
    scanf("%d", &(fun1.idade));
    printf("Sexo (M ou F): ");
    setbuf(stdin, 0);
    scanf("%c", &(fun1.sexo));
    printf("CPF: ");
    scanf("%s", fun1.cpf);
    printf("Cargo: ");
    setbuf(stdin, 0);
    scanf("%s", fun1.cargo);
    printf("Salario R$: ");
    scanf("%f", &(fun1.salario));
    printf("Informe a data de nascimento\n-Dia: ");
    scanf("%d", &(fun1.dia));
    printf("-Mes: ");
    setbuf(stdin, 0);
    scanf("%s", fun1.mes);
    printf("-Ano: ");
    scanf("%d", &(fun1.ano));
    do{
      printf("Informe o código de cadastro (0 - 99): ");
      scanf("%d", &(fun1.codigo));  
    }while(fun1.codigo>100 || fun1.codigo<0);
    
    removePulaLinha(fun1.nome);

    printf("\tFICHA DE FUNCIONÁRIO\n");
    printf("Nome: %s     Data de Nascimento: %d/ %s/ %d    ID: %d\n", fun1.nome, fun1.dia, fun1.mes, fun1.ano, fun1.codigo);
    printf("Idade: %d anos       Sexo: %c         CPF: %s\n", fun1.idade, fun1.sexo, fun1.cpf);
    printf("Cargo: %s         Salário R$: %.2f\n", fun1.cargo, fun1.salario);
    

    
    return 0;
}