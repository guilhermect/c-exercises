#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    int matricula;
    char nome[21];
    float nota[3];
} alunos;


int main(){

    int num;
    int maiorMedia;

    printf("Numero de alunos: ");
    scanf("%d",&num);

    alunos aluno[num];

    printf("\n");

    retornaIndice(aluno, num, &maiorMedia);

    printf("Indice da maior media [%d]",maiorMedia);

    system("PAUSE");
    return 0;
}


int retornaIndice(struct aluno aluno[], int tam, int *maiorMedia){
    int i,j;
    float soma[tam], maior=0, media[tam];

     for(i=0; i<tam; i++){
        printf("Aluno %d\n\n", i+1);
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        fgets(aluno[i].nome, 20, stdin);
        printf("Nome: ");
        gets(aluno[i].nome);
        for(j=0; j<3; j++){
            printf("Nota %d: ", j+1);
            scanf("%f", &aluno[i].nota[j]);
            soma[i] += aluno[i].nota[j];
        }

        media[i] = soma[i]/3;

        printf("Media: %.2f\n",media[i]);

        if(media[i]>media[i-1]){
            *maiorMedia=i;
        }
    }



}



