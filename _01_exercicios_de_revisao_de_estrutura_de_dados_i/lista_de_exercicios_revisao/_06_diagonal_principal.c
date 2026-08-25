#include <stdlib.h>
#include <stdio.h>
/*
Leia uma matriz 4 x 4.

Mostre os elementos da diagonal principal e calcule sua soma.

*/

int main(){

    int matriz[4][4];

    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("Digite um valor:");
            scanf("%d",&matriz[i][j]);

        }

    }

    
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("%d\t",matriz[i][j]);
        
        }

        printf("\n");
    }
    printf("\n");
        
            printf("%d\t",matriz[0][0]);
            printf("%d\t",matriz[1][1]);
            printf("%d\t",matriz[2][2]);
            printf("%d\t",matriz[3][3]);
        

        printf("\n");

         return 0;
    }




   
