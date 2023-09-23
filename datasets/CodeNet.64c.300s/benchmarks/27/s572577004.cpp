#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define SQR(X) ( (X) * (X) )

int main()
{
   static long i,j,k,l;
   long double a,b,c,C;
   long double ans;
   static long cnt[100];
   int n,x;

   for(k=0;;k++) {
      cin >> n >> x;
      if(n == 0 && x == 0)
         break;
      for(i=1;i<=n;i++) {
         for(j=i+1;j<=n;j++) {
            if(i+j+n>=x && i+2*j<x)
               cnt[k]++;
         }
      }
   }
   for(i=0;i<k;i++)
      cout << cnt[i] << endl;

   return 0;
}