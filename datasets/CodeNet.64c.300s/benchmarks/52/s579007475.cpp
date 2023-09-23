#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

long dp[11][1001][101];
int n,s;
const int N=9;

long rec(int a, int b, int c){
	if(dp[a][b][c]>=0) return dp[a][b][c];
	
	long ret=0;	
	if(a==n && b>=0){
		if(b==0) ret=1;
		else ret=0;
	}
	else if(b<0) ret=0;
	else for(int i=c-1; i>=0; --i) ret+=rec(a+1, b-i, i);	
	
	return dp[a][b][c]=ret;
}

int main(){
	while(1){
		scanf(" %d %d", &n, &s);
		if(n==0) break;
			
		memset(dp, -1, sizeof(dp));
		printf("%ld\n", rec(0, s, N+1));
	}
}