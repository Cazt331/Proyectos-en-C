#include <stdio.h>
#include <stdlib.h>

int main()
{
    float y,x,a,b,z;
    printf("\n\tINGRESA UN NUMERO: ");
    scanf("%f",&y);
    x=1;
    b=0;
    printf("\n\tTABLA DE MULTIPLICAR DEL NUMERO: %.2f",y);
    while(x<=10){
        a=y*x;
        printf("\n\t%.2f  *  %.f  =   ",y,x,z);
        scanf("%f",&z);
        if(z==a){
            printf("\tVALOR CORRECTO ");
            b++;
            }
        else if (z!=a){
            printf("\tLO SIENTO SE HA EQUIVOCADO.EL VALOR CORRECTO ES %.2f",a);
            }
        printf("\n");
        x++;
        getchar();
    }
    if(b<10){
            printf("\n\tHAS ACERTADO %.f DE 10",b);
            }
    else if(b==10){
        printf("\n\tFELICIDADES HAS RESPONDIDO TODAS BIEN");
        printf("\n\tHAS ACERTADO %.f DE 10",b);
    }
    printf("\n------------------------------------------------");
    return 0;
}
