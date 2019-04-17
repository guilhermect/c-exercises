#include <stdio.h>
#include <stdlib.h>

int somaVet(int *v, int n);

int main(){

    int n, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *v;

    srand(time(NULL));

    v = (int*) malloc(n * sizeof(int));

    if(v == NULL){
        printf("Espaco insuficiente");
        exit(1);
    }

    for(i=0; i<n; i++){
        v[i] = rand()%100;
    }

    for(i=0; i<n; i++){
        printf("%d ", v[i]);
    }

    printf("\n\n");

    printf("%d \n\n", somaVet(v, n));

    system("PAUSE");
    return 0;
}


int somaVet(int *v, int n){

    if(n == 1){
        return v[0];
    }

    return v[n-1] + somaVet(v, n-1);
}
