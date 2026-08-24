#include <stdio.h>
#include <stdlib.h>

/*
exercício 4 — Inversão de vetor
Leia 10 números e armazene-os em um array.

Mostre o vetor original e o vetor invertido.
*/
int main(){

    int numeros[10];
    int numerosInvertidos[10];
    for(int i = 0;i<10;i++){

        printf("Digite um valor: ");
        scanf("%d",&numeros[i]);
    }

    for(int i = 0;i<10;i++){

        numerosInvertidos[i] = numeros[9-i];
    }

        for(int i = 0;i<10;i++){

        printf("Numeros originais: %d\t",numeros[i]);
    }
    printf("\n");
        for(int i = 0;i<10;i++){

        printf("Numeros invertidos: %d\t",numerosInvertidos[i]);
    }

    return 0;
}