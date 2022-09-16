#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  #################################");
    printf("\n ##                               ##");
    printf("\n##  Calculo da area de um losango  ##");
    printf("\n ##                               ##");
    printf("\n  #################################\n\n");

    float diag_ma, diag_me, a;

    printf("Informe a diagonal maior: ");
    scanf("%f", &diag_ma);
    printf("Informe a diagonal menor: ");
    scanf("%f", &diag_me);

    a = (diag_ma * diag_me) / 2;

    printf("\nA area do losango = %0.1f", a);
    return 0;
}
