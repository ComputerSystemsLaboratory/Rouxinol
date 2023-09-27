#include<stdio.h>

long long int re[100001];

int main(){
	int n,k,i;
	long long c;
	re[0]=0;
	while(0<=scanf("%d%d",&n,&k)){
		if(n==0 && k==0)break;
		
		for(i=1;i<=n;i++){
			scanf("%lld",&c);
			re[i]=re[i-1]+c;
		}
		c=re[k];
		for(i=1;i+k-1<=n;i++){
			if(c<re[i+k-1]-re[i-1])c=re[i+k-1]-re[i-1];
		}
		printf("%lld\n",c);
	}
	return 0;
}