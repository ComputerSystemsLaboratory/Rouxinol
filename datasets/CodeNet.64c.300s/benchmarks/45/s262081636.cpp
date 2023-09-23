#include <stdio.h>
int main()
{
  int i,n,s,p,moraeruhito,sum,ns;
  while(1){
    scanf("%d %d %d",&n,&s,&p);
    //printf("%d ",n);///
    if(n==0&&s==0&&p==0)break;
    sum=0;
    for(i=1;i<=n;i++){
      scanf("%d",&ns);
      if(i==s)moraeruhito=ns;
      sum+=ns;
    }
    if(moraeruhito==0){
      printf("0\n");
      continue;
    }
    //printf("%d ",sum);///
    sum*=100;
    sum=(double)sum/100*(100-p);
    //printf("%d ",sum);///
    //printf("%d ",moraeruhito);///
    sum/=moraeruhito;
    printf("%d\n",sum);
  }
  return 0;
}