#include <stdio.h>

int main()
{
    int dia, mes, ano;

    scanf("%d %d %d", &dia, &mes, &ano);

   if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        if(dia >= 1 && dia < 31)
        {
            dia++;
            printf("%d.%d.%d", dia, mes, ano);
        }
        else if(dia == 31)
        {
            dia = 1;
            mes++;
            printf("%d.%d.%d", dia, mes, ano);
        }
        else if (dia > 31)
            printf("Data invalida");
    }

     if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if(dia >= 1 && dia < 30)
        {
            dia++;
            printf("%d.%d.%d", dia, mes, ano);
        }
        else if(dia == 30)
        {
            dia = 1;
            mes++;
            printf("%d.%d.%d", dia, mes, ano);
        }
        else if (dia > 30)
            printf("Data invalida");
    }

     if(mes == 2)
    {
        if(dia >= 1 && dia < 28)
        {
            dia++;
            printf("%d.%d.%d", dia, mes, ano);
        }
        else if(dia == 28)
        {
            dia = 1;
            mes++;
            printf("%d.%d.%d", dia, mes, ano);
        }
        else if (dia > 28)
            printf("Data invalida");
    }

    if(dia == 31 && mes == 12)
    {
        dia = 1;
        mes = 1;
        ano++;
        printf("%d.%d.%d", dia, mes, ano);
    }

    return 0;
}
