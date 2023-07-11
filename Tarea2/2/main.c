#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("\n\tINGRESE UN NUMERO: ");
    scanf("%d",&a);
    printf("\n\tINGRESE UN SEGUNDO NUMERO: ");
    scanf("%d",&b);
    if(a<b){
        printf("\n\tEL NUMERO MAYOR ES: %d",b);
        printf("\n----------------------------------------------");
    }
    else if(a>b){
        printf("\n\tEL NUMERO MAYOR ES: %d",a);
        printf("\n----------------------------------------------");
    }
    return 0;
}
