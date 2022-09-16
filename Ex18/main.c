#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  ##############################");
    printf("\n ##                            ##");
    printf("\n##  Calcular o terceiro angulo  ##");
    printf("\n ##                            ##");
    printf("\n  ##############################\n\n");

    float ang1, ang2, ang3;

    printf("Informe o primeiro angulo: ");
    scanf("%f", &ang1);
    printf("Informe o segundo angulo: ");
    scanf("%f", &ang2);

    ang3 = 180 - (ang1 + ang2);

    printf("A medida do terceiro angulo e = %f", ang3);
    return 0;
}
