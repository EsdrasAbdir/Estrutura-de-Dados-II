#include <stdio.h>
#include <stdlib.h>
/*
Exercício 3 — Números pares
Leia 20 números inteiros e armazene-os em um array.

Depois:

mostre somente os números pares;
conte quantos números pares existem;
calcule a soma dos números pares.
*/

int main(){


    int numeros[20],somaPares = 0,numerosDePares = 0;
    int numerosPares[20];
    for(int i = 0; i<20;i++){

        printf("Digite um valor: ");
        scanf("%d",&numeros[i]);

        if(numeros[i] % 2 == 0){
            numerosPares[numerosDePares] = numeros[i];
            somaPares += numeros[i];
            numerosDePares += 1;
            
        }


    }

    for(int i = 0; i<numerosDePares;i++){
    printf("\tNumeros Pares: %d\n",numerosPares[i]);
    }
    printf("\n");
    printf("O numero de numeros pares e : %d\n",numerosDePares);
    printf("A soma dos numeros pares e %d",somaPares);



    return 0;
}