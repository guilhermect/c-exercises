#include<stdlib.h>
#include<stdio.h>

int main(){


    float total;

    printf("Valor total: ");
    scanf("%f", &total);

    printf("\n\nTotal a pagar com desconto de 10%: R$%.2f",total*0.9);
    printf("\n\nValor da parcela em 3x: R$%.2f",total/3);
    printf("\n\nComissao por venda a vista : R$%.2f",(total*0.9) * 0.05);
    printf("\n\nComissao por venda parcelada : R$%.2f\n\n",total*0.05);






    return 0;
}
