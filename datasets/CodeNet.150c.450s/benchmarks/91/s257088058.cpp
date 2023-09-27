#include<stdio.h>

int main(void){
	const int MAX_V = 1000000;
	int prime[MAX_V+1],sum[MAX_V];
	int i,k,n,ans;
	for(i=2;i<=MAX_V;i++){
		prime[i] = 1;
		sum[i] = 0;
	}
	for(i=2;i*i<=MAX_V;i++){
		if(prime[i]==1){
    	for(k=2*i;k<=MAX_V;k+=i){
				prime[k] = 0;
			}
		}
	}
  for(i=2;i<=MAX_V;i++){
		sum[i+1]=sum[i]+prime[i];
  }
  while(scanf("%d",&n) != EOF){
    ans = sum[n+1];
    printf("%d\n",ans);
  }
  return 0;
}