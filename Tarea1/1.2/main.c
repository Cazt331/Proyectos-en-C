#include <stdio.h>
#include <stdlib.h>

int main()
{
    float e,pst;
    printf("Pon la cantidad de euros:");
    scanf("%f",&e);
    pst=e/166.386;
    printf("La cantidad en pesetas es:%f",pst);
    return 0;
}
