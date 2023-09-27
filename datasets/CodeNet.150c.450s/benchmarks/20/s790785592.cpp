#include <stdio.h>

int main()
{
   int    hour, minute, second;
   int    inp;

   scanf("%d\n", &inp);

   hour = inp / (60 * 60);
   inp -= hour * 60 * 60;
   minute = inp / 60;
   inp -= minute * 60;
   second = inp;

   printf("%d:%d:%d\n", hour, minute, second);

   return 0;
}