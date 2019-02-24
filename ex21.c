#include<stdlib.h>
#include<stdio.h>

int main(){


    float altDegrau,altDesejada;

    printf("Altura do degrau: ");
    scanf("%f", &altDegrau);

    printf("Altura desejada: ");
    scanf("%f", &altDesejada);


    printf("\n\nVoce precisara subir %.0f degraus para chegar na altura desejada.",altDesejada/altDegrau);

    return 0;
}
