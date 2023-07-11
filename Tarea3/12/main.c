#include<conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont,n,primo;
    for(n=2;n<=100;n++){
        primo=1;
        cont=2;
        while(cont<=n/2 && primo){
                if(n%cont==0)
                primo=0;
                cont++;
                }
                if(primo)
                    printf("\n\t%d",n);
    }

    printf("\n------------------------------");
    return 0;
}
