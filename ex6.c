
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1=0, n2=0, n3=0, n4=0, media=0;

    printf("Nota 1: \n");
    scanf("%f",&n1);

    printf("Nota 2: \n");
    scanf("%f",&n2);

    printf("Nota 3: \n");
    scanf("%f",&n3);

    printf("Nota 4: \n");
    scanf("%f",&n4);

    media = (n1+n2+n3+n4)/4;

    printf("Media = %2.f", media);


    return 0;
}

