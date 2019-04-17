#include<stdio.h>
#include<stdlib.h>

int main(){

  int num,aux,fator=1;

  printf("Digite um numero: ");

  scanf("%d",&num);

  aux=num;

  while(aux){

      aux=aux/10;

      fator = fator*10;

  }

  printf("Numeros digitados: ");

  while(fator>1){

      printf("fator: %d",fator);

      fator = fator/10;

      printf("\n%d\n ",num/fator);

      num = num % fator;

  }

  return 0;

}
