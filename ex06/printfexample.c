#include <unistd.h>
#include <stdio.h>

int main () {
   int ch;

   ch = 10;

   printf("%d\n", ch );
   
   ch /= 10;

   printf("%d\n", ch);

   ch /= 10;

   printf("%d\n", ch);

   return(0);
}
