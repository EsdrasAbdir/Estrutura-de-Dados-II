
#include <stdio.h>
#include <stdlib.h>

    typedef struct{
    int dia,mes,ano;

    }Data;

    typedef struct{
    char nome[100];
    Data nascimento;


    }Pessoa;


    Pessoa lerPessoa(){
        Pessoa p;
        printf("Digite o nome:");
        fgets(p.nome,100,stdin);
        printf("Digite a datas de nascimento com dia/mes e ano:\n");
        scanf("%d%d%d",&p.nascimento.dia,&p.nascimento.mes,&p.nascimento.ano);
        while(getchar() != '\n');

        return p;
    }

    void imprimirPessoa(Pessoa p){
    printf("\n\t%s",p.nome);
    printf("\n\t%d/%d/%d",p.nascimento.dia,p.nascimento.mes,p.nascimento.ano);
    }



int main()
{

    Pessoa pessoas[3][4];
    
    pessoas[0][0] = lerPessoa();
    pessoas[0][1] = lerPessoa();

    imprimirPessoa(pessoas[0][0]);
    imprimirPessoa(pessoas[0][1]);



    return 0;
}
