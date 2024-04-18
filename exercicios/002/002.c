#include <stdio.h>

int main()
{
    float c_fabrica, c_total;

    printf("Informe o custo de fabrica do automovel: \nR$");
    scanf("%f", &c_fabrica);

    c_total = c_fabrica + (0.12 * c_fabrica) + (0.45 * c_fabrica);

    printf("O preço total do automovel sera de R$%.2f", c_total);
    return 0;
}
