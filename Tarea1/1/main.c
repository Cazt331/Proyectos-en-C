#include <stdio.h>
#include <stdlib.h>

int main()
{
    float euros,pst;
    printf("Pon el  valor de las pesetas:");
    scanf("%f",&pst);
    euros=166.386*pst;
    printf("\nLa cantidad en euros es: %.2f",euros);
    return 0;
}
