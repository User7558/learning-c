#include <stdio.h>

int main (void){

float h, r, area, latas_n, custo;

h = 10;
r = 5;

area = 2 * 3.14 * r*(r+h);
latas_n = area / 15;
custo = latas_n * 50;

printf("O custo para pintar os tanques de combustivel sera de RS%.2f. \n", custo);
}
