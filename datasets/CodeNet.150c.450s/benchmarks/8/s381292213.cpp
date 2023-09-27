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
   long i,j,k,l;
   long n;
   static int tarou,hanako;
   char t[103],r[103];


   cin >> n;

   for(i=0;i<n;i++) {
      cin >> t; 
      cin >> r;
      if(strcmp(t,r) > 0)
         tarou += 3;
      else if(strcmp(t,r) < 0)
         hanako += 3;
      else {
         tarou++; hanako++;
      }
   }

   printf("%d %d\n",tarou,hanako);

      


   return 0;
}