#include<stdlib.h>
#include<stdio.h>


int main()
{
   int seg, horas, min, resto, resto2;

   printf("Digite a hora em segundos:\n");
   scanf("%d",&seg);

   horas = seg/3600;

   resto=seg%3600;

   min=resto/60;

   seg=resto%60;


   printf("\n\nHora: %dh\n",horas);
   printf("Min: %dmin\n",min);
   printf("Seg: %ds", seg);

}
