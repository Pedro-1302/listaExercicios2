#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  ###################################################");
    printf("\n ##                                                 ##");
    printf("\n##  Quantos salarios minimos seu funcionario ganha?  ##");
    printf("\n ##                                                 ##");
    printf("\n  ###################################################\n\n");

    float sal_min, sal_func, qtd;

    printf("Informe o salario minimo hoje: ");
    scanf("%f", &sal_min);
    printf("Informe o salario de seu funcionario: ");
    scanf("%f", &sal_func);

    qtd =  sal_func / sal_min;

    printf("Ele possui em media %0.1f salarios minimos", qtd);
    return 0;
}
