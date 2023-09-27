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
   static char p[1005];
   static char s[13];
   static char ch;
   static int sum[26];
   static char r[12] = "END_OF_TEXT";
   int cnt = 0;
   char ok;
   char end = 0;
   fgets(s,13,stdin);

   while(end == 0) {
      fgets(p,1010,stdin);
      for(i=0;p[i];i++) {
         if('a' <= p[i] && p[i]<= 'z' ||
            'A' <= p[i] && p[i]<= 'Z') {
               if(p[i] == r[0]) {
                  end = 1;
                  for(j=0;r[j];j++) {
                     if(p[i+j] != r[j]) {
                        end=0;break;
                     }
                  }
                  if(end)
                     break;
               }
               if(tolower(p[i]) == tolower(s[0])) {
                  ok = 1;
                  j = i;
                  for(;s[i-j] != '\n';i++) {
                     if(tolower(p[i]) != tolower(s[i-j])) {
                        ok=0;i--; break; 
                     }
                  }
                  if('a' <= p[i] && p[i]<= 'z' ||
                     'A' <= p[i] && p[i]<= 'Z')
                     ok=0;

                  if(ok) {
                     cnt++;
                     i--;
                  }
               }
         }
         for(;;i++){
            if('a' <= p[i] && p[i]<= 'z' ||
               'A' <= p[i] && p[i]<= 'Z');
            else break;
         }
      }
   }
   cout << cnt;
   cout << endl;




   return 0;
}