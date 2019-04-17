#include<stdio.h>
#include<stdlib.h>

struct cadastro{
    char nome[50];
    char endereco[100];
    int idade;
};

int main(){
    int *n;

    printf("Entre com o numero de cadastros: ");
    scanf("%d",&n);

    relatorio(n);

    return 0;
}

relatorio(int n){
    struct cadastro *vetor;
    int i;

    vetor = (struct cadastro *) malloc(n * sizeof(vetor));

    if(vetor == NULL){
        printf("ERRO: Sem memória! \n");
        exit(1);
    }

    for(i = 0; i < n; i++){

        printf("\nCadastro %d: \n\n",i+1);

        printf("Nome: ");
        scanf("%s",vetor[i].nome);

        printf("Idade: ");
        scanf("%d",&vetor[i].idade);

        printf("Endereco: ");
        scanf("%s",vetor[i].endereco);

        printf("\n");

    }



    printf("\n\n");

    for(i = 0; i < n; i++){

        printf("\nCadastro %d: \n\n",i+1);

        printf("Nome: %s\n",vetor[i].nome);
        printf("Idade: %d\n",vetor[i].idade);
        printf("Endereco: %s\n\n",vetor[i].endereco);

    }

    printf("O vetor ocupa %d bytes",sizeof(vetor));

    free(vetor);




}
