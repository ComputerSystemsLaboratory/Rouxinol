#include <stdio.h>

int main(){

  int m,n,p,i,sum=0,ans=0;
  int x[100]={};
  for(;;){
    
    scanf("%d %d %d",&n,&m,&p);

    if(n==0&&m==0&&p==0){
      break;
    }
    for(i=1;i<=n;i++){
      scanf("%d",&x[i]);
      sum+=x[i];
    }

    if(x[m]!=0){
      ans=((double)100*sum/x[m])*((100-p)*0.01);
    }

    if(x[m]==0){
      printf("0\n");
    }
    else{
      printf("%d\n",ans);
    }
      ans=0;
      sum=0;
      for(i=1;i<=n;i++){
	x[i]=0;
      }
    }  
    return 0;
  }