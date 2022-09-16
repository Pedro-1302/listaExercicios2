#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  ###########################   ####      #  ####         ##");
    printf("\n ##                         ##     #     #      #   ###  ###");
    printf("\n##  Divisao de dois numeros  ## ####    #    ####          #");
    printf("\n ##                         ##     #   #        #   ###    #");
    printf("\n  ###########################   ####  #      ####          #\n\n");

    float num, num2, d;

    printf("Digite um numero: ");
    scanf("%f", &num);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    d = num / num2;

    printf("\nO valor e = %.f", d);
    return 0;
}
