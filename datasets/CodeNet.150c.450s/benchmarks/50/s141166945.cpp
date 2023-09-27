#include <stdio.h>
int main(void){
  while(1){int n,ans=0;
  scanf("%d",&n);
  if(n==0){
      break;
  }
  n=1000-n;
  ans+=n/500;
  n%=500;
  ans+=n/100;
  n%=100;
  ans+=n/50;
  n%=50;
  ans+=n/10;
  n%=10;
  ans+=n/5;
  printf("%d\n",ans+n%5);
  }
}