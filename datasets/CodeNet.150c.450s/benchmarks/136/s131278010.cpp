#include <stdio.h>
int main()
{
  long long i,a,b,max,min,a2,b2;
  while(scanf("%lld %lld",&a,&b)!=EOF){
    if(a<b){
      i=a;
      a=b;
      b=i;
    }
    a2=a;
    b2=b;
    while(1){
      if(b2==0){
	max=a2;
	break;
      } else{
	i=a2%b2;
	a2=b2;
	b2=i;
      }
    }
    min=(a/max)*(b/max)*max;
    printf("%lld %lld\n",max,min);
  }
  return 0;
}