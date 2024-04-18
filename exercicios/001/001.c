#include <stdio.h>

main ()
{
    float valor_sd, valor_cd;

    printf("Informe o valor do produto:\n");
    scanf("%f", &valor_sd);

    valor_cd = valor_sd - (valor_sd * 0.3);

    printf("O valor do produto com desconto sera de R$ %.2f \n", valor_cd);
    return 0;
}
