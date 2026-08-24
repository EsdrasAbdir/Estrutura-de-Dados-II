#include <stdio.h>
#include <stdlib.h>
/*

Exercício 5 — Matriz 3 × 3
Crie uma matriz 3 x 3 de números inteiros.

O programa deverá:

ler os valores;
mostrar a matriz;
calcular a soma de todos os elementos;
mostrar o maior valor.



*/
int main(){


    int matriz[3][3],soma = 0,maiorValor = matriz[0][0];

    for (int i = 0;i<3;i++){
        for(int j = 0; j<3;j++){
            printf("Digite o valor:");
            scanf("%d",&matriz[i][j]);
        }
    }
        for (int i = 0;i<3;i++){
        for(int j = 0; j<3;j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
        for (int i = 0;i<3;i++){
        for(int j = 0; j<3;j++){
            soma += matriz[i][j];
            if(matriz[i][j]>maiorValor){
                maiorValor = matriz[i][j];
            } 

        }

        printf("\n");
    }

    printf("O maior numero e %d",maiorValor);




    return 0;
}