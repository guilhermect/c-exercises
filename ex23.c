#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, invertido = 0;

   printf("Digite um numero: ");
   scanf("%d", &n);

   while (n != 0)
   {
      invertido = invertido * 10;
      invertido = invertido + n%10;
      n= n/10;
   }

   printf("\n\nNumero invertido:  %d\n", invertido);

}

