#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

   int i;
   unsigned seed; /* numero usado para criar a semente do gerador de numero aleatorio */
   
   printf("Digite a semente:");
   scanf("%u", &seed);

    /* srand(seed);*/  //inicia o gerador de numero aleatorio
   srand(time(NULL)); /* faz com que o computador leia o seu clock para obter o valor da semente automaticamente */

   for(i = 1; i <= 10; i++) {
      /* escolhe um numero aleatorio de 1 a 6 e imprime*/
      printf("%10d", 1 + (rand() % 6));

      if( i % 5 == 0) {
         printf("\n");
      }
   }

   return 0;
}
