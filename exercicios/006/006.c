#include <stdio.h>

int main (void){
    FILE *arq;
    arq = fopen("entrada.txt", "rt");

    if (arq == NULL){
        printf("Erro");
        system("pause");
        return 0;
    }

    int cv;
    float vm, c1, c2, salario;

    fscanf(arq, "%d, %f", &cv, &vm);
    c1 = cv * 250.00;
    c2 = vm * 0.03;
    salario = c1 + c2 + 2000.00;

    printf("O salario do mes do vendedor sera de R$%.2f\n", salario);

    fclose(arq);
    return 0;
}
