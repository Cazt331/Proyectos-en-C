#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char letra;
    short int numero2;
    long int numero3;
    float numero4;
    double numero5;
    printf("\n\n Bytes de la variable int: %d bytes",sizeof(numero));
    printf("\n\n Bytes de la variable char: %d bytes",sizeof(letra));
    printf("\n\n Bytes de la variable short int: %d bytes",sizeof(numero2));
    printf("\n\n Bytes de la variable long int: %d bytes",sizeof(numero3));
    printf("\n\n Bytes de la variable float: &d",sizeof(numero4));
    printf("\n\n Bytes de la variable double: &d",sizeof(numero5));
    return 0;
}
