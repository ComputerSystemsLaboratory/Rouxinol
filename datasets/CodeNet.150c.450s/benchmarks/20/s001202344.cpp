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

   scanf("%ld",&s);
   h =  s/3600;
   s -= (s/3600)*3600;
   m =  s/60;
   s -= (s/60)*60;
   printf("%ld:%ld:%ld\n"
      ,h,m,s);


   return 0;
}