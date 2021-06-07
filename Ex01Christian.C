#include <stdio.h>


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

}
