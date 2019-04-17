#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_num=0;
    float float_num=0;


    printf("Digite um numero inteiro:");
    scanf("%d",&int_num);

    printf("\nNumero digitado: %d.",int_num);

    printf("\n\nDigite um numero real:");
    scanf("%f",&float_num);

    printf("\nNumero digitado: %.2f.",float_num);


    return 0;
}

