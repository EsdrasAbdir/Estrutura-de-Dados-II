#include <stdio.h>
#include <stdlib.h>
// Utilizar estrututura de dados (nó) para uma clínica.


/*
Problema real — Sistema de atendimento de uma clínica
Uma clínica recebe pacientes durante o dia. Cada paciente possui:

nome;
idade;
prioridade.
Exemplo:

Ana — 32 anos — Normal
Bruno — 70 anos — Prioridade
Carlos — 45 anos — Normal
O sistema deve permitir:

adicionar paciente;
listar pacientes;
atender o primeiro paciente;
verificar se a fila está vazia;
informar a quantidade de pacientes.

*/
 typedef struct Paciente
        {
            char nome[50];
            int idade;
            int prioridade;
            struct Paciente *proximo;
        }Paciente;
         

int main(){
    Paciente *inicio = NULL;
    Paciente *fim = NULL;
    int opcao;
      
    do
    {
     


        printf("\t1. Registrar Paciente\n");
        printf("\t2. Listar Pacientes\n");
        printf("\t3. Atender Paciente\n");
        printf("\t4. Pacientes na fila\n");
        printf("\t5. sair\n");
        scanf("%d",&opcao);
        switch (opcao)
        {
        case 1: {
        Paciente *novo = (Paciente*) malloc (sizeof(Paciente));
            printf("Digite o nome do Paciente: ");
            scanf(" %[^\n]",novo->nome);
            printf("Digite a idade do Paciente: ");
            scanf(" %d",&novo->idade);
            printf("Digite a prioridade do Paciente: [1]branco [2]amarelo [3]vermelho ");
            scanf(" %d",&novo->prioridade);
            novo->proximo = NULL;

            if(inicio == NULL){
                inicio = novo;
            }
            else{
                fim->proximo = novo;
            }

            fim = novo;

            break;
        }
        case 2: {
            if(inicio == NULL){
                printf("\tA lista esta vazia\n");
            }
            else{
                Paciente *aux = inicio;
                printf("\t----Lista de Pacientes----\n");
                while(aux != NULL){
                    printf("Nome: %s\tIdade: %d\tPrioridade: %d\n",aux->nome,aux->idade,aux->prioridade);

                    aux = aux->proximo;
                    printf("\t----------------------------\n");
                }
                printf("\t----------------------------\n");
            }
            break;
        }

        case 3: {
            if(inicio == NULL){
                printf("\tNinguem para atender \n");

            }
            else{
                Paciente *aux = inicio;
                Paciente *ant = NULL;

                Paciente *maior = inicio;
                Paciente *maior_ant = NULL;
                while (aux != NULL)
                {
                    if(aux->prioridade > maior->prioridade){
                        maior = aux;
                        maior_ant = ant;
                    }

                    ant = aux;
                    aux = aux->proximo;
                }


                printf("\n\tAtendendo: %s (Idade: %d |  Prioridade : %d\n", maior->nome,maior->idade,maior->prioridade);
                
                if(maior == inicio){
                    inicio = inicio->proximo;
                }else{
                    maior_ant->proximo = maior->proximo;
                }

                if(maior == fim){
                    fim = maior_ant;
                }
                free(maior);
            }

        
            break;
        }

        case 4 : {
            int contador =0;
            Paciente *aux = inicio;
            while(aux != NULL){
                contador++;
                aux = aux->proximo;
            }
            if(contador == 0){

                printf("\tA fila esta vazia\n");
            }else{

                printf("\tQuantidade de pacientes nas fila: %d\n",contador);
            }
            }

            break;

            case 5: {
                break;
            }
            default:
            break;
        }

        } while (opcao != 5);
         
        
        return 0;
        }

