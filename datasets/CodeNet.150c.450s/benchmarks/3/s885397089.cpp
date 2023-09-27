#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   long a,b;
   long i,j,k;
   long f;
   long n;
   long cnt = 0;
   long h;
   long left,right,mid;
   long ans = 0;
   static char str[102][1003];
   char s[9];
   char p[1003];
   char tmp;
   int end = 0;

   fgets(str[0],1002,stdin);
   scanf("%ld",&n);
   j = 1;
   for (i = 0; i < n;i++) {
      scanf("%s",s);
      scanf("%ld %ld",&a,&b);
      if (s[2] == 'p') {
         scanf("%s",p);
         for (k = 0; k < b-a+1; k++) 
            str[0][a+k] = p[k];
      }

      /* revserse */
      if (s[2] == 'v') {
         for (k = 0; k < (b-a+1)/2; k++) {
            tmp = str[0][a+k];
            str[0][a+k] = str[0][b-k];
            str[0][b-k] = tmp;
         }
      }

      /* print */
      if (s[2] == 'i') {
         for (k = 0; k < b-a+1; k++) {
            str[j][k] = str[0][a+k];
         }
         j++;
      }
   }
   for (i = 1; i < j; i++) 
      printf("%s\n",str[i]);

   return 0;
}