#include <stdio.h>
/*
In this program we have 3 variables (that is a person), and, when the program start, we have to assign how much money each person aport. For the total of each person, I put  T(total) and the first letter fo the name (a), =Totalashley.
*/

int main(void) {
   float Ashley, Natalia, Ilse, x, Total, Ta, Tn, Ti;
  
  printf("Dinero de Ashley\n");
  scanf("%f",&Ashley);

 printf("Dinero de Natalia\n");
  scanf("%f",&Natalia);

  printf("Dinero de Ilse\n");
  scanf("%f",&Ilse);

  Total= Ashley+Natalia+ Ilse;

  Ta= (Ashley/Total)*100;
  Tn= (Natalia/Total)*100;
  Ti= (Ilse/Total)*100;

/*
For the operation, just need to use the amoung of money each person, divide by the total, and finally multiply by 100.
*/
  printf("El total es %0.4f\n ", Total);
  printf("Ashley aportó el %0.4f\n ", Ta);
  printf("Natalia aportó el %0.4f\n", Tn);
  printf("Ilse aportó el %0.4f\n", Ti);

return 0;
}
