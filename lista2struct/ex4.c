#include <stdio.h>
#include <stdlib.h>

typedef struct horario{
    int hora, min, seg;
}hora;

typedef struct data{
    int dia, mes, ano;
}data;

typedef struct compromisso{
    char obs[200];
    data data1;
    hora hora1;
}compromisso;

int main(){
    compromisso comp[3];

    for(int i=0; i<3; i++){
        printf("\t CADASTRE O COMPROMISSO Nº%d\n", i+1);
        printf("Data:\n");
        printf("-Dia: ");
        scanf("%d", &(comp[i].data1.dia));
        printf("-Mes: ");
        scanf("%d", &(comp[i].data1.mes));
        printf("-Ano: ");
        scanf("%d", &(comp[i].data1.ano));
        printf("Horário:\n");
        printf("-Hora: ");
        scanf("%d", &(comp[i].hora1.hora));
        printf("-Minuto: ");
        scanf("%d", &(comp[i].hora1.min));
        printf("-Segundo: ");
        scanf("%d", &(comp[i].hora1.seg));
        printf("Compromisso: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", comp[i].obs);
    }

    printf("\t--- LISTA DE COMPROMISSOS ---\n");
    for(int i=0; i<3; i++){
        printf("Compromisso: %d\n", i+1);
        printf("\tData: %d/ %d/ %d\n", comp[i].data1.dia, comp[i].data1.mes, comp[i].data1.ano);
        printf("\tHorário: %d:%d:%d\n", comp[i].hora1.hora, comp[i].hora1.min, comp[i].hora1.seg);
        printf("\tObservação: %s\n", comp[i].obs);
    }

    return 0;
}