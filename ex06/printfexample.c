#include <unistd.h>
#include <stdio.h>

int main () {
   int ch;
   int multiplier;

   ch = 1234;
   multiplier = 1;

   while (ch > 0)
   {
		ch /= 10;
		if (ch > 0)
		{
			multiplier *= 10;
		}
	   }
	   printf("%d aaa %d\n", ch, multiplier);
   
/*
   printf("%d\n", ch );
   
   ch /= 10;

   printf("%d\n", ch);

   ch /= 10;

   printf("%d\n", ch);

   return(0);
   */
}
