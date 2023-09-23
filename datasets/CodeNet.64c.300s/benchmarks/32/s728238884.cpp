#include <stdio.h>
int main(){
  int a,n,b,m,M;
  long long t;
  scanf("%d",&n);
  t=0; 
  m=10000000;
  M=-10000000; 
  for(a=1;a<=n;a++){
    scanf("%d",&b);
    t=t+b;
    if(m>b){
      m=b;
    }
    if(M<b){
      M=b;
    }
  }
  printf("%d %d %lld\n",m,M,t);
  return 0;
}