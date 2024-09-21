#include <stdio.h>

int main()
{
    float salario, kw, desconto, cobrado;

    scanf("%f", &salario);
    scanf("%f", &kw);

    cobrado = (salario/5) * kw;
    cobrado = cobrado - (cobrado * 0.15);

    printf("%.2f", cobrado);
    return 0;
}
