#include <stdio.h>
#include <stdlib.h>
/*
Exercício 1 — Soma de um vetor
Crie um programa que leia 10 números inteiros e armazene-os em um array.

Ao final, apresente:

todos os números;
a soma dos elementos;
a média dos valores.

*/

int main(){


    int arrayDeNumero[5];

    int soma = 0;

   

    for(int i = 0; i < 5;i++){

        printf("Digite um numero: ");
        scanf("%d",&arrayDeNumero[i]);
        soma += arrayDeNumero[i];
    }

    float media = soma/5;

    printf("A soma dos numeros e %d\n",soma);
    printf("A media dos valores e %.1f",media);

    return 0;
}