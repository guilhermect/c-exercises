#include <stdio.h>

main(){
    float n, x;
    printf("Digite a temperatura em kelvin: ");
    scanf("%f",&n);
    x = n + 273.15;
    printf("temperatura em c : %.2f", x);

}
