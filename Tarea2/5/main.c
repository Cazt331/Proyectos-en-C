#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f,x,y;
    printf("\n\tINGRESAR EL VALOR DE A: ");
    scanf("%f",&a);
    printf("\n\tINGRESAR EL VALOR DE B: ");
    scanf("%f",&b);
    printf("\n\tINGRESAR EL VALOR DE C: ");
    scanf("%f",&c);
    printf("\n\tINGRESAR EL VALOR DE D: ");
    scanf("%f",&d);
    printf("\n\tINGRESAR EL VALOR DE E: ");
    scanf("%f",&e);
    printf("\n\tINGRESAR EL VALOR DE F: ");
    scanf("%f",&f);
    x=(((c*e)-(b*f))/((a*e)-(b*d)));
    y=(((a*f)-(c*d))/((a*e)-(b*d)));
    printf("\n\tEL VALOR DE x ES: %.2f",x);
    printf("\n\tEL VALOR DE y ES: %.2f",y);
    printf("\n----------------------------------------------");
    return 0;
}
