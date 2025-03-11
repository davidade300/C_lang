#include <stdio.h>
#include <stdlib.h>

int main(void) {

   /*Contadores de valores de lançamentos*/
   int freq_1 = 0;
   int freq_2 = 0;
   int freq_3 = 0;
   int freq_4 = 0;
   int freq_5 = 0;
   int freq_6 = 0;

   int roll; /* contador de lançamento, valor de 1 a 6000 */
   int face; /* valor rolado */
   
   for(roll = 1; roll <= 6000; roll++){
      face = 1 + rand() % 6;
   
      switch (face){
         case 1:
            ++freq_1;
            break;

         case 2:
            ++freq_2;
            break;

         case 3:
            ++freq_3;
            break;

         case 4:
            ++freq_4;
            break;

         case 5:
            ++freq_5;
            break;

         case 6:
            ++freq_6;
            break; /* opcional */
      }
   }
   /* exibe resultados em forma tabular */
   printf("%s%13s\n", "Face", "Frequencia");
   printf();
   return 0;
}
