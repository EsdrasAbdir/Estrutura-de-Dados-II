#include <stdio.h>
#include <stdlib.h>
/*
Uma turma possui 4 alunos e 3 avaliações.

Crie uma matriz para armazenar as notas:


*/

int main() {

    float matriz[4][3];

    for(int i = 0;i<4;i++){
       for(int j = 0; j<3;j++){
        printf("Digite a nota %d: ",j+1);
        scanf("%f",&matriz[i][j]);
       }
    }

    
    for(int i = 0;i<4;i++){
        printf("Aluno %d ",i+1);
       for(int j = 0; j<3;j++){
        printf("%.1f\t",matriz[i][j]);
        
       }
       printf("\n");
    }


    return 0;
}