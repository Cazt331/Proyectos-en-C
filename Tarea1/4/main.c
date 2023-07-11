#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415

int main()
{
    float r,d,v;
    printf("Cuanto mide el radio del circulo:");
    scanf("%f",&r);
    d=2*r;
    v=pi*(r*r);
    printf("El diametro es:%.2f",d);
    printf("\nEl area es:%.2f",v);
    return 0;
}
