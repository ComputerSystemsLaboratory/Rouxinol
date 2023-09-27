#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define NUM 100

int main()
{
   static long i,j,k,l;
   int r,c;
   static int e[101][101];
   cin >> r >> c;
   for(i=0;i<r;i++) {
      for(j=0;j<c;j++) {
         cin >> e[i][j];
         e[i][c] += e[i][j];
         e[r][j] += e[i][j];
      }
   }
   for(i=0;i<r;i++)
      e[r][c] += e[i][c];

   for(i=0;i<=r;i++) {
      for(j=0;j<c;j++) 
         cout << e[i][j] << ' ';
      cout << e[i][c] << endl;
   }

   return 0;
}