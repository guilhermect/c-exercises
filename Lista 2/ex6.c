#include <stdio.h>
#include <stdlib.h>


int main(){

    int v[5], i;
    int *p;

    for(i=0; i<5; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &v[i]);
    }

    p=&v;

    printf("\n");

    for(i=0; i<5; i++){
        printf("%d ", p[i]);
    }

    printf("\n");


    printf("\n");

    for(i=0; i<5; i++){
        printf("%d ", p[i]*2);
    }

    printf("\n\n");

}
