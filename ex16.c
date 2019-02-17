#include<stdio.h>
#include<stdlib.h>

int main(){

    float quantia=780.000,g1,g2,g3;

    g1=quantia*0.46;
    g2=quantia*0.32;
    g3=quantia - (g1+g2);

    printf("Valor recebido pelo Ganhador 1: %.2f",g1);
    printf("\n\n\Valor recebido pelo Ganhador 2: %.2f",g2);
    printf("\n\n\Valor recebido pelo Ganhador 3: %.2f",g3);

    printf("\n\n%f",g1+g2+g3);

    return 0;
}
