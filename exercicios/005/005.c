#include <stdio.h>

int main (void){
float altura_degrau, altura_desejada, degraus_necessarios;

altura_degrau = 30.5;
altura_desejada = 100;

degraus_necessarios = altura_desejada / altura_degrau;

printf("Para alcancar %.2fcm, serao necessarios %.1f degraus.\n", altura_desejada, degraus_necessarios);
}
