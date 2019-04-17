#include<stdlib.h>
#include<stdio.h>

int main(){

    float valorHora, total;
    int horasTrabalhadas;

    printf("Valor por hora: R$ ");
    scanf("%f", &valorHora);

    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    total = (valorHora * horasTrabalhadas) + ((valorHora * horasTrabalhadas) * 0.1);;

    printf("Valor total: R$%.2f",total);


    return 0;
}
