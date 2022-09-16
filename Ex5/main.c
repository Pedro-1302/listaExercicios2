#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  #######################################");
    printf("\n ##                                     ##");
    printf("\n##  Desconto de 10 por cento em produto  ##");
    printf("\n ##                                     ##");
    printf("\n  #######################################\n\n");

    float preco, preco_novo;

    printf("Digite o preco do produto(R$): ");
    scanf("%f", &preco);

    preco_novo = preco - (preco * 0.10);

    printf("O novo preco com desconto e: R$%0.2f", preco_novo);
    return 0;
}
