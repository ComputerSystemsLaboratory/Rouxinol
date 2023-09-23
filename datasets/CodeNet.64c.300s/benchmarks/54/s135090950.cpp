#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int n, s[100];
long long dp[102][30];

long long rec(int a, int b){ //s[a]を考える,現在の値はb
	if(dp[a][b]>=0) return dp[a][b];
	
	long long ret=0;
	if(a==n-1){
		if(b==s[n-1]) ret=1;
		else ret=0;	
	}
	else if(b<0 || b>20) return 0;
	else ret+=rec(a+1, b-s[a]) + rec(a+1, b+s[a]);
		
	return dp[a][b]=ret;
}

int main(){
	scanf(" %d", &n);
	for(int i=0; i<n; ++i) scanf(" %d", &s[i]);
	
	memset(dp, -1, sizeof(dp));
	printf("%lld\n", rec(1, s[0]));
}