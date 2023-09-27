#include<cstdio>

int main(void){
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0)break;
		int cnt=0;
		for(int i=1;i<=n/2;i++){
			int j=i,sum=i;
			while(sum<n){
				j++;
				sum+=j;
			}
			if(sum==n)cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}