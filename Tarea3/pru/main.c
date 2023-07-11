#include <stdio.h>
#include <stdlib.h>

int main()
{
    char car;
    int voc = 0;

    printf("Programa que cuenta vocales y lee hasta ?\n");

    do
    {
        printf("Ingrese un caracter: ");
        scanf("%c", &car);getchar();

        if (car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u')
            voc++;

    }while (car != '?');

    printf("\nHay %d vocales", voc);
}
