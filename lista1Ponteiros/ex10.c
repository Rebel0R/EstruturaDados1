#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[5];
	for (int i = 0; i < 5; i++)
	{
		printf("Informe o valor do %d elemento: ", i+1);
		scanf("%d", &*(v+i));
	}

	for (int i = 0; i < 5; i++)
	{
		printf("O endereço de memória do %d elemento é: %p\n", i+1, &*(v+i));
	}

	return 0;
}