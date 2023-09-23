#include <stdio.h>
#include <math.h>

int main(void){
  int n,i,j,k,x[10000],ans=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
  }
  for(i=0;i<n;i++){
    k=sqrt(x[i]);
    if(x[i]==2) ans++;
    else if(x[i]%2!=0){
      for(j=3;j<=k;j++){
	if(x[i]%j==0) break;
      }
      if(j>k) ans++;
    }
  }
  printf("%d\n",ans);
  return 0;
}
