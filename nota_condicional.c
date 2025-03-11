#include <stdio.h>

int main(void) {

   int nota;

   printf("digite a nota do aluno: ");
   scanf("%d", &nota);

   nota >= 60 ? printf("Aprovado\n") : printf("Reprovado\n");
}
