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
   long f,g;
   char mark;
   int num;
   static char card[14] = {};
   char chars[5] = "SHCD";
   int nums[4] = {1,2,4,8};

   cin >> n;
   for(i = 0; i < n; i++) {
      cin >> mark >> num;
      switch(mark) {
      case 'S' : card[num] += 1;break;
      case 'H' : card[num] += 2;break;
      case 'C' : card[num] += 4;break;
      case 'D' : card[num] += 8;break;
      }
   }
   for (i = 0; i < 4; i++) {
      for (j = 1; j < 14; j++) {
         if( ( (card[j]/nums[i]) % 2) == 0)
            cout << chars[i] <<' '<< j << endl;
      }
   }
   return 0;
}