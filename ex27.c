#include <stdio.h>

main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    idade = 2018 - idade;
    printf("Voce nasceu em: %d",idade);
}
