#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int  *V,int N){
    int i, continua, aux, fim = N;
    do {
        continua = 0;
        for(i = 0; i < fim - 1;i++){
            if(V[i] > V[i+1]){
                aux = V[i];
                V[i] = V[i+1];
                V[i+1] = aux;
                continua = i;
            }
    
        }

        fim--;
    }while(continua != 0);


}


int main(){

    int array[] = {23,4,67,-8,21};
    int k;
    bubbleSort(array,5);
    printf("Vetor Ordenado por Bubble Sort(Ordenacao de bolha)");
    for(k = 0; k < 5 ; k++){
        printf("\t%d ",array[k]);
    }
    printf("\n");

    

    

    return 0;
}

