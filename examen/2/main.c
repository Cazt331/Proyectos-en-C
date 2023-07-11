#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,y[10],x[10];
    float sum1;
    printf("Colocar la cantidad de numeros n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\nColocar el numero de x[%d]= ",i);
        scanf("%d",&x[i]);
    }
    for(i=1;i<=n;i++){
        printf("\nColocar el numero de y[%d]= ",i);
        scanf("%d",&y[i]);
    }
    sum1=0;
    for(i=1;i<=n;i++){
        sum1=sum1+pow((pow(x[i],2)-pow(y[i],2)),2);
    }
    sum1=sqrt(sum1);
    printf("\nsum1= %f",sum1);
    return 0;
}
