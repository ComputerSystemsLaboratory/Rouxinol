#include<stdio.h>
int main(){

  int n,i,j=0,ans=0,sum=0;
  for(;;){
    scanf("%d",&n);
    if(n==0){
      break;
    }
  for(i=1;i<n;i++){
    for(j=i;j<n;j++){
      sum+=j;
      
      if(sum==n){
	ans++;
	break;
	}
      
      if(sum>n){
	sum=0;
	break;
      }
      
    }
  }
    printf("%d\n",ans);
    ans=0;
    sum=0;
  }
  return 0;
}