#include<stdio.h>

int main(void){
  float X,   Y;
  printf("Asigna un valor para x\n");
  scanf("%f", &X);

  Y= (X*4/1)-(4/3)+(4/5)-(4/7)+(4/9)-(4/11)+(4/13)-(4/15)+(4/17)-(4/19);

printf("El resultado es %.4f", Y);

  return 0;
}
