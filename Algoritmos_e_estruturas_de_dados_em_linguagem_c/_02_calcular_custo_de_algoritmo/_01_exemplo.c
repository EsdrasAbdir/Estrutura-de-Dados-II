#include <stdio.h>
#include <stdlib.h>


void encontrarMaiorValor(int A[], int n){
int i;
int M = A[0]; // 2 instrução

for(i = 0; i < n;i++){ //  1 + 6 + 5  = 12 instruções
    if(A[i] >= M){ // 5 * 2  = 10 instruções 
        M = A[i]; // 3 *  2 = 6 instruções

        
    }

}
    printf("O maior valor e %d\n",M);

}



int main(){

int A[] = {3,10,5,20,8}; // 1 instrução
int n = 5; // 1 instrução

encontrarMaiorValor(A,n);




    return 0 ;
}
