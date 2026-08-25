#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Exercício 10 — Sistema Integrado
Crie um pequeno sistema para cadastro de 10 funcionários.

Utilize uma struct contendo:

nome
idade
cargo
salario
O programa deverá permitir:

Cadastrar os funcionários.
Listar todos os funcionários.
Mostrar o funcionário com maior salário.
Calcular a média salarial.
Mostrar os funcionários com salário acima da média.
Desafio extra
Crie um menu:

=================================
       SISTEMA DE FUNCIONÁRIOS
=================================

1 - Cadastrar funcionários
2 - Listar funcionários
3 - Maior salário
4 - Média salarial
5 - Salários acima da média
0 - Sair

Escolha uma opção:

*/

    struct Funcionario{
    char nome[50];
    int idade;
    char cargo[50];
    float salario;
    };


int main(){
  int indiceComMaiorSalario;
  struct Funcionario funcionarios[10];
  float valorDeTodosOsSalarios = 0;
  int opcao;
  int tam;
  float maiorSalario = 0,mediaSalarial = 0;
  do {

        printf("\n=================================\n");
        printf("       SISTEMA DE FUNCIONARIOS    \n");
        printf("=================================\n");
        printf("1 - Cadastrar funcionarios\n");
        printf("2 - Listar funcionarios\n");
        printf("3 - Maior salario\n");
        printf("4 - Media salarial\n");
        printf("5 - Salarios acima da media\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
  
  switch (opcao)
  {
  case 1:
    printf("Quantos funcionarios que registrar: ");
    scanf("%d",&tam);
    for (int i=0;i<tam;i++){
    printf("Qual o nome do funcionario: ");
    scanf("%s",funcionarios[i].nome);
    printf("Qual a idade do funcionario: ");
    scanf("%d",&funcionarios[i].idade);
    printf("Qual o cargo do funcionario: ");
    scanf("%s",funcionarios[i].cargo);
    printf("Qual o salario do funcionario: ");
    scanf("%f",&funcionarios[i].salario);
    if(i==0 || funcionarios[i].salario > maiorSalario){
        maiorSalario = funcionarios[i].salario;
        indiceComMaiorSalario = i;
    }

    }
    printf("\nTodos os funcionarios foram cadastrados com sucesso!\n");
    break;

    case 2: 
     for (int i=0;i<tam;i++){
    printf("\t%s\n",funcionarios[i].nome);

    }
    break;
    case 3: 
    printf("O(a) %s tem maior salario e %.2f\n",funcionarios[indiceComMaiorSalario].nome,maiorSalario);
    break;
    case 4: 
    valorDeTodosOsSalarios = 0;
      for (int i=0;i<tam;i++){
        valorDeTodosOsSalarios += funcionarios[i].salario;

    }
    mediaSalarial = valorDeTodosOsSalarios/tam;
    printf("\nA media salarial e: R$ %.2f\n", mediaSalarial);
    break;
    case 5: 
    valorDeTodosOsSalarios = 0;
        for (int i=0;i<tam;i++){
      
        valorDeTodosOsSalarios += funcionarios[i].salario;

       }
       mediaSalarial = valorDeTodosOsSalarios/tam;
       for (int i=0;i<tam;i++){
      if(funcionarios[i].salario>mediaSalarial){
        printf("O(a) %s recebe um valor acima da media salarial de %.2f\n",funcionarios[i].nome,funcionarios[i].salario);
      }
        

       }
       break;
   
    
  default:
    break;
  }
  }while (opcao!=0);
    return 0;
   }
  
   
