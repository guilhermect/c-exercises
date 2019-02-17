#include<stdio.h>
#include<stdlib.h>

int main(){

    float valor, aumento;

    printf("Valor do produto: ");
    scanf("%f",&valor);

    aumento=valor + valor*0.25;

    printf("Valor com aumento: R$%.2f",aumento);

    return 0;
}
