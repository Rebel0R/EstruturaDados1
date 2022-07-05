#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
    char nome[100];
    int numMatri;
    char curso[50];
}aluno;

int main (){
    aluno aluno1[5];

    printf("\tCADASTRO DE ALUNO\n");
    for(int i=0; i<5; i++){
        printf("Informe os dados do Aluno %d\n", i+1);
        printf("-Nome: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", aluno1[i].nome);
        printf("-Número da Matrícula: ");
        scanf("%d", &(aluno1[i].numMatri));
        printf("-Curso: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", aluno1[i].curso);
        printf("\n");
    }

    printf("\t --- ALUNOS CADASTRADOS ---\n");
    for(int i=0; i<5; i++){
        printf("\t\tALUNO %d\n", i+1);
        printf("\tNome: %s      Nº Matrícula: %d\n", aluno1[i].nome, aluno1[i].numMatri);
        printf("\tCurso: %s\n\n", aluno1[i].curso);
    }

}