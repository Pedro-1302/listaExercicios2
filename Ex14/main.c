#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario = 5000, conta_luz = 300, conta_agua = 99, v_c1, v_c2, sf;

    printf("Joao tem um salario de R$%0.2f e possui duas contas a pagar, no entanto recebeu uma multa de 2 por cento em cada uma delas pelo atraso.\n", salario);

    v_c1 = conta_luz + (conta_luz * 0.02);
    v_c2 = conta_agua + (conta_agua * 0.02);

    sf = salario - (v_c1 + v_c2);

    printf("\nA conta de luz custava: R$%0.2f, apos a multa passou a custar R$%0.2f.", conta_luz, v_c1);
    printf("\n\nA conta de agua custava: R$%0.2f, apos a multa passou a custar R$%0.2f.", conta_agua, v_c2);
    printf("\n\nAo pagar as contas, restaram R$%0.2f do salario de Joao.\n\n", sf);
    return 0;
}
