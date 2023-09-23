#include<stdio.h>
int main(){
  long long int r,temp,x,y;
  while(scanf("%lld",&x)!=EOF){
    scanf("%lld",&y);
    if(x<y){
      temp=x;
      x=y;
      y=temp;
    }
    long long int a=x;
    long long int b=y;
    while(y!=0){
      r=x%y;
      x=y;
      y=r;
    }
    long long int lcm=a*b/x;
    printf("%lld %lld\n",x,lcm);
  }
  return(0);
}