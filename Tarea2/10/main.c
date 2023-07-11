#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,y,OPC;
    float r,t,v,k,h;
    printf("\tINGRESAR EL VALOR DE x: ");
    scanf("%d",&x);
    printf("\tINGRESAR EL VALOR DE y: ");
    scanf("%d",&y);
    printf("\n\tESCOJE UNA DE LAS SIGUIENTES OPCIONES \n");
    printf("\n\t1.COMPROBAR SI EL PUNTO ES DE UNA CIRCUNFERENCIA CON RADIO 10 Y CENTRO EN EL ORIGEN.");
    printf("\n\t2.EN QUE CUADRANTE SE ENCUENTRA EL PUNTO.");
    printf("\n\t3.PASAR LAS COORDENADAS DE FORMA CARTESIANA A POLAR.");
    printf("\n\t4.SALIR.");
    printf("\n\tOPCION: ");
    scanf("%i",&OPC);
    if(OPC==1){
        r=sqrt((x*x)+(y*y));
        if(r==10){
            printf("\n\tEL PUNTO PERTENECE A UNA CIRCUNFERENCIA CON RADIO 10 Y CENTRO EN EL ORIGEN");
            printf("\n");
            }
         else if (r!=10){
            printf("\n\tEL PUNTO NO PERTENCE A UNA CIRCUNFERENCIA CON RADIO 10");
            printf("\n");
            }
        }
    else if (OPC==2){
         if(x>=0 && y>=0){
            printf("\n\tEL PUNTO SE ENCUENTRA EN EL PRIMER CUADRANTE");
            printf("\n");
         }
         else if(x<0 && y>=0){
            printf("\n\tEL PUNTO SE ENCUENTRA EN EL SEGUNDO CUADRANTE");
            printf("\n");
         }
         else if(x<0 && y<0){
            printf("\n\tEL PUNTO SE ENCUENTRA EN EL TERCER CUADRANTE");
            printf("\n");
         }
         else if(x>=0 && y<0){
            printf("\n\tEL PUNTO SE ENCUENTRA EN EL CUARTO CUADRANTE");
            printf("\n");
         }
        }
    else if(OPC==3){
        r=sqrt((x*x)+(y*y));
        k=y;
        h=x;
        v=atan(k/h);
        printf("\n\tEL MODULO ES: %.2f Y EL ANGULO ES DE: %.2f",r,v);
        printf("\n");
        }
    else if(OPC==4){
        return;
    }
    printf("\n-----------------------------------------------------------------------------");
    return 0;
}
