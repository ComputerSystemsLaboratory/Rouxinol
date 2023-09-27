#include <stdio.h>
int main()
{
  long long a=0,cou=0,n=0,sum=0,min,max=-1000000;
  min=1000000;
  scanf("%lld",&n);
  for(cou=0;cou<n;cou++){
    scanf("%lld",&a);
    sum=sum+a;
    if(a<min){
      min=a;
    }
    if(max<a){
      max=a;
    }
  }
  printf("%lld %lld %lld\n",min,max,sum);
  return 0;
}
 
   