#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
📝 Desafio — Cadastro de Alunos
Crie um programa que:

Crie uma struct Aluno.

A struct deve possuir:

nome;
idade;
três notas.
Crie um array para armazenar cinco alunos.

Leia os dados dos cinco alunos.

Calcule a média de cada aluno.

Mostre o nome e a média de cada aluno.

Informe qual aluno possui a maior média.




*/


int main(){
   
    struct Aluno{
        char nome[50];
        int idade;
        float nota1;
        float nota2;
        float nota3;
        float media;
    };   

    float media;
    struct Aluno turma[5];

    for (int i = 0; i < 5; i++){
   
    
    printf("Digite o nome do primeiro aluno: ");
    scanf("%s",turma[i].nome);

    printf("Digite a idade do aluno: ");
    scanf("%d",&turma[i].idade);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f",&turma[i].nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f",&turma[i].nota2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f",&turma[i].nota3);
    turma[i].media = (turma[i].nota1 + turma[i].nota2 + turma[i].nota3)/3;
    
    }

    for(int i=0;i<5;i++){

        printf("Nome = %s\nIdade = %d\nnota1 = %.1f\nnota2 = %.1f\nnota3 = %.1f\nmedia = %.1f\n\n",turma[i].nome,turma[i].idade,turma[i].nota1,turma[i].nota2,turma[i].nota3,turma[i].media);
    }
    return 0;
}
