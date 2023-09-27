#include <stdio.h>
int main(){
  int a,max,min,s,sum,i;
  while(1){
    scanf("%d",&a);
    if(a==0)break;
    max=-1;
    min=1001;
    sum=0;
    for(i=0;i<a;i++){
      scanf("%d",&s);
      sum+=s;
      if(max<s)max=s;
      if(min>s)min=s;
    }
    sum-=max;
    sum-=min;
    sum=sum/(a-2);
    printf("%d\n",sum);
  }
  return 0;
}