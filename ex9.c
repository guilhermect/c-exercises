
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0,soma=0;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);

    soma=((num*3)+1) + ((num*2)-1);

    printf("\n\nAntecessor= %d.", num-1);
    printf("\n\nSucessor = %d.", num+1);

    printf("\n\nSoma = %d.", soma);


    return 0;
}

