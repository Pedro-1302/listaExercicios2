#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  ##################################");
    printf("\n ##                                ##");
    printf("\n##  Calculo da area de um quadrado  ##");
    printf("\n ##                                ##");
    printf("\n  ##################################\n\n");

    float sqr, lado;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    sqr = lado * lado;

    printf("\nA area do quadrado e: %.f", sqr);
    return 0;
}
