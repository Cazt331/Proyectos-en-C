#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sun;
    sun=0;
    for((i=1); i<=100; i++)
    {
        printf("\n%d",i);
        sun=sun+i;
    }
    printf("\nL a suma es: %d",sun);
    return 0;
}

