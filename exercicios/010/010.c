#include <stdio.h>
#include <math.h>

int main (void){

float r1, r2, a, b, c;

scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);

r1 = (a*b/c)+b+(5*c/a)-1;
r2 = (pow(a*b*c, 3)/2024;

printf("%.5f \n", r1);
printf("%.5f", r2);
return 0;
}

//pow(a, b); // c=a^b
