#include <stdio.h>
#include <stdlib.h>

main(){
    float a1, a2, a3, premio, total, p1, p2, p3;

    printf("Aposta 1: ");
    scanf("%f", &a1);
    printf("Aposta 2: ");
    scanf("%f", &a2);
    printf("Aposta 3: ");
    scanf("%f", &a3);

    printf("Valor do premio: ");
    scanf("%f",&premio);

    total = a1+a2+a3;

    p1 = (a1*100)/total;
    p2 = (a2*100)/total;
    p3 = (a3*100)/total;

    printf("\nO apostador 1 recebera R$ %.2f", (p1*premio)/100);
    printf("\n\nO apostador 2 recebera R$ %.2f", (p2*premio)/100);
    printf("\n\nO apostador 3 recebera R$ %.2f\n", (p3*premio)/100);

}
