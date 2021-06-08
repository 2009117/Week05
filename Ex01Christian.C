#include <stdio.h>
/*
Your have to introduce the following values. Also there are 4 variables, that represent each part of the formula for the cylinder.
*/


int main() {
  const float PI=3.14;
  float R, H, A, V;

printf ("Introduce el radio");
scanf ("%f",&R);
printf ("Introduce la altura");
scanf("%f",&H);

A= 2*PI*R*H+ 2*PI*(R*R);
printf("El area es %.2f y " ,A );

V=PI*(R*R)*H;
printf("El volumen es %.2f" , V);
return 0;
}
