#include <stdio.h>

int main()
{
    int c;
    float f;

    printf("Insira a temperatura em Celsius: ");
    scanf("%d", &c);

    f = (9*c/5) + 32;

    printf("Convertendo para Fahrenheit teremos %.1f graus.", f);
    return 0;
}
