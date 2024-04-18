#include <stdio.h>

int main()
{
    float salario, kw, desconto, cobrado;

    printf("Insira o valor do salario minimo atual: \nR$");
    scanf("%f", &salario);
    printf("\nInsira a quantidade de quilowatts consumidos na residencia: \n");
    scanf("%f", &kw);

    cobrado = (salario/5) * kw;
    cobrado = cobrado - (cobrado * 0.15);

    printf("O valor a ser pago sera de R$%.2f", cobrado);
    return 0;
}
