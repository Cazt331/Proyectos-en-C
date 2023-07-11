#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415

int main()
{
    int ops,m,k,h,c;
    printf("\n\tESCOJE UNA DE LAS SIGIENTES OPCIONES");
    printf("\n\t1. CALCULO DEL AREA DE UN CUADRADO");
    printf("\n\t2. CALCULO DEL AREA DE UN CIRCULO");
    printf("\n\t3. CALCULO DEL AREA DE UN TRIANGULO EQUILATERO");
    printf("\n\tOPCION: ");
    scanf("%i",&ops);
    switch(ops){
        case 1:
        (ops==1);
        printf("\n\tCUANTO MIDE EL LADO DEL CUADRADO: ");
        scanf("%d",&c);
        h=c*c;
        printf("\n\tEL AREA DEL CUADRADO ES: %d",h);
        break;
        case 2:
        (ops==2);
        printf("\n\tCUANTO MIDE EL RADIO: ");
        scanf("%d",&m);
        k=(pi*(m*m));
        printf("\n\tEL AREA DE UN CIRCULO ES: %d",k);
        break;
        case 3:
        (ops==3);
        printf("\n\tINGRESAR EL VALOR DE UN LADO DEL TRIANGULO: ");
        scanf("%d",&c);
        m=((sqrt(3)*(c*c))/4);
        printf("\n\tEL AREA DEL TRIANGULO EQUILATERO ES: %d",m);
        break;
        default:
            printf("\n\tERROR");

        }
    printf("\n-------------------------------------------------------------");
    return 0;
}
