#include<stdio.h>

int main(){
  int n,s;
  int maxm,mini,sum;
  
  while(1){
    scanf("%d",&n);
    if(n==0)break;
    sum=0;
    maxm=0;
    mini=1000;
    for(int i=0;i < n;i++){
      scanf("%d",&s);
      sum=sum+s;
      if(maxm < s){
        maxm=s;
      }
      if(mini > s){
        mini=s;
      }
    }

    printf("%d\n", (sum-maxm-mini)/(n-2) );
  }
  return 0;
}