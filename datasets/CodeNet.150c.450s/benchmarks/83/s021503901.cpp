#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define int ll

#define FOR(i,a,b) for(int i=int(a);i<int(b);i++)
#define REP(i,b) FOR(i,0,b)

int N,W;
vector<int> v,w;
vector<vector<int>> dp; //?????¢???
int read(){
	int i;
	scanf("%lld",&i);
	return i;
}

int rec(int i,int j){
	int retval;
	if(dp[i][j] != -1) return dp[i][j];
	if(i==N){
		retval=0;
	}
	else if(j < w[i]){
		retval=rec(i+1,j);
	}
	else{
		retval=max(v[i]+rec(i+1,j-w[i]),rec(i+1,j));
	}
	
	return dp[i][j]=retval;
}

signed main(){
	// your code goes here
	N=read(),W=read();
	v.resize(N);
	w.resize(N);
	dp.resize(N+1);
	REP(i,N+1) dp[i].resize(W+1,-1);
	REP(i,N){
		v[i]=read();
		w[i]=read();
	}
	
	cout << rec(0,W) << endl;
}