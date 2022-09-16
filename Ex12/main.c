#include <stdio.h>
#include <stdlib.h>

int main()
{
        printf("\nTTTTTTT AAAAAAA BBBBBB  U     U AAAAAAA DDDDDD  AAAAAAA");
    printf("\n   T    A     A B     B U     U A     A D     D A     A");
    printf("\n   T    AAAAAAA BBBBBBB U     U AAAAAAA D     D AAAAAAA");
    printf("\n   T    A     A B     B U     U A     A D     D A     A");
    printf("\n   T    A     A BBBBBB  UUUUUUU A     A DDDDDD  A     A\n\n");

    float n;

    printf("Digite um valor: ");
    scanf("%f", &n);

    //CERTIDAO EM, HIST E.

    printf("A TABUADA DESTE NUMERO E = ");
    printf("\n%.f x 0 = %.f", n, n * 0);
    printf("\n%.f x 1 = %.f", n, n * 1);
    printf("\n%.f x 2 = %.f", n, n * 2);
    printf("\n%.f x 3 = %.f", n, n * 3);
    printf("\n%.f x 4 = %.f", n, n * 4);
    printf("\n%.f x 5 = %.f", n, n * 5);
    printf("\n%.f x 6 = %.f", n, n * 6);
    printf("\n%.f x 7 = %.f", n, n * 7);
    printf("\n%.f x 8 = %.f", n, n * 8);
    printf("\n%.f x 9 = %.f", n, n * 9);
    printf("\n%.f x 10 = %.f\n\n", n, n * 10);

    int numero;
    int contador = 0;

    printf("\nUtilizando laco (for)");
    printf("\n\nDigite um valor: ");
    scanf("%d", &numero);

    for (contador = 0;contador<=10;contador++)
    {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
    }

    printf("\n\nSuco de uva tem %d%% de suco ", 92);

    return 0;
}
