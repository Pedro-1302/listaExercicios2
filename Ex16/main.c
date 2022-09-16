#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main()
{
    printf("\n  ######################################################################");
    printf("\n ##                                                                    ##");
    printf("\n##  Calcular comprimento, area e volume de uma esfera a partir do raio  ##");
    printf("\n ##                                                                    ##");
    printf("\n  ######################################################################\n\n");

    float raio, c, a, v;

    printf("Informe o raio: ");
    scanf("%f", &raio);

    c = 2.0 * PI * raio;
    a = PI * (raio * raio);
    v = 3.0 / 4.0 * PI * (raio * raio * raio);

    printf("\n\nO valor do comprimento da esfera e: %0.2f", c);
    printf("\nO valor do area da esfera e: %0.2f", a);
    printf("\nO valor do volume da esfera e: %0.2f\n\n", v);
    return 0;
}
