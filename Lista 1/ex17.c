#include<stdio.h>
#include<stdlib.h>

int main(){

   int dias;
   int liquido, desconto;

   printf("Numero de dias trabalhados: ");
   scanf("%d", &dias);

   desconto = (30*dias)*0.08;

   liquido=30*dias - desconto;

   printf("Valor a ser pago: %d",liquido);

   return 0;
}
