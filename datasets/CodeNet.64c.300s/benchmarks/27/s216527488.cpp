#include <stdio.h>
int main(void){
   while(1){
       int n,x,t=0;
       scanf("%d%d",&n,&x);
       
     if(n==0&&x==0)
     break;
     
     for(int i=1;i<=n;i++){
         for(int j=i+1;j<=n;j++){
             for(int k=j+1;k<=n;k++){
                 if(i+j+k==x){
                 t++;
                 }
             }
         }
     }
     
     printf("%d\n",t);
   }
    return 0;
}