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
   static char c;
   static int sum[26];


   for(i=0;cin >> c;i++) {
      if('a' <= c && c <= 'z')
         sum[ c - 'a' ]++;
      else if('A' <= c && c <= 'Z')
         sum[ c - 'A' ]++;
   }
   for(i=0;i<26;i++) 
      printf("%c : %d\n",'a'+i,sum[i]);
    
   return 0;
}