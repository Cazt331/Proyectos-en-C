#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,r;
    printf("\n\tINGRESA UN NUMEROS ENTERO: ");
    scanf("%d",&a);
    printf("\n\tINGRESA EL SEGUNDO NUMERO ENTERO: ");
    scanf("%d",&b);
    printf("\n\tINGRESA EL TERCER NUMERO ENTERO: ");
    scanf("%d",&c);
    if(a<0){
        r=a*b*c;
        printf("\n\tLA MULTIPLICACION DE LOS 3 NUMEROS ENTEROS ES: %d",r);
    }
    else if (a>=0){
        r=a+b+c;
        printf("\n\tLA SUMA DE LOS 3 NUMEROS ENTEROS ES: %d",r);
    }
    printf("\n---------------------------------------------------------------------");
    return 0;
}
