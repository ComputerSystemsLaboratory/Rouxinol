#include <stdio.h>
  
   int main(void){
  
       int a,b,s,p;
       scanf("%d %d",&a,&b);
       if(a>=1 && b<=100){
  
           s=a*b;
          p=(a+b)*2;
          printf("%d %d\n",s,p);
 
      }
      return 0;
  }