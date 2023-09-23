#include<stdio.h>

int main(){

  int sum=0,n,y,i2,m,j,d,a,b,ans,da,da2,i; 

  scanf("%d",&n);

  for(i=1;i<=n;i++){

    scanf("%d %d %d",&y,&m,&d);

    da=333*200+666*195;

    for(j=1;j<y;j++){
      if(j%3==0){
	sum+=200;
      }
      else{
	sum+=195;
      }
    }
    if(y%3==0){
      sum+=(m-1)*20;
    }
    else{
      for(i2=1;i2<m;i2++){
	if(i2%2==1){
	  sum+=20;
	}
	else{
	  sum+=19;
	}
      }
    }
    sum+=d;
      ans = da - sum+1;
      printf("%d\n",ans);
      sum=0;
  }
  return 0;
}