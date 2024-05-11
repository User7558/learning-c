#include <stdio.h>

int main (void){
    FILE *arq;
    arq = fopen("entrada.txt", "rt");

    int cv;
    float vm, c1, c2, salario;

    fscanf(arq, "%d, %f", &cv, &vm);
    c1 = cv * 250.00;
    c2 = vm * 0.3;
    salario = c1 + c2 + 2000.00;

    printf("%d, %f", cv, vm);
    printf("O salario do mes do vendedor sera de R$%.2f", salario);

    fclose(arq);
    return 0;
}
