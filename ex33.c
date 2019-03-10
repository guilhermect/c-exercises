#include <stdio.h>

main(){
    float c, f;

    printf("Digite a temperatura em Fº: ");
    scanf("%f",&f);

    c = 5 * (f - 32)/9;
    printf("Temperatura em Cº: %.2f", c);

}
