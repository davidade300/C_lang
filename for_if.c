#include <stdio.h>

int main(void) {
   int x; //contador
          
   for (x = 1; x <= 10; x++) {
      if (x == 5) {
         continue;
      }
      printf("%d ", x);
   }

   printf("\nUsou continue para pular a exibição do valor 5\n");
   return 0;
}
