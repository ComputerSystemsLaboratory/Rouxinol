#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

long long dic_op(char str[][14])
{
   int j;
   long long f = 1;
   long long g = 0;
   for(j = 0;;j++) {
      if(str[1][j] == 'A')
         g += f * 1;
      else if(str[1][j] == 'C')
         g += f * 2;
      else if(str[1][j] == 'G')
         g += f * 3;
      else if(str[1][j] == 'T')
         g += f * 4;
      else break;
      f *= 5;
   }
   return g; 
}

int main()
{
   static long i,j,k,l;
   long n;
   long cnt = 0;
   int f,g;
   long left,right,mid;
   long ans = 0;
   static char e[1000000];
   static char dic[300000000];
   char str[2][14];
   cin >> n;
   for (i = 0; i < n; i++) {
      cin >> str[0] >> str[1];
      if(str[0][0] == 'i') {
         dic[dic_op(str)] = 1;
      }
      else if(str[0][0] == 'f') {
         if(dic[dic_op(str)] == 1)
            e[j] = 1;
         else 
            e[j] = 0;
         j++;
      }
   }
   for (i = 0; i < j; i++) {
      if(e[i] == 1)
         cout << "yes" << endl;
      else
         cout << "no" << endl;
   }
   return 0;
}