#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x,y;
    printf("\n\tINTRODUCIR DOS CARACTERES X:");
    printf("\n\tCARACTER 1: ");
    scanf("%c",&x);
    fflush(stdin);
    printf("\n\tCARACTER 2. ");
    scanf("%c",&y);
    printf("\n\t ORDEN ALFABETICO");
    if(x>y){
        printf("\n\t%c",y);
        printf("\n\t%c",x);
    }
    if(y>x){
        printf("\n\t%c",x);
        printf("\n\t%c",y);
    }
    printf("\n\tORDEN NUMERICO");
    printf("\n");
    if(x>y);{
        printf("\n\t%c = &d",y,y);
        printf("\n\t%c = %d",x,x);
    }
    printf("\n-------------------------------------------------");
    return 0;
}
