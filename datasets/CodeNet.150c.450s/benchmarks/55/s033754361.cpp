#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define NUM 200

int main()
{
   static long i,j,k,l;
   static char s[NUM][1003];
   static int sum[NUM];


   for(i=0;;i++){
      fgets(s[i],1005,stdin);
      if(s[i][0] == '0')
         break;
      for(j=0;s[i][j] != '\n';j++)
         sum[i] += s[i][j] - '0';
   }
   for(j=0;j<i;j++)
      printf("%d\n",sum[j]);

   return 0;
}