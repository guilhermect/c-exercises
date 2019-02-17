#include<stdio.h>
#include<stdlib.h>

int main(){

    float valor, desconto;

    printf("Valor do produto: ");
    scanf("%f",&valor);

    desconto=valor - valor*0.12;

    printf("Valor com desconto: %.2f",desconto);

    return 0;
}
