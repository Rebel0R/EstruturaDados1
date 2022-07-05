#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno{
    char nome[100];
    int matr;
    float med;
}aluno;

int main(){
    
    aluno al1[3];
    int contApr=0, contRepr=0;

    printf("\tCADASTRO DE ALUNOS\n");
    for(int i=0; i<3; i++){
        printf("\t\tALUNO %d\n", i+1);
        printf("- Nome: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (al1+i)->nome);
        printf("- Matrícula: ");
        scanf("%d", &(al1+i)->matr);
        printf("- Média: ");
        scanf("%f", &(al1+i)->med);

        if((al1+i)->med > 5.0){
            contApr++;
        }else{
            contRepr++;
        }
    }

    aluno alApr[contApr], alRpr[contRepr];
    printf("\tLISTA DE APROVADOS E REPROVADOS\n");
    for(int i=0; i<3; i++){
        if((al1+i)->med > 5.0){
            strcpy((alApr+i)->nome, (al1+i)->nome);
            (alApr+i)->matr = (al1+i)->matr;
            (alApr+i)->med = (al1+i)->med;
            printf("Aluno: %s   Matrícula: %d  Média: %.2f\n", (alApr+i)->nome, (alApr+i)->matr, (alApr+i)->med);
            printf("\tAluno Aprovado!\n");
            
        }else{
            strcpy((alRpr+i)->nome, (al1+i)->nome);
            (alRpr+i)->matr = (al1+i)->matr;
            (alRpr+i)->med = (al1+i)->med;
            printf("Aluno: %s   Matrícula: %d  Média: %.2f\n", (alRpr+i)->nome, (alRpr+i)->matr, (alRpr+i)->med);
            printf("\tAluno Reprovado!\n");
        }
    }



    return 0;
}