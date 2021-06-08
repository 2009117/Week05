#include <stdio.h>
/*
The program ask you about your year of birth, then the program scan it and solve some operations that help us to define of the year is a leap year.
*/

int main(void) {
int  X;
  printf("Inserta tu año de nacimiento\n");
  scanf("%d",&X);

  if (X/4 == 0) {
    printf("%d",X);
    printf("Si es año bisiesto");
  } 
  else if (X/100 ==0){
    printf("%d", X);
    printf("No es año bisiesto");

  }
   else if (X/400 == 0) {
    printf("%d",X);
    printf("Si es año bisiesto");
  } 
  else {
    printf("%d", X);
    printf("No es año bisiesto");
  }

  return 0;
}
