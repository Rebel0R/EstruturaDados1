#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trocaValor(int *x, int *y, int *z);
	int a, b, c, result;
	printf("Informe o valor das três variáveis: ");
	scanf("%d %d %d", &a, &b, &c);
	result = trocaValor(&a, &b, &c);
	printf("\t---Valores ordenados---\n");
	printf("a: %d  b: %d  c: %d\n", a, b, c);
	if(result == 0){
		printf("Valores diferentes!\n");
	}else {
		printf("Valores iguais!\n");
	}


	return 0;
}

int trocaValor(int *x, int *y, int *z){
	if(*x == *y && *x == *z){
		return 1;
	}else{
		if(*x > *y && *x > *z){
			if(*y > *z){
				int valor;
				valor = *x;
				*x = *z;
				*z = valor;
				return 0;
			}else{
				int valor;
				valor = *x;
				*x = *y;
				*y = *z;
				*z = valor;
				return 0;
			}	
		}
		if (*y > *x && *y > *z)
		{
			if(*x > *z){
				int valor;
				valor = *y;
				*x = *z;
				*y = *x;
				*z = valor;
				return 0;
			}else{
				int valor;
				valor = *y;
				*y = *z;
				*z = valor;
				return 0;
			}
		}
		if (*z > *x && *z > *y){
			if(*x > *y){
				int valor;
				valor = *x;
				*x = *y;
				*y = valor;
				return 0;
			}else {
				return 0;
			}
		}
	}
}