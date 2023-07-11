#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_logico;
    printf("\n\tValores logicos de la siguiente expresiones");
    valor_logico=(3>5);
    printf("\n\t(3>5) es %f", valor_logico);
    valor_logico=(5>3);
    printf("\n\t(5>3) es %f",valor_logico);
    valor_logico=(15>3*5);
    printf("\n\t(15>3*5) es %f",valor_logico);
    valor_logico=!(5==3);
    printf("\n\t!(5==3)es %f",valor_logico);
    printf("\n--------------------------------------------------");
    return 0;
}
