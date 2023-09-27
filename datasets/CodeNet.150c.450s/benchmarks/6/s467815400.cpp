#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   long a,b,c;
   long i,j,k;
   long cnt = 0;
   long left,right,mid;
   long ans = 0;
   static char str[102][1003];
   char p[1003];
   char tmp;
   long h,m,s;

   scanf("%ld %ld %ld",&a,&b,&c);
   if (a < b && b < c)
      printf("Yes\n");
   else
      printf("No\n");

   return 0;
}