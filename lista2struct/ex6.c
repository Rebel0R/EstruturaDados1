#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
    char nome[100];
    int numMatri;
    float p1, p2, p3;
}aluno;

float calculaMedia(aluno *alu){
    float med;
    med = (alu->p1 + alu->p2 + alu->p3)/3;
    if(med>=6){
        printf("\t\tPARABÉNS VOCÊ FOI APROVADO!\n");
    }else{
        printf("\t\tALUNO %s REPROVADO POR NOTA!\n", alu->nome);
    }
    return med;
}

void maiorP1(aluno *alu){
    if((alu->p1)>((alu+1)->p1) && (alu->p1)>((alu+2)->p1)){
        printf("\t O aluno %s possuí a maior nota na P1: %.2f\n", alu->nome, alu->p1);
    }else if(((alu+1)->p1)>(alu->p1) && ((alu+1)->p1) > ((alu+2)->p1)){
        printf("\t O aluno %s possuí a maior nota na P1: %.2f\n", (alu+1)->nome, (alu+1)->p1);
    }else if(((alu+2)->p1)>(alu->p1) && ((alu+2)->p1) > ((alu+1)->p1)){
        printf("\t O aluno %s possuí a maior nota na P1: %.2f\n", (alu+2)->nome, (alu+2)->p1);
    }else{
        printf("\tTodos possuem notas iguais!\n");
    }
}

void calculaRendimentoMedia(float *media, aluno *alu){
    
    if(*media > *(media+1) && *media > *(media+2)){
        printf("\t O aluno %s possui a maior média: %.2f\n", alu->nome, *media);
        if(*(media+1)<*(media+2)){
           printf("\t O aluno %s possui a menor média: %.2f\n", (alu+1)->nome, *(media+1)); 
        }else if(*(media+2)<*(media+1)){
           printf("\t O aluno %s possui a menor média: %.2f\n", (alu+2)->nome, *(media+2)); 
        }
    }
     if(*(media+1) > *(media) && *(media+1) > *(media+2)){
        printf("\t O aluno %s possui a maior média: %.2f\n", (alu+1)->nome, *(media+1));
        if(*(media)<*(media+2)){
           printf("\t O aluno %s possui a menor média: %.2f\n", alu->nome, *media); 
        }else if(*(media+2)<*media){
           printf("\t O aluno %s possui a menor média: %.2f\n", (alu+2)->nome, *(media+2)); 
        }
    }
     if(*(media+2) > *(media) && *(media+2) > *(media+1)){
        printf("\t O aluno %s possui a maior média: %.2f\n", (alu+2)->nome, *(media+2));
        if(*(media)<*(media+1)){
           printf("\t O aluno %s possui a menor média: %.2f\n", alu->nome, *media); 
        }else if(*(media+1)<*media){
           printf("\t O aluno %s possui a menor média: %.2f\n", (alu+1)->nome, *(media+1)); 
        }
    }
}

int main(){

    float mediaAl[3];
    aluno al[3];

    printf("\t\t--- CADASTRO DE ALUNO ---\n");
    for(int i=0; i<3; i++){
        printf("\tALUNO %d\n", i+1);
        printf("-Nome: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", al[i].nome);
        printf("-Nº Matricula: ");
        scanf("%d", &al[i].numMatri);
        printf("-Nota prova1: ");
        scanf("%f", &al[i].p1);
        printf("-Nota prova2: ");
        scanf("%f", &al[i].p2);
        printf("-Nota prova3: ");
        scanf("%f", &al[i].p3);
        mediaAl[i] = calculaMedia(&al[i]);
        printf("Media geral: %.2f\n", mediaAl[i]);
        printf("\n");
    }
    maiorP1(al);
    calculaRendimentoMedia(mediaAl, al);

    return 0;
}