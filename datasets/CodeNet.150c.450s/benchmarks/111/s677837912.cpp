#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <map>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


int main(){
	int N;
	cin >> N;
	long long dp[N][21];
	FOR(n,0,N) FOR(x,0,21) dp[n][x] = 0;
	dp[0][0]=1;
	FOR(n,1,N){
		int a;
		cin >> a;
		FOR(x,0,21){
			if(x-a>=0) dp[n][x] += dp[n-1][x-a]; if(n==1&&a==0)break;
			if(x+a<=20)dp[n][x] += dp[n-1][x+a];
		}
	}
	int x;
	cin >> x;
	cout << dp[N-1][x] << endl;

	return 0;
}