#include <stdio.h>
#include <stdlib.h>

int main()
{
    float o,a,f;
    printf("Dar el a�o actual:");
    scanf("%f",&o);
    printf("Cuantos a�os tienes:");
    scanf("%f",&a);
    f=2010+(a-o);
    printf("En el 2010 tenias:%f",f);
    return 0;
}
