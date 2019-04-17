#include<stdlib.h>
#include<stdio.h>

int inverter(int n)
{
   int ret=0;
   int i=1;

   while(i<=n)
   {
       ret*=10;
       ret+=(n%(i*10)-n%i)/i;
       i*=10;
   }
   return ret;
}

main()
{
   int num, rev;
   printf("Digite um numero inteiro de 3 digitos:\n");
   scanf("%d",&num);
   rev = inverter(num);
   printf("Numero invertido: %d", rev);
   getch();
}
