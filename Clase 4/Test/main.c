/*En este programa se introduce un numero y programa no dira
si es par o impar*/

#include <stdio.h>
// Ejercicios aprenderaprogramar.com
int main () {
   /* local variable definition */
   int a = 40;
   if( a == 10 ) {
      printf("Value of a is 10\n" );
   }
   else if( a == 20 ) {
      printf("Value of a is 20\n" );
   }
   else if( a == 30 ) {
      printf("Value of a is 30\n" );
   }

   printf("Exact value of a is: %d\n", a );
   return 0;
}
