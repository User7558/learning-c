#include <stdio.h>

int main (){
float altura_degrau, altura_desejada, degraus_necessarios;

scanf("%f", &altura_degrau);
scanf("%f", &altura_desejada);

degraus_necessarios = altura_desejada / altura_degrau;

printf("%.1f", degraus_necessarios);
}
