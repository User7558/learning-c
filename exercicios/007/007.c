#include <stdio.h>

int main(void){
    FILE *arq;
    arq = fopen("entrada.txt", "rt");

    if (arq == NULL){
        printf("Erro");
        system("pause");
        return 0;
    }

    int ha, inss;
    float vha, salariol, salariob, percent_inss;

    fscanf(arq, "%f %d %d", &vha, &ha, &inss);

    percent_inss = inss/100;
    salariob = vha*ha;
    salariol = salariob - (salariob * percent_inss);

    printf("O salario liquido de um professor e de R$%.2f \n", salariol);

    fclose(arq);
    return 0;
}
