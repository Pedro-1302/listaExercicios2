#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, valor_venda, sf, c;

    printf("Digite seu salario(R$): ");
    scanf("%f", &salario);
    printf("Digite o valor de suas vendas(R$): ");
    scanf("%f", &valor_venda);

    sf = salario + (valor_venda * 0.04);

    printf("\nComissao sobre as vendas R$%0.2f", valor_venda * 0.04);
    printf("\nSalario final: R$%0.2f", sf);
    return 0;
}
