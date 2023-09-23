#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   static long i,j,k;
   long n;
   long cnt = 0;
   long left,right,mid;
   long ans = 0;
   int a,b;
   static long e[10000];
   char op;
   for(i = 0;;i++) {
      scanf("%d %c %d",&a,&op,&b);
      if(op == '+')
         e[i] = a + b;
      else if(op == '-')
         e[i] = a - b;
      else if(op == '*')
         e[i] = a * b;
      else if(op == '/')
         e[i] = a / b;
      else break;
   }
   for(j = 0; j < i; j++) {
      printf("%ld\n",e[j]);
   }
   return 0;
}