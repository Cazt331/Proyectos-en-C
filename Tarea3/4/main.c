#include <stdio.h>
#include <stdlib.h>

int main()
{
    float y,x,a,b,c;
    printf("\n\tINGRESA UN NUMERO: ");
    scanf("%f",&y);
    x=1;
    printf("\n\tTABLA DE MULTIPLICAR DEL NUMERO: %.2f",y);
    while(x<=10){
        a=y*x;
        printf("\n\t%.2f  *  %.f  =  %.2f ",y,x,a);
        x++;
    }
    printf("\n------------------------------------------------");
    return 0;
}
