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
   int mid;
   int end;
   int re;
   char grade[NUM];
   for(i=0;;i++) {
      cin >> mid >> end >> re;
      if(mid == -1 && end == -1 && re == -1)
         break;
      int sum = mid + end;
      if(mid == -1 || end == -1)
         grade[i] = 'F';
      else if(sum >= 80)
         grade[i] = 'A';
      else if(sum >= 65)
         grade[i] = 'B';
      else if(sum >= 50)
         grade[i] = 'C';
      else if(sum >= 30 && re >= 50)
         grade[i] = 'C';
      else if(sum >= 30)
         grade[i] = 'D';
      else
         grade[i] = 'F';
   }
   for(j=0;j<i;j++)
      cout << grade[j] << endl;

   return 0;
}