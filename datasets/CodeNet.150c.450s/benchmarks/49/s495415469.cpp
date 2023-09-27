#include <stdio.h>
int main(){
  int n,s,i,min=1000,max=3,sum=0,ave;
  while(1){
    scanf("%d",&n);
    if(n==0){
      break;
    }
    for(i=0;i<n;i++){
      scanf("%d",&s);
      if(s<min){
    min=s;
      } 
      if(s>max){
    max=s;
      }
      sum=sum+s;
    }
    sum=sum-max-min;
    ave=sum/(n-2);
    printf("%d\n",ave);
    sum=0;
    min=1000;
    max=3;
  }
  return 0;
}