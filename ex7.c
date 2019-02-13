
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor=0;

    printf("Digite um Valor: R$");
    scanf("%f",&valor);

    printf("Valor em dolar = $%.2f", valor*3.73);


    return 0;
}

