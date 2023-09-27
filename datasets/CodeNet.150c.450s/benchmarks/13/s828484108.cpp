#include <stdio.h>
#include <string.h>

int main(){
   char str_s[128], str_p[128];
   int i, j, c, n, m;
   scanf("%s",str_s);
   scanf("%s",str_p);
   n=strlen(str_s);
   m=strlen(str_p);
   for(i=0;i < n;i++){
      c=0;
      for(j=0;j < m;j++){
         if(i+j <= n-1){
            if(str_s[i+j] !=str_p[j]){
               break;
            }
         }else{
            if(str_s[i+j-n] !=str_p[j]){
               break;
            }
         }
      }
      if(j == m){
         printf("Yes\n");
         c=1;
         break;
      }
   }
   if(c == 0){
      printf("No\n");
   }

   return 0;
}