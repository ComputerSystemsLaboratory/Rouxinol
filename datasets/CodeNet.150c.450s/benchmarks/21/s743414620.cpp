# include <stdio.h>
  
   int main(void){
  
       int x, ans;
  
       scanf("%d",&x);
  
       if(x>=1 && x<=100){
          ans=x*(x*x);
          printf("%d\n",ans);
 
          return 0;
      }
  }