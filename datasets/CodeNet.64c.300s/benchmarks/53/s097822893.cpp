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
   int a,b,c,d;
   static int e[10000];

   scanf("%d %d %d",&a,&b,&c);
   for(i = 1; i <= sqrt( (double)c ); i++) {
      if(c % i == 0)
         e[j++] = i;
   }
   for(i = 0;i < j; i++) {
      if (e[i] > b)
         break;
      if (a <= e[i])
         cnt++;
   }
   d = 0;
   if (e[j-1]*e[j-1] == c)
      d = 1;
   for (i = j-1-d; i > -1; i--) {
      if (c/e[i] > b)
         break;
      if (a <= c/e[i])
         cnt++;
   }
   printf("%ld\n",cnt);
   return 0;
}