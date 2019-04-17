#include<stdio.h>
#include<stdlib.h>

int SOMA_MATRIZ(int MATRIZ[6][6]);

void main(){

    int i=0,j=0;
    int *A[6][6];

    printf("Digite os valores da matriz: \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\n");
    SOMA_MATRIZ(*A);
}


int SOMA_MATRIZ(int MATRIZ[6][6]){
    int i=0,j=0,soma=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if( i==j ){
                soma += &MATRIZ[i][j];
            }
            printf("%d ",MATRIZ[i][j]);
        }
        printf("\n\n");
    }

    printf( "Soma da diagonal principal: %d", soma);

    printf("\n\n");


}
