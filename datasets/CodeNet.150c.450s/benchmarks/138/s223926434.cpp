#include <stdio.h> 

int main(void) 
{ 
   int x, y, r, tmp; 
   scanf("%d %d",&x,&y); 

   if(x<y){
   tmp = x; 
   x = y ;
   y = tmp;
   }
    r=x%y;
   
   while(r!=0){ 
   x = y; 
   y = r; 
   r = x % y; 
   }

   printf("%d\n",y);
   
   return 0 ;
}