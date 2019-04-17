#include <stdio.h>

main(){
    float n, x;
    printf("Digite um valor em metros quadrados: ");
    scanf("%f",&n);
    x = n * 0.000247 ;
    printf("em acres: %.2f", x);

}
