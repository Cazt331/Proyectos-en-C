#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,b,fact;
    fact=1;
    printf("\n\tINGRESE UN NUMERO: ");
    scanf("%d",&b);
    for(i=1;i<=b;i=i+1){
        fact=fact*i;
    }
    printf("\n\tEL FACTORIAL DEL NUMERO DADO ES: %d",fact);
    printf("\n---------------------------------------------");
    return 0;
}
