#include <stdio.h>

int main (void){
  long long n,i; 
  long long num;
  long long max;
  long long min;
  long long sum;
  
  scanf("%lld",&n);

  scanf("%lld",&num);

  max=num;
  min=num;
  sum=num;
  

  for(i=2;i<=n;++i){
    scanf("%lld",&num);

    if(num>max)
      max=num;
    
    if(num<min)
      min=num;

    sum+=num;
  }
  printf("%lld %lld %lld\n",min,max,sum);

  return 0;
}
  