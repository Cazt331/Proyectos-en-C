#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sun;
    i=1;
    sun=0;
    while(i<=100)
    {
        printf("\n%d",i);
        sun=sun+i;
        i++;
    }
    printf("\nL a suma es: %d",sun);
    return 0;
}
