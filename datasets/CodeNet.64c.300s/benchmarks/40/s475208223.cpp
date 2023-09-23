#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define NUM 100

int main()
{
   static long i,j,k,l;
   static char s[1200];
   fgets(s,1203,stdin);
   for(i=0;s[i];i++) {
      if(isupper(s[i]))
         s[i] = tolower(s[i]);
      else if(islower(s[i]))
         s[i] = toupper(s[i]);
   }
   cout << s;
   return 0;
}