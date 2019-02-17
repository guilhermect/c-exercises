#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    float a, b, hipotenusa;

    printf("Cateto A: ");
    scanf("%f",&a);

    printf("Cateto B: ");
    scanf("%f",&b);

    hipotenusa=sqrt((a*a) + (b*b));

    printf("Hipotenusa: %.2f",hipotenusa);

    return 0;
}
