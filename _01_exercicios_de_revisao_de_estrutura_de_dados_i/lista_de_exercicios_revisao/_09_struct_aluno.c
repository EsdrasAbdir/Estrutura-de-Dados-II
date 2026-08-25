#include <stdio.h>
#include <stdlib.h>

/*
Exercício 9 — Struct Aluno
Crie uma struct Aluno contendo:

nome
idade
nota1
nota2
nota3
Cadastre cinco alunos.

Calcule a média de cada aluno e classifique:

Média >= 7,0 → Aprovado
Média < 7,0  → Reprovado
Ao final, informe:

quantidade de aprovados;
quantidade de reprovados;
aluno com maior média.

*/

int main(){

    int quantidadeAprovados=0,quantidadeReprovados=0,indiceMaiorMedia=0;
    float alunoMaiorMedia = 0;
    struct Aluno{
        char nome[50];
        int idade;
        float nota1;
        float nota2;
        float nota3;
        float media;
    };

    struct Aluno alunos[5];

    for(int i = 0;i<5;i++){
        printf("Digite o nome: ");
        scanf("%s",alunos[i].nome);
        printf("Digite a idade: ");
        scanf("%d",&alunos[i].idade);
        printf("Digite a nota: ");
        scanf("%f",&alunos[i].nota1);
        printf("Digite a segunda nota: ");
        scanf("%f",&alunos[i].nota2);
        printf("Digite a terceira nota: ");
        scanf("%f",&alunos[i].nota3);
        alunos[i].media = (alunos[i].nota1+alunos[i].nota2+alunos[i].nota3)/3;
        if(alunos[i].media>=7.0){
            quantidadeAprovados++;
        }
        else if(alunos[i].media<7.0){
            quantidadeReprovados++;
        }
        if(i==0 || alunos[i].media > alunoMaiorMedia){
            alunoMaiorMedia = alunos[i].media;
            indiceMaiorMedia = i;
        }


    }

    printf("O numero de aprovados e %d\n",quantidadeAprovados);
    printf("O numero de reprovados e %d\n",quantidadeReprovados);
    printf("O %s tem a maior media de  %f\n",alunos[indiceMaiorMedia].nome,alunos[indiceMaiorMedia].media);
    

    return 0;
}