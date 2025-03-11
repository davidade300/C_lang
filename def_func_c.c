#include <stdio.h>

int square(int y); 

int main(void) {

   int x; /* contador */

   /*Loop 10 vezes, calcula e exibe quadrado de x a cada vez */
   for(x = 1; x <= 10; x++){
      printf("%d ", square(x));
   }

   printf("\n");
   return 0;
} /* fim da função main */


/* definição da função square: retorna o quadrado do parâmetro */
int square(int y) {
   return y * y; // retorna o quadrado de y como int
} /* fim da função square */

