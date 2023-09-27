#include <stdio.h>
int main(void){
   
int d,i,s,x,y;

   while(scanf("%d", &d)!= EOF) {
       int sum=0;
       
       for(i=1;i<600/d;i++){
           
           x=i*d;
           y=x*x;
           s=d*y;
           sum+=s;
           
       }
       printf("%d\n",sum);
       if(d == 0) {
           break;
           
       }
       
   }
   return 0;
    
}
