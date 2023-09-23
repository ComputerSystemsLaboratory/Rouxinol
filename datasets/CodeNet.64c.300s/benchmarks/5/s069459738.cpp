#include <iostream>
using namespace std;
#include <cstdio>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
   int i,j,k,l;
   int a,b,c,d;
   int memory[2];
   int height[10];
   int n;

   for(i=0;i<10;i++) cin >> height[i];
   
   for(i=0;i<9;i++) {
      for(j=9;j>i;j--) {
         if(height[j] > height[j-1]) {
            int tmp = height[j];
            height[j] = height[j-1];
            height[j-1] = tmp;
         }
      }
   }

   for(i=0;i<3;i++) cout << height[i] << "\n";
   return 0;
}