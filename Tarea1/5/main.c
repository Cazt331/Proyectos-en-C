#include <stdio.h>
#include <stdlib.h>
#define gravedad 6.67e-11
int main()
{
    float M1,M2,R,F;
    printf("Poner el valor de la masa 1:");
    scanf("%f",&M1);
    printf("Poner el valor de la masa 2:");
    scanf("%f",&M2);
    printf("Poner la distancia que se encuentra:");
    scanf("%f",&R);
    F=gravedad*(M2*M1)/(R*R);
    printf("La fuerza de atraccion gravitacional es:%e",F);
    return 0;
}
