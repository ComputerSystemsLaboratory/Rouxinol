#include <stdio.h>
 int main(void){
   int x,y,k;
   for ( ; ; ){
     scanf("%d %d",&x,&y);
     if (x == 0 && y == 0){
       break;
     }
     if (x > y){
       k = y, y = x, x = k;
     }
     printf("%d %d\n",x,y);
   }
   return 0;
 }
