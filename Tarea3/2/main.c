#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int base, exponente, resultado, i;
    i=1;
    resultado = 1;
    printf("\n\tIntroduzca un numero de base: ");
    scanf("%d", &base);
    printf("\n\tIntroduzca un numero de exponente: ");
    scanf("%d", &exponente);
    while(i<=exponente){
        resultado = resultado * base;
        i++;
    }
    printf("\n\tEl resultado es: %d",resultado);
    printf("\n--------------------------------------");
    return 0;
}
