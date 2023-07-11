#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10];
    int i,mayor=0,n;
    printf("Promedio de una lista de n numeros\n n= ");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        printf( "Numero %d:\t", i+1);
        scanf("%d",&x[i]);
    }
    for (i=0; i<n; i++){
        if (x[i]> mayor){
            mayor=x[i];
        }
    }
    printf("\nEl mayor numero es: %d\n", mayor);
}
