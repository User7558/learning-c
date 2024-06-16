#include <stdio.h>
#include <math.h>

int main (void){

float r1, r2, a, b, c;

printf("Insira a variavel A: ");
scanf("%f", &a);
printf("Insira a variavel B: ");
scanf("%f", &b);
printf("Insira a variavel C: ");
scanf("%f", &c);

r1 = (a*b/c)+b+(5*c/a)-1;
r2 = pow(a*b*c, 3)/2024;

printf("\n \nFormula 1: \n");
printf("%.5f \n", r1);
printf("\n = = = = = = = = \n \n");
printf("Formula 2: \n");
printf("%.5f \n", r2);
}

//pow(a, b); // c=a^b
