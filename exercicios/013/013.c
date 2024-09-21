#include <stdio.h>

int main()
{
    int n, i1, i2, soma, entradas;

    scanf("%d", &entradas);

    for(i1 = 0; i1 < entradas; i1++)
    {
        scanf("%d", &n);
        soma = 0;

        for(i2 = 1; i2 < n; i2++)
        {
            if((n%i2) == 0)
                soma += i2;
        }

        if(soma == n)
            printf("%d eh perfeito\n", n);
        else
            printf("%d nao eh perfeito\n", n);
    }
    return 0;
}
