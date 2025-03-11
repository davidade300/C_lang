#include <stdio.h>
#include <math.h>

int main (void) {
   double vp; // principal
   double t; // taxa de juros
   int n; // periodo em anos
   double vf; // valor final após n anos

   vp = 1000.0;
   t = 0.05;
   n = 10;

   printf("4s%21s\n", "Ano", "Valor na conta");


   for (n = 1; n <= 10; n++) {
     
      vf = vp * pow(1.0 + t, n);
      
      printf("%4d%21.2f\n", n, vf);
   }
   return 0;
}
