#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,u,v;
    printf("\n\tINTRODUZCA EL VALOR DE x: ");
    scanf("%f",&x);
    printf("\n\tINTRDUCA EL VALOR DE y: ");
    scanf("%f",&y);
    if(x*y<1){
        u=10;
    }
    else{
        u=y*y;
    }
    if(x*y<1){
        v=1;
    }
    else{
        v=y*y;
    }
    printf("\n\tU = %f",u);
    printf("\n\tV = %f",v);
    printf("\n------------------------------------");
    return 0;
}
