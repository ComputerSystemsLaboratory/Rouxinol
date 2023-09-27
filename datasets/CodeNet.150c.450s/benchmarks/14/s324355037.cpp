#include <stdio.h>
int main(void){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%3==0||i%10==3){
    printf(" %d",i);
    }
    else{
       for(int x=i/10;x;x/=10){
           if(x%10==3){
               printf(" %d",i);
               break;
           }
       } 
    
    }
}
printf("\n");
return 0;
}