#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n  #########################################################################");
    printf("\n ##                                                                       ##");
    printf("\n##  Anos, meses, dias e semanas a partir do ano de nascimento e ano atual  ##");
    printf("\n ##                                                                       ##");
    printf("\n  #########################################################################\n\n");

    float ano_nasc, ano_atual, id_a, id_m, id_d, id_s;

    printf("Informe seu ano de nascimento: ");
    scanf("%f", &ano_nasc);
    printf("Informe o ano atual: ");
    scanf("%f", &ano_atual);

    id_a = ano_atual - ano_nasc;
    id_m = id_a * 12;
    id_d = id_a * 365;
    id_s = id_d / 7;

    printf("\nVoce tem %.f anos", id_a);
    printf("\nVoce ja viveu %.f meses", id_m);
    printf("\nVoce ja viveu %.f dias", id_d);
    printf("\nVoce ja viveu %.f semanas", id_s);
    return 0;
}
