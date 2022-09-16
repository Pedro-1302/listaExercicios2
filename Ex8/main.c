#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  #####################################################");
    printf("\n ##                                                   ##");
    printf("\n##  Convesor KG em G e Calculo da Area de um Trapezio  ##");
    printf("\n ##                                                   ##");
    printf("\n  #####################################################\n\n");

    float p_kg, p_gramas, a, b_ma, b_me, h;

    printf("Digite o peso em KG: ");
    scanf("%f", &p_kg);

    p_gramas = p_kg * 1000;

    printf("\nO peso convertido em gramas e: %0.2fg\n", p_gramas);

    printf("\nDigite a base maior do trapezio: ");
    scanf("%f", &b_ma);
    printf("\nDigite a base menor do trapezio: ");
    scanf("%f", &b_me);
    printf("\nDigite a altura do trapezio: ");
    scanf("%f", &h);

    a = ((b_ma + b_me) * h) / 2;

    printf("A area do trapezio e: %0.1f", a);
    return 0;
}
