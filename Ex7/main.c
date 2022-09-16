#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  ################################################");
    printf("\n ##                                              ##");
    printf("\n##   Peso de uma pessoa caso engorde ou emagreca  ##");
    printf("\n ##                                              ##");
    printf("\n  ################################################\n\n");

    float peso, p_15, p_20;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    p_15 = peso + (peso * 0.15);
    p_20 = peso - (peso * 0.20);

    printf("\nPeso caso engorde 15 por cento de seu peso: %0.2fKG", p_15);
    printf("\nPeso caso emagreca 20 por cento de seu peso: %0.2fKG", p_20);
    return 0;
}
