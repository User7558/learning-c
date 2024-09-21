#include <stdio.h>

int main (void){
     int cv;
    float vm, c1, c2, salario;

    scanf("%d", &cv);
    scanf("%f", &vm);
    c1 = cv * 250.00;
    c2 = vm * 0.03;
    salario = c1 + c2 + 2000.00;

    printf("%.2f", salario);
    return 0;
}
