#include <stdio.h>
 
int main(){
   int x, y, z, i, a;
   scanf("%d %d\n",&x, &y);
   i=1;
   if(y > x){
      a=x;
      x=y;
      y=a;
   }
   for(;i>0;){
      z=x%y;
      if(z==0){
         printf("%d\n",y);
         break;
      }
      x=y;
      y=z;
   }
   return 0;
}
 
 