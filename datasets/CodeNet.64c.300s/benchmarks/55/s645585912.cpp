#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



int main()
{
   long i,j,k;
   long n;
   long cnt = 0;
   long left,right,mid;
   long ans = 0;
   static long e[100000];
   for(i = 0;;i++) {
      scanf("%ld",&e[i]);
      if(e[i] == 0)
         break;
   }
   for(j = 0;j < i;j++) {
   printf("Case %ld: %ld\n",j+1,e[j]);
   }
   return 0;
}