#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   long a,b;
   long i,j,k;
   long cnt = 0;
   long left,right,mid;
   long ans = 0;
   static char str[102][1003];
   char p[1003];
   char tmp;
   long h,m,s;

   scanf("%ld %ld",&a,&b);
   printf("a ");
   if (a < b)
      putchar('<');
   else if (a > b)
      putchar('>');
   else
      printf("==");
   printf(" b\n");


   return 0;
}