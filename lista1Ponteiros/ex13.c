#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	void verificaStr(char *str1, char*str2);
	char palavra1[50], palavra2[50];
	int tam;

	printf("Informe a string1: ");
	fgets(palavra1, 50, stdin);
	printf("Informe a string2: ");
	fgets(palavra2, 50, stdin);
	verificaStr(palavra1, palavra2);

	
	return 0;
}
//verificar se a segunda ocorre dentro da primeira
void verificaStr(char *str1, char*str2){
	int rep = 0; //quantas vezes repete
	int tam1, tam2;
	tam1 = strlen(str1)-1;
	tam2 = strlen(str2)-1;
	
    printf("\tiniciando verificação...\n");
    for(int i=0; i<tam1; i++){
    	printf("-->STR1 - Letra: %c\n", *(str1+i));
    	for(int j=0; j<tam2; j++){
    		printf("STR2 - Letra: %c\n", *(str2+j));
    		if(*(str1+i) == *(str2+j)){
    			if(*(str1+i+1) == *(str2+j+1)){
    				rep ++;
    			}
    		}
    	}
    }
    
}