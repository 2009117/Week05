#include <stdio.h>

int X;
int main(void) {
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
