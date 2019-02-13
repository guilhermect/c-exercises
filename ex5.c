
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=0, n2=0, n3=0;
    int soma=0;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);

    soma = (n1*n1)+(n2*n2)+(n3*n3);

    printf("Soma dos quadrados = %d", soma);


    return 0;
}

