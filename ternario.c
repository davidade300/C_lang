#include <stdio.h>

int main(void) {
   int nota;

   printf("digite a nota do aluno: ");
   scanf("%d", &nota);

   nota >= 60 ? printf("Aluno aprovado\n") : printf("Aluno Reprovado\n");
   
   return 0;
}
