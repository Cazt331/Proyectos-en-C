#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1;
    char letra='a',b;
    while(cont<=10){
        getchar();
        printf("\n\tINGRESE UN CARACTER: ");
        scanf("%c",&b);
        if(letra==b){
            cont++;
            }
         else if(letra!=b){
            printf("\n\tNO ES LA LETRA a");
            }
    }
    printf("\n-----------------------------------------------");
    return 0;
}
