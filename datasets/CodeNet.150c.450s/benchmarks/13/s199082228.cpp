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
   static char p[102];
   static char s[102];
   static char ch;
   static int sum[26];
   char ok;

   fgets(p,1005,stdin);
   fgets(s,1005,stdin);
   for(i=0;p[i] != '\n';i++) {
      if(p[i] == s[0]) {
         ok = 1;
         k = i;
         for(j=0;s[j] != '\n';j++) {
            if(p[k+j] == '\n')
               k -= k+j;
            if(p[k+j] != s[j]) {
               ok=0;break;
            }
         }
         if(ok)
            break;
      }
   }
   if(ok)
      cout << "Yes";
   else
      cout << "No";
   cout << endl;



    
   return 0;
}