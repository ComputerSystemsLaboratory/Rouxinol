#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

const int MAX_N=30;

typedef long long ll;

int N;

ll dp[MAX_N+1];

int main(){
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	FOR(i,4,MAX_N+1){
		dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
	}
	do{
		cin>>N;
		if (N){
			ll day=(dp[N]+9)/10;
			ll y=(day+364)/365;
			cout<<y<<endl;
		}
	}while (N);
	return 0;
}