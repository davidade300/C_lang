#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int i; // contador

   for(i = 1; i <= 20; i++) {

      // escolhe número aleatório de 1 a 6 e imprime na tela
      printf("%10d", 1 + (rand() % 6));

      // se o contador é divisível por 5, inicia nova linha de impressão
      if (i % 5 == 0) {
         printf("\n");
      }
   }

   return 0;
}
