#include <stdio.h>
#include <stdlib.h>
#define MAX_CADENA 100

int main()
{
    char cadena[MAX_CADENA];
    int i,j;
    int vocales[5]={0};
    char tvocales[]={'a','e','i','o','u'};
    printf("\n\tINTRODUCE UNA CADENA DE CARACTERES: ");
    gets(cadena);
    i=0;
    while(cadena[i]!='\0'){
        for(j=0;j<5;j++)
        if(cadena[1]==tvocales[j])
            vocales[j]++;
            i++;
    }
    for(i=0;i<5;i++){
        printf("\n\tLa %c aparece en %d veces",tvocales[i],vocales[i]);
    }
    return 0;
}

