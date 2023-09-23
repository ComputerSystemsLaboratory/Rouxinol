#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   long i,j,k;
   long f;
   long n;
   long q;
   long cnt = 0;
   long h;
   long left,right,mid;
   long ans = 0;
   long a[100];
   scanf("%ld",&n);
   for (i = 0; i < n; i++) {
      scanf("%ld",&a[i]);
   }
   for (i = n-1; i > 0; i--) {
      printf("%ld ",a[i]);
   }
   printf("%ld\n",a[0]);
   return 0;
}