#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   static long i,j,k,l;
   long n;
   long cnt = 0;
   int f;
   long left,right,mid;
   long ans = 0;
   cin >> n;
   for(i = 1;i <= n;i++) {
      f = 0;
      int x = i;
      if (i % 3 == 0) {
         cout << " " << i;
         f = 1;
      }
      while(1) {
         if( (x % 10 == 3) && f == 0) {
            cout << " " << i; break;
         }
         x /= 10;
         if(x == 0 || f == 1) break;
      }
   }
   cout << endl;

   return 0;
}