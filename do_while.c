#include <stdio.h>

int main(void){

// a instrução do while pode ser escrita de duas formas

/*
   do
      instrução
   while(condição);
   
    ou
   
   do {
      instrução
   } while(condição);
*/   
   
   int contador = 1; //inicializa contador
   
   do {
      printf("%d ", contador);
   } while (++contador <= 10); // fim de do ... while
                             
   return 0;
}
