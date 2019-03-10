#include <stdio.h>

main(){
    float n, x;
    printf("Digite um valor em metros cubicos: ");
    scanf("%f",&n);
    x = 1000*n;
    printf("em litros: %.2f", x);

}
