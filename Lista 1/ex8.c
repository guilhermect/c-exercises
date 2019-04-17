
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0;

    printf("Digite um numero inteiro:\n");
    scanf("%d",&num);

    printf("\n\nAntecessor = %d.", num-1);
    printf("\n\nSucessor = %d.", num+1);


    return 0;
}

