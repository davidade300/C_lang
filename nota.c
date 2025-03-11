#include <stdio.h>

int main(void) {
   
   int nota;
   
   printf("nota do aluno: ");
   scanf("%d", &nota);

   if (nota >= 60) {
      printf("Aprovado\n");
   } else {
      printf("Reprovado\n");
   }
   
   return 0;
}
