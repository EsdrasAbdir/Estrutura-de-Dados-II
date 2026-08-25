#include <stdio.h>
#include <stdlib.h>
/*
Crie uma struct Produto contendo:
nome
codigo
preco
quantidade
Cadastre cinco produtos.

Depois:

mostre todos os produtos;
calcule o valor total de cada produto;
informe o produto com maior valor em estoque.

*/
int main(){

struct Produto{
    char nome[50];
    int codigo;
    float preco;
    int quantidade;
};
    float valorTotalDeCadaProduto = 0;
    float maiorValorEmEstoque = 0;
    struct Produto produtos[5];
    int indiceMaior;
    for (int i = 0; i<5;i++){

        printf("Digite o nome do produto: ");
        scanf("%s",produtos[i].nome);
        printf("Digite o codigo do produto: ");
        scanf("%d",&produtos[i].codigo);
        printf("Digite o preco do produto: ");
        scanf("%f",&produtos[i].preco);
        printf("Digite a quantidade do produto: ");
        scanf("%d",&produtos[i].quantidade);

      
        
    }

        for (int i = 0; i<5;i++){
        valorTotalDeCadaProduto = produtos[i].preco *produtos[i].quantidade; 
        if(i==0 || valorTotalDeCadaProduto>maiorValorEmEstoque){
            maiorValorEmEstoque = valorTotalDeCadaProduto;
            indiceMaior = i;
        }
       printf("\tNome do produto e %s\n",produtos[i].nome);
       printf("\tcodigo do produto e %d\n",produtos[i].codigo);
       printf("\tpreco do produto e %.2f\n",produtos[i].preco);
       printf("\tQuantidade do produto e %d\n",produtos[i].quantidade);
       printf("\tO valor total de cada produto e %.2f\n",valorTotalDeCadaProduto);

    }
        printf("\n");
       
       printf("\tO %s com maior valor e %.2f\n",produtos[indiceMaior].nome,maiorValorEmEstoque);    





    return 0;
}