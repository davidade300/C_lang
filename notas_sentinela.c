#include <stdio.h>

int main(void) {
   int total;
   int contador;
   float media;
   int nota;

   total = 0;
   contador = 0;

   while(nota != -1) {
      total += nota;
      contador += 1;

      printf("digite a nota do aluno, -1 para sair: ");
      scanf("%d", &nota); // possivelmente tirar o placeholder
   }
   
   if(contador != 0) {

      media = (float) total / contador;

      printf("A media da turma é %.2f\n", media);
   } else {
      printf("Nenhuma nota foi informada \n");
   }

   return 0;
}
