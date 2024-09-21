#include <stdio.h>

int main (void){

float h, r, area, latas_n, custo;

scanf("%f", &h);
scanf("%f", &r);

area = 2 * 3.14 * r*(r+h);
latas_n = area / 15;
custo = latas_n * 50;

printf("%.2f", custo);
}
