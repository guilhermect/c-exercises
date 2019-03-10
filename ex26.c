#include<stdlib.h>
#include<stdio.h>


int main()
{
   int seg, hora, min, duracao;

   printf("Horario de inicio da experiencia:\n\n");

   printf("Digite a hora: ");
   scanf("%d",&hora);

   printf("Digite os minutos: ");
   scanf("%d",&min);

   printf("Digite os segundos: ");
   scanf("%d",&seg);

   printf("Duracao da experiencia em segundos: ");
   scanf("%d",&duracao);

    hora = hora - (duracao/60);
    min = min- (hora%60);
    seg = seg - (min%60);

    printf("Duracao: %dh : %dm : %ds",hora, min, seg);



}
