#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius,ft;
    printf("Poner los grados centigrados:");
    scanf("%f",&celsius);
    ft=((1.8*celsius)+32);
    printf("%.2f Grados celsius son %.2f grados Fahrenheit",celsius,ft);
    return 0;
}
