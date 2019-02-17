#include<stdio.h>
#include<stdlib.h>

int main(){

    float altura,raio,volume;

    printf("Altura do cilindro: ");
    scanf("%f",&altura);

    printf("Raio do cilindro: ");
    scanf("%f",&raio);

    volume=3.141592 * (raio*raio) * altura;

    printf("Volume do cilindro: %.2f",volume);

    return 0;
}
