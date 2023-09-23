#include<cstdio>

int a,d,n;
int prime[1000000];
int main(void){
	prime[1]=1;
	for(int i=2;i<=1000000;i++){
		if(prime[i]==0){
			for(int j=i*2;j<=1000000;j+=i)prime[j]=1;
		}
	}
	while(1){
		scanf("%d %d %d",&a,&d,&n);
		if(a+d+n==0)break;
		int cnt=0;
		while(1){
			if(prime[a]==0)cnt++;
			if(cnt==n)break;
			a+=d;
		}
		printf("%d\n",a);
	}
	return 0;
}