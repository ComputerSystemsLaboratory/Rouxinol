#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	while(1){
		long n, k;
		long s[100001]; //i番目までの和
		s[0]=0;
		
		scanf(" %ld %ld", &n, &k);
		if(n==0) break;
		for(long i=0; i<n; ++i){
			int a;
			scanf(" %d", &a);
			s[i+1] = s[i]+a;
		}
		
		long max=-1500000000;
		for(int i=1; i+k<=n; ++i){
			long tmp=s[i+k]-s[i];	
			if(tmp>max) max=tmp;
		}
		
		printf("%ld\n", max);
	}
}