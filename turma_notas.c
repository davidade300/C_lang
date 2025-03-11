#include <stdio.h>

/*
 * Uma turma de 10 alunos realiza um teste. As notas (inteiros de 0 a 100) dadas aos alunos estão à sua disposição.
 * Determine a média das notas da turma. A média das notas da turma é igual a soma das notas dividida pelo número de
 * alunos. O algo deve inserir cada uma das notas, executar o cálculo da média e imprimir o resultado.
 */

int main(void) {
   int contador;
   int total;
   int media;
   int nota;
   
   total = 0;
   contador = 1;

   while (contador <= 10) {

      printf("Digite a nota do aluno: ");
      scanf("%d", &nota);
      
      total = total + nota;
      contador = contador + 1;
   }
   
   media = total / 10;

   printf("Média da turma  = %d\n", media);

   return 0;
}
