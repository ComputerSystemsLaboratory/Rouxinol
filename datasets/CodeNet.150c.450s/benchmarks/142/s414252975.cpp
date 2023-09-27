#include <stdio.h>

int main(){
	long long N, K, count=0;
	scanf("%lld %lld", &N, &K);
	long long s[N];
	for(long long i=0;i<N;i++){
		scanf("%lld",&s[i]);
	}
	long long temp=0;
	for(long long j=K+count; j>0+count; j--){
			temp += s[j-1];
		}
	for(long long i=K-1;i<N-1;i++){
		long long t2=0;
		for(long long j=K+count; j>0+count; j--){
			t2+=s[j];
		}
		if(t2>temp){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
		temp=t2;
		count++;
	}
	
	return 0;
}