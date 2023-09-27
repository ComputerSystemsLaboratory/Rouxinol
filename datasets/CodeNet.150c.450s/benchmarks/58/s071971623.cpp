#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void keisan(long long *a,long long b,char c)
{
   if (c == '+')
      *a += b;
   else if(c == '-')
      *a -= b;
   else if(c == '*')
      *a *= b;
}



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
   long long b[100];
   char a[1000];
   char tmp[9];
   int end = 0;
   char c;

   fgets(a,1005,stdin);

   j = 0;
   f = 0;
   k = -1;
   while (end == 0) {
      if(a[k+1] != '+' && a[k+1] != '-' && a[k+1] != '*' && a[k+1] != 0) {
         for(i = k+2;;i++) {
            if(a[i] == ' ') {
               j = i;
               break;
            }
         }

         for (i = 0; i < j-k-1; i++) {
            tmp[i] = a[k+1+i];
         }
         tmp[i] = 0;
         k = j;

         b[f] = atol(tmp);
         f++;
      }
      else if(a[k+1] == '+' || a[k+1] == '-' || a[k+1] == '*') {
         keisan(&b[f-2],b[f-1],a[k+1]);
         f--;
         k += 2;
      }
      else if(a[k+1] == 0)
         end = 1;
   }
   printf("%lld\n",b[0]);

   return 0;
}