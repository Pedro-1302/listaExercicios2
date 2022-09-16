#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float cat1, cat2, h;

    printf("Cateto um: ");
    scanf("%f", &cat1);
    printf("Cateto dois: ");
    scanf("%f", &cat2);

    h = sqrt(pow (cat1, 2) + pow (cat2, 2));

    printf("A hipotenusa e = %0.1f", h);

    return 0;
}
