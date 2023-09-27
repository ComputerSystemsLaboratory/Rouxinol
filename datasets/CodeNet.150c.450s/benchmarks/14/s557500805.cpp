
#include<stdio.h>
 int main(){
 
   int i,j,n;
   scanf("%d", &n);
 
   for ( i = 1 ; i <= n ; i++ ){
 
     if ( i % 3 == 0 ){
       printf(" %d", i);
       continue;
     }
     j = i;
      
     while(1){
       if ( j % 10 == 3 ){
     printf(" %d", i);
     break;
       }
       j /= 10;
       if ( j == 0 ) break;
     }
 
   }
 
   printf("\n");
    
   return 0;
 
 }