#include<stdio.h>
#include<stdlib.h>

menorValor(int vetor[], int tamanho, int * menor);

int main(){
    int *vet, i,n,menor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (int*) malloc(n * sizeof(int));

    printf("\nVetor:\n\n");

    for(i=0; i < n; i++){
            vet[i]=rand() % 50;
            printf("\t%d\n",vet[i]);
    }

    menorValor(vet, n, &menor);
    printf("\n\nO menor número é, %d\n", menor);

}

menorValor(int vetor[], int tamanho, int * menor){

    if(tamanho==0){
        return 1;
    }

    menorValor(vetor +  1, tamanho - 1, menor);

    if (vetor[0] < *menor){
        *menor = vetor[0];
    }

}
