#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,resultado=0,signo;
    int i=1;
    printf("\n\tINTRODUCE EL VALOR DE S: ");
    scanf("%f",&s);
    while(i<=s){
        if(i%2==0){
            signo=-1;
        }
        else{
            signo=1;
        }
        printf("\n\tCICLO %d",i);
        resultado=resultado+((-1*signo)*1/(i*i));
        i++;
    }
    printf("\n\tEL VALOR DE LA SUMATORIA ES: %f",resultado);
    printf("\n-------------------------------------------------");
    return 0;
}
