#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415

int main()
{
    int ops;
    float c,h,k,m;
    printf("\n\tESCOJE UNA DE LAS SIGIENTES OPCIONES");
    printf("\n\t1. CALCULO DEL AREA DE UN CUADRADO");
    printf("\n\t2. CALCULO DEL AREA DE UN CIRCULO");
    printf("\n\t3. CALCULO DEL AREA DE UN TRIANGULO EQUILATERO");
    printf("\n\tOPCION: ");
    scanf("%i",&ops);
    if(ops==1){
        printf("\n\tCUANTO MIDE EL LADO DEL CUADRADO: ");
        scanf("%f",&c);
        h=c*c;
        printf("\n\tEL AREA DEL CUADRADO ES: %.2f",h);
        printf("\n");
        }
    else if(ops==2){
         printf("\n\tCUANTO MIDE EL RADIO: ");
         scanf("%f",&m);
         k=(pi*(m*m));
         printf("\n\tEL AREA DE UN CIRCULO ES: %.2f",k);
         printf("\n");
        }
    else if(ops==3){
        printf("\n\tINGRESAR EL VALOR DE UN LADO DEL TRIANGULO: ");
        scanf("%f",&c);
        m=((sqrt(3)*(c*c))/4);
        printf("\n\tEL AREA DEL TRIANGULO EQUILATERO ES: %f",m);
        printf("\n");
        }
        printf("\n-------------------------------------------------------------");
    return 0;
}
