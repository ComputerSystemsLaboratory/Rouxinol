#include <stdio.h>

int main(void){
  int n,i,j,ans=0,x[10000];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
  }

  for(i=0;i<n;i++){
    if(x[i]%2!=0 && x[i]>3073){
      for(j=3;j<x[i]/64;j+=2){
	if(x[i]%j==0){
	  break;
	}
      }
      if(j>=x[i]/64){
	ans++;
      }
    }
    else if((x[i]%2!=0 && x[i]<=3073) || x[i]==2){
      for(j=3;j<x[i];j+=2){
	if(x[i]%j==0) break;
      }
      if(x[i]<=j || x[i]==2){
	ans++;
      }
    }
  }
  printf("%d\n",ans);

  return 0;
}

