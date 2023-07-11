#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f,g,h,i,j,k;
    printf("Da un numero que quieras saber su tabla de multiplicar:");
    scanf("%f",&a);
    b=a*1;
    c=a*2;
    d=a*3;
    e=a*4;
    f=a*5;
    g=a*6;
    h=a*7;
    i=a*8;
    j=a*9;
    k=a*10;
    printf("Tabla de multiplicar del numero:%.1f",a);
    printf("\n\n\t%.1f * 1 = %.1f ",a,b);
    printf("\n\t%.1f * 2 = %.1f ",a,c);
    printf("\n\t%.1f * 3 = %.1f ",a,d);
    printf("\n\t%.1f * 4 = %.1f ",a,e);
    printf("\n\t%.1f * 5 = %.1f ",a,f);
    printf("\n\t%.1f * 6 = %.1f ",a,g);
    printf("\n\t%.1f * 7 = %.1f ",a,h);
    printf("\n\t%.1f * 8 = %.1f ",a,i);
    printf("\n\t%.1f * 9 = %.1f ",a,j);
    printf("\n\t%.1f * 10 = %.1f ",a,k);
    return 0;
}
