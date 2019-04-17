#include <stdio.h>

main(){
    float c, f;

    printf("Digite a temperatura em Cº: ");
    scanf("%f",&c);
    f = c * (9/5)+32;
    printf("temperatura em f: %.2f", f);

}
