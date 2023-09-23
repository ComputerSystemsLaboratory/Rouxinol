#include <stdio.h>
  
int main(){
   int c, i, j, k, n, x;
   scanf("%d %d",&n, &x);
   while(n != 0 ){
   c=0;
   for(i=1;i <= n-2;i++){
      for(j=i+1;j <= n-1;j++){
         for(k=j+1;k <= n;k++){
            if(i+j+k == x){
               c++;
            }
         }
      }
   }
   printf("%d\n",c);
   scanf("%d %d", &n, &x);
   }
   return 0;
}