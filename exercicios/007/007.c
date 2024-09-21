#include <stdio.h>

int main(void){
    float vha, salariol, salariob, percent_inss, ha, inss;

    scanf("%f", &vha);
    scanf("%f", &ha);
    scanf("%f", &inss);

    percent_inss = inss/100;
    salariob = vha*ha;
    salariol = salariob - (salariob * (inss/100));

    printf("%.1f", salariol);
    return 0;
}
