#include <iostream>
#include <cstdio>
using namespace std;

const long MAX_N=10000000;
bool isPrime[MAX_N];

int main(){
	//素数テーブルの設定
	for(long i=2; i<=MAX_N; ++i)
		isPrime[i]=true;
		
	for(long i=2; i<=MAX_N; ++i){
		if(isPrime[i]){
			for(long j=2; i*j<=MAX_N; ++j) isPrime[i*j]=false;
		}
	}
	
	//実際の問題処理
	long n;
	
	while( scanf("%ld", &n) != EOF ){
		long count=0;
		
		for(long i=2; i<=n; ++i){
			if(isPrime[i]) ++count;
		}
		
		printf("%ld\n", count);
	}	 

	return 0;
}