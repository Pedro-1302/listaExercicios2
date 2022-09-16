#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  #################################   ####        ##       ####       ####");
    printf("\n ##                               ##     #  # #  ###  # #     #  ###  #  #");
    printf("\n##  Multiplicacao de tres numeros  ## ####   #     #   #   ####       ####");
    printf("\n ##                               ##     #  # #    #  # #     #  ###     # ");
    printf("\n  #################################   ####         #       ####       ####\n\n");

    float n1, n2, n3, m;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    printf("Digite um terceiro numero: ");
    scanf("%f", &n3);

    m = n1 * n2 * n3;

    printf("\nO valor de sua multiplicacao e = %.f", m);
    return 0;
}
