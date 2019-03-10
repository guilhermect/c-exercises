#include <stdio.h>

main(){
    float nota[3], media;
    int id;

    printf("Digite o numero de matricula: ");
    scanf("%d", &id);

    printf("Digite 3 notas: \n\n");
    int i;
    for(i=0;i<3;i++){
        printf("Nota %d: ",i+1);
        scanf("%f",&nota[i]);
    }

    media = (nota[0] + nota[1] + (nota[2]*2))/4;

    if(media >= 6){
        printf("Nota: %.2f , Matricula: %d, Aprovado", media, id);
    }
    else{
        printf("Nota: %.2f , Matricula: %d, reprovado", media, id);
    }
}
