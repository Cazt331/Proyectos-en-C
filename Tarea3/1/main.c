#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a=1;
    while(a<=100){
        printf("%i ",a);
        a=a+1;
        if(a==11||a==21||a==31||a==41||a==51||a==61||a==71||a==81||a==91){
        printf("\n");
        }
    }
    printf("\n");
    printf("\n\tFin del programa");
    printf("\n-----------------------------------");
    return 0;
}
