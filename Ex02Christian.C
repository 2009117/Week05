#include<stdio.h>


int main() {

float H, M, S;

printf("Ingresar segundos: ");

scanf("%f",&S);

H = (S/3600);

M = (S/60);

printf("Horas : %.0f\n",H);

printf("Minutos : %.0f\n",M);

return 0;

}
