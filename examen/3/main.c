#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,a,x[10],y[10],z[10],i;
    printf("\nNumero de datos a ingresar: ");
    scanf("%d",&n);
    printf("\nEl valor de a: ");
    scanf("%d",&a);
    for(i=1;i<=n;i++){
        printf("Agregar el valor de x[%d]: ",i);
        scanf("%d",&x[i]);
    }
    printf("----------------------------------------\n");
    for(i=1;i<=n;i++){
        printf("Agregar el valor de y[%d]: ",i);
        scanf("%d",&y[i]);
    }
    if(a>0){
        for(i=1;i<=n;i++)
            z[i]=x[i]+y[i];
        }
        else if(a<0){
            for(i=1;i<=n;i++)
                z[i]=x[i]-y[i];
        }
        else if(a==0){
            for(i=1;i<=n;i++)
                z[i]=x[i]*y[i];
        }
    for(i=1;i<=n;i++){
        printf("\n\t%d %d %d",x[i],y[i],z[i]);
    }
    return 0;
}
