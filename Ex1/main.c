#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  #############################    ####        ##       #####");
    printf("\n ##                           ##      #       ###  ###      #");
    printf("\n##  Subtracao de dois numeros  ##  #### #####   #       #####");
    printf("\n ##                           ##      #         #  ###  #    ");
    printf("\n  #############################    ####         #       #####\n\n");

    float a, b, s;

    printf("Digite um numero: ");
    scanf("%f", &a);
    printf("Digite outro numero: ");
    scanf("%f", &b);

    s = a - b;

    printf("\nO valor de sua subtracao e = %.f", s);
    return 0;
}
