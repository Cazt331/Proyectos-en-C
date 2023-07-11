#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float a,b,c;
    double discriminante;
    printf("\n\tINGRESAR EL VALOR DE A: ");
    scanf("%f",&a);
    printf("\n\tINGRESAR EL VALOR DE B: ");
    scanf("%f",&b);
    printf("\n\tINGRESAR EL VALOR DE C: ");
    scanf("%f",&c);
    discriminante=(b*b)-4*a*c;
    printf("\n\tdiscriminante: %f",discriminante);
    if (a==0){
        printf("\n\tx= %f",-c/b);
    }
    else if(discriminante<0){
        discriminante=discriminante*-1;
        printf("\n\tx1= %f + %f i",-b/2*a,sqrt(discriminante)/2*a);
        printf("\n\tx2= %f ",(-b-sqrt(discriminante)/2*a));
    }
    printf("\n----------------------------------------------");
    return 0;
}
