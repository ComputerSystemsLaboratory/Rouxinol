#include <stdio.h>
int main()
{
  int n,i,t,max,min,sum;
  while(1){
    scanf("%d",&n);
    if(n==0)break;
    max=0;
    min=1001;
    sum=0;
    for(i=0;i<n;i++){
      scanf("%d",&t);
      if(t>max)max=t;
      if(t<min)min=t;
      sum+=t;
    }
    sum=sum-max-min;
    printf("%d\n",sum/(n-2));
  }
  return 0;
}