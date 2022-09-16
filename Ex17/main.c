#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d1, d2, p;

    printf("Informe o comprimento de seu comodo: ");
    scanf("%f", &d1);
    printf("Informe a largura de seu comodo: ");
    scanf("%f", &d2);

    p = (d1 * d2) * 18;

    printf("\nSeu comodo tem %0.2f metros quadrados", d1 * d2);
    printf("\nA potencia de iluminacao que devera ser utilizada e: %0.2fW\n\n", p);
    return 0;
}
