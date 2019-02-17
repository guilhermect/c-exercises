#include<stdio.h>
#include<stdlib.h>

int main(){

    float raio;
    float area;

    printf("Digite o raio do circulo em cm: ");
    scanf("%f",&raio);

    area = 3.141592*(raio*raio);

    printf("Area do circulo: %.2fcm",area);

    return 0;
}
