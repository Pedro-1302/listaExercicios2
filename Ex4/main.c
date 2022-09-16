#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  ###################");
    printf("\n ##                 ##");
    printf("\n##  Media Ponderada  ##");
    printf("\n ##                 ##");
    printf("\n  ###################\n\n");

    float nota1, nota2, mp;

    printf("Informe a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota do aluno: ");
    scanf("%f", &nota2);

    mp = ((nota1 * 2.0) + (nota2 * 3.0)) / 5.0;

    printf("\nO valor e: %0.1f", mp);
    return 0;
}
