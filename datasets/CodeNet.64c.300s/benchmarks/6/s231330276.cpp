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
   static char cell[4][3][10];
   int b,f,r,v;

   cin >> n;
   for(i=0; i<n; i++) {
      cin >> b >> f >> r >> v;
      cell[b-1][f-1][r-1] += v;
   }

   for(i=0; i<3; i++) {
      for(j=0; j<3; j++) {
         for(k=0; k<10;k++) {
            printf(" %d",cell[i][j][k]);
         }
         cout << endl;
      }
      cout << "####################\n";
   }
   for(j=0; j<3; j++) {
      for(k=0; k<10;k++) {
         printf(" %d",cell[i][j][k]);
      }
      cout << endl;
   }


   return 0;
}