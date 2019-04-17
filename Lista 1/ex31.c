#include <stdio.h>

int main(){
    float larg, comp, valor, total;

    printf("Digite a largura: ");
    scanf("%f",&larg);

    printf("Digite a comprimento: ");
    scanf("%f",&comp);

    printf("Digite o valor: ");
    scanf("%f",&valor);

    total = ((larg*2)+(comp*2))*valor;

    printf("Preco total: R$ %.2f", total);
}



