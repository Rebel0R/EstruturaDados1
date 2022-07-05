#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto{
    int cod;
    char nome[15];
    float preco;
    int quant;
}produto;

typedef struct Pedido{
    int cod;
    int quant;
}pedido;

void cadastrarProduto(produto *x, int tam){
    printf("\tCADASTRO DE PRODUTO\n");
    for(int i=0; i<tam; i++){
        printf("-Nome: ");
        setbuf(stdin, 0);
        scanf("%[^\n]", (x+i)->nome);
        printf("-Código: ");
        scanf("%d", &(x+i)->cod);
        printf("-Preço:R$ ");
        scanf("%f", &(x+i)->preco);
        printf("-Quantidade: ");
        scanf("%d", &(x+i)->quant);
        printf("\n");
    }
}

void imprimeProdutos(produto *x, int tam){
    for(int i=0; i<tam; i++){
        printf("Nome: %s    Código: %d  Quantidade: %d\n", (x+i)->nome, (x+i)->cod, (x+i)->quant);
        printf("Preço: R$ %.2f\n", (x+i)->preco);
        printf("\n");
    }
}

void realizaCompra(pedido x, produto *y, int tam){
    for(int i=0; i<tam; i++){
        if(x.cod == (y+i)->cod){
            if((y+i)->quant > x.quant){
                printf("--> ESTOQUE COM QUANTIDADE SUPERIOR DO PEDIDO\n");
                (y+i)->quant = (y+i)->quant - x.quant;
                printf("\tEstoque atualizado!\n");
                printf("Estoque: %d\n", (y+i)->quant);
                printf("\n");
                imprimeProdutos(y, tam);
                if((y+i)->quant<0){
                    printf("\tPedido cancelado!\n");
                    (y+i)->quant = (y+i)->quant + x.quant;
                }
            }else{
                printf("-->ESTOQUE COM QUANTIDADE INFERIOR DO PEDIDO\n");
            }
        }
    }
}


int main(){

    pedido ped1;
    produto prod[3];
    int tamanho = sizeof(prod)/sizeof(prod[0]);

    cadastrarProduto(prod, tamanho);
    do{
        printf("\tSISTEMA DE COMPRA\n");
        printf("--Informe o código do produto buscado: ");
        scanf("%d", &ped1.cod);
        if(ped1.cod!=0){
            printf("--Informe a quantidade que deseja retirar: ");
            scanf("%d", &ped1.quant);
            realizaCompra(ped1, prod, tamanho);
        }
        
        printf("\n");
    }while(ped1.cod!=0);
    

    return 0;
}