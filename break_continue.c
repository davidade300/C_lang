#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x; // contador

  // loop por 10 vezes
  for (x = 1; x <= 10; x++) {

    if (x == 5)
      break; // sai do loop somente se x é 5

    printf("%d ", x);
  } // fim do for

  printf("%d ", x);
  return 0;

  int i = rand();
  printf("\n %d", i);
}
