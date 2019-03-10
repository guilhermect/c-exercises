#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    float x, y, cord;
    printf("Digite o valor de x: ");
    scanf("%f",&x);
    printf("Digite o valor de y: ");
    scanf("%f",&y);
    cord = sqrt(pow(x, 2) + pow(y, 2));
    printf("Distancia: %.2f", cord);
}
