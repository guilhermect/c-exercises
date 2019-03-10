#include <stdio.h>

main(){

    float n, x;

    printf("Digite a temperatura: ");
    scanf("%f",&n);

    x = n - 273.15;
    printf("Temperatura em kelvin : %.2f", x);

}
