#include <stdio.h>

int main ()
{
    float valor_sd, valor_cd;

    printf("Informe o valor do produto: ");
    scanf("%f", &valor_sd);

    valor_cd = valor_sd - (valor_sd * 0.3);

    printf("R$ %.2f \n", valor_cd);
    return 0;
}
