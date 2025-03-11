#include <stdio.h>


int main(void) {

   int aprovados = 0;
   int reprovados = 0;
   int aluno = 1;
   int resultado;

   while (aluno <= 10) {
      printf("Forneça o resultado (1 = aprovado, 2 = reprovado)");
      scanf("%d", &resultado);
      
      if (resultado == 1 ) {
         aprovados += 1;
      }
      if (resultado == 2) {
         reprovados += 1;
      }

      aluno += 1;
   }

   printf("Total de aprovados: %d\n", aprovados);
   printf("Total de reprovados: %d\n", reprovados);

  if(aprovados >= 8) {
     printf("Bonus ao instrutor\n");
  }
   return 0;
}
