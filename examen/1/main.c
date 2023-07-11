#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x[10],y[10],i,n;
    printf("Poner la cantidad de numeros n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Colocar el valor de x[%d]= ",i);
        scanf("%d",&x[i]);
    }
    for(i=1;i<=n;i++){
        y[i]=pow(x[i],3)+4.0*pow(x[i],2)+2.0*x[i]+1.0;
    }
    for(i=1;i<=n;i++){
        printf("\nx[%d]= %d ; y[%d]= %d",i,x[i],i,y[i]);
    }
    return 0;
}
