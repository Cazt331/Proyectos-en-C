#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[100],i,menor,n;
    printf("Promedio de una lista de n numeros\n n= ");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        printf( "Numero %d:\t", i+1);
        scanf("%d",&x[i]);
    }
    for (i=0; i<n; i++){
        if (menor>x[i]){
            menor=x[i];
        }
    }
    printf ("\nEl menor numero es: %d", menor);
    return 0;
}
