#include <stdio.h>

int main()
{
    float c_fabrica, c_total;

    scanf("%f", &c_fabrica);

    c_total = c_fabrica + (0.12 * c_fabrica) + (0.45 * c_fabrica);

    printf("%.2f", c_total);
    return 0;
}
