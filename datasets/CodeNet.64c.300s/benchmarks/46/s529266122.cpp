#include <cstdio>
#include <iostream>

const long N=3000000;

int main(){
	//素数テーブル作成
	bool prime[N+1];
	for(long i=0; i<=N; ++i) prime[i]=true;
	prime[1]=false;
	prime[2]=true;
	
	for(long i=2; i<=N; ++i){
		if(prime[i]){
			for(long j=2; i*j<=N; ++j) prime[i*j]=false;	
		}
	}
	
	while(1){
		long a, d;
		int n;
		
		scanf(" %ld %ld %d", &a, &d, &n);
		if(a==0 && d==0) break;
		int count=0;
		long x=0;
		
		long num;
		while(count<n){
			num=a+d*x;
			if(prime[num]) ++count;	
			++x;
		}
		printf("%ld\n", num);
	}
	return 0;
}