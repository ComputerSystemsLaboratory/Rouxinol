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
   long long sum = 0;
   long max = -1000000,min = 10000000;
   scanf("%ld",&n);

   for(i = 0; i < n; i++) {
      scanf("%ld",&e[i]);
      if(max < e[i])
         max = e[i];
      if(min > e[i])
         min = e[i];
      sum += e[i];
   }
   printf("%ld %ld %lld\n",min,max,sum);
   return 0;
}