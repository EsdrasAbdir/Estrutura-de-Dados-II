#include <stdio.h>
#include <stdlib.h>
/*
Exercício 2 — Maior e menor
Leia 10 números inteiros utilizando um array.

Determine:

o maior valor;
o menor valor;
as posições em que eles aparecem.
*/

int main(){


    int arrayDeNumeros[10];

    int maior, menor;
    

    for(int i = 0 ;i < 10;i++){

        printf("Digite um valor: ");
        scanf("%d",&arrayDeNumeros[i]);
        int numero = arrayDeNumeros[i];
        if(i==0){
            maior = numero;
            menor = numero;
        }  
        else{

            if(numero>maior){
                maior = numero;
            }
            if(numero<menor){
                menor= numero;
            }

        }

    }
    for(int i = 0;i<10;i++){
    printf("%d\t",arrayDeNumeros[i]);
    }
    printf("\n");
    printf("O maior numero e : %d\n",maior);
    printf("O menor numero e : %d\n",menor);

    return 0;
}