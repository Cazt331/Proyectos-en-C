#include <stdio.h>
#include <stdlib.h>
void menu();
void sumar();
void restar();
void multiplicar();
void dividir();

int main()
{
    menu();
    return 0;
}

void menu(){
    int opc;
    printf("\n\t1.SUMA");
    printf("\n\t2.RESTA");
    printf("\n\t3.MULTIPLICACION");
    printf("\n\t4.DIVISION");
    printf("\n\t5.SALIR\n");
    printf("\n\t Coloca el numero que seleccionastes: ");
    scanf("%i",&opc);

    switch(opc){
        case 1: sumar();break;
        case 2: restar();break;
        case 3: multiplicar();break;
        case 4: dividir();break;
        case 5: break;
    }
}

void sumar(){
   float a,b,suma=0;
   printf("\n\tDigite el primer numero: ");
   scanf("%f",&a);
   printf("\tDigite el segundo numero: ");
   scanf("%f",&b);
   suma=a+b;
   printf("\n\t La suma es: %.2f",suma);
   printf("\n----------------------------------------------------------------");
}

void restar(){
    float a,b,resta=0;
    printf("\n\tDigite el primer numero: ");
    scanf("%f",&a);
    printf("\tDigite el segundo numero: ");
    scanf("%f",&b);
    resta=a-b;
    printf("\n\tLa resta es: %.2f",resta);
    printf("\n----------------------------------------------------------------");
}

void multiplicar(){
    float a,b,mult=0;
    printf("\n\tDigite el primer numero: ");
    scanf("%f",&a);
    printf("\tDigite el segundo numero: ");
    scanf("%f",&b);
    mult=a*b;
    printf("\n\tEl resultado es: %.2f",mult);
    printf("\n----------------------------------------------------------------");
}

void dividir(){
    float a,b,div=0;
    printf("\n\tDigite el primer numero: ");
    scanf("%f",&a);
    printf("\tDigite el segundo numero: ");
    scanf("%f",&b);
    div=a/b;
    printf("\n\tEl resultado es: %.2f",div);
    printf("\n----------------------------------------------------------------");
}
