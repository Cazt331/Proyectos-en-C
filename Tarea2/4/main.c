#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R,I,V;
    printf("\n\tPONER EL VALOR DE LA RESISTENCIA: ");
    scanf("%d",&R);
    printf("\n\tPONER EL VALOR DE LA CORRIENTE: ");
    scanf("%d",&I);
    if (R>0 && R<=1000){
        V=R*I;
        printf("\n\tLA CAIDA DE POTENCIAL ES: %d",V);
        }
    else{
        printf("\n\tEL VALOR DE LA RESISTENCIA ESTA FUERA DE LOS VALORES PERMITIDOS");
       }
    printf("\n-------------------------------------------------------------------------------");
    return 0;
}
