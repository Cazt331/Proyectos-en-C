#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primero,ultimo,i;
    printf("\n\tINSERTAR EL PRIMER CARACTER Y EL ULTIMO: ");
    scanf("%c %c",&primero, &ultimo);
    i=primero;
    while(i<=ultimo){
        printf("\n\tDEC: %d  OCTAL: %o  HEX:  %x  CAR:  %c/n",i,i,i,i);
        i++;
    }
    return 0;
}
