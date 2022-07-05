#include <stdio.h>
#include <stdlib.h>

typedef struct horario{
    char horario[10];
}hora;

typedef struct data{
    int dia, ano;
    char mes[6];
}data;

typedef struct compromisso{
    char obs[50];
    data data1;
    hora hora1;
}compromisso;


int main(){
    compromisso comp1;
    printf("\tBem vindo ao sistema de agendamento de compromissos\n");
    printf("\tInforme data:\n");
    printf("- Dia: ");
    scanf("%d", &(comp1.data1.dia));
    printf("- Mês: ");
    setbuf(stdin, 0);
    fgets(comp1.data1.mes, 6, stdin);
    printf("- Ano: ");
    scanf("%d", &(comp1.data1.ano));
    printf("\n\tInforme a hora:\n ");
    printf("- Horário: ");
    setbuf(stdin, 0);
    fgets(comp1.hora1.horario, 10, stdin);
    printf("\n\tInforme a observação:\n");
    printf("- Observação: ");
    setbuf(stdin, 0);
    fgets(comp1.obs, 50, stdin);
    printf("\n\tCOMPROMISSO CADASTRADO!\n");
    printf("%d/%s/%d \n", comp1.data1.dia, comp1.data1.mes, comp1.data1.ano);
    printf("Horario: %s\n", comp1.hora1.horario);
    printf("--Obs: %s", comp1.obs);
    
    return 0;
}