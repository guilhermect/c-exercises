#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){

    char string[20];
    int i;

    printf("Digite uma frase: ");
    gets(string);

    for(i = 0; i < sizeof(string); i++){
      string[i] = tolower(string[i]);
    }

    for(i=0; i<strlen(string); i++){

        string[i] = string[i]-32;
    }

    printf("String: %s\n\n", string);

    system("PAUSE");
    return 0;
}
