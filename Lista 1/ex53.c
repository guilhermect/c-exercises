#include <stdio.h>

main(){
    float n, x;
    printf("Digite um metros hectares: ");
    scanf("%f",&n);
    x = n * 10000 ;
    printf("em metros quadrados; %.2f", x);
}
