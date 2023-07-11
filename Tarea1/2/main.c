#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Ingrese un caracter:");
    scanf("%c",&x);
    printf("El valor de caracter x=%c",x);
    printf("\n");
    printf("El valor de %c en decimal =%d",x,x);
    printf("\n");
    printf("El valor de %C en Hexadecimal=%x",x,x);
    return 0;
}
