#include <stdio.h>

int main(void) {

    
   int num1;
   int num2;
    
   scanf("%d%d", &num1, &num2); 
    
    if (num1 == num2) {
        printf("%d é igual a %d\n", num1, num2);
    }

    if (num1 != num2) {
        printf("%d não é igual %d\n", num1, num2);
    }
    
    return 0;
}
