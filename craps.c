#include <stdio.h>
#include <stdlib.h>
#include <time.h> /*contém prototipo p função time */

enum Status {CONTINUE, WON, LOST};

int rollDice(void); /* prototipo da função rollDice */

int main(void) {
   int sum; /* soma dos dados lançados */
   int myPoint; /* ponto ganho*/

   enum Status gameStatus; /* CONTINUE, WON OU LOST */

   /* rng usando a hora atual */
   srand(time(NULL));

   sum = rollDice();

   /* determina status do jogo com base na soma dos dados*/
   switch(sum){
      
      /* ganha na 1 jogada */
      case 7:
      case 11:
         gameStatus = WON;
         break;

      /* perde na 1 jogada */
      case 2:
      case 3:
      case 12:
         gameStatus = LOST;
         break;

      /* lembra ponto */
      default:
         gameStatus = CONTINUE;
         myPoint = sum;
         printf("Ponto é %d\n", myPoint);
         break;
   } /* fim do switch */
   while (gameStatus == CONTINUE) {
      sum = rollDice();
   /* determina o status do jogo */
      if (sum == myPoint) { /* vence fazendo ponto */
         gameStatus = WON;
      } else {
         if(sum == 7){
            gameStatus = LOST; /* jogo termina, jogador perde */
         } // fim do iff
      } // fim do else 
   } //fim do while
   /* mostra mensagem de vitoria ou perda */
   if (gameStatus == WON) {
      printf("jogador vence\n");
   } else {
      printf("Jogador perde\n");
   }
   return 0;
} //fim do main
 
int rollDice(void) {
   int dice1; // primeiro dado
   int dice2; // segundo dado
   int workSum; // soma dos dados

   dice1 = 1 + (rand() % 6);
   dice2 = 1 + (rand() % 6);
   workSum = dice1 + dice2;

   // exibe resultados da jogada
   printf("Jogador rolou %d + %d = %d \n", dice1, dice2, workSum);
   return workSum; // retorna soma dos dados
} // fim de rollDice
