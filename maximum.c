#include <stdio.h>

int maximum(int x, int y, int z); /* prototipo de função */ 
int main(void) {
   
   int number1;
   int number2;
   int number3;

   printf("Digite três inteiros: ");
   scanf("%d%d%d", &number1, &number2, &number3); //&number* pode gerar erro de compilação
   
   printf("Máximo é: %d\n", maximum( number1, number2, number3));

   return 0;
}

int maximum(int x, int y, int z) {

   int max = x; /* considera que x é o maior */

   if (y > max){ 
      max = y;
   }
   
   if (z > max) {
      max = z;
   }

   return max;
} /* fim da função maximum */
