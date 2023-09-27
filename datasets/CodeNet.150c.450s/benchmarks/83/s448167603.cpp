#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)

using namespace std;

int main(){

	int N,W,v[105],w[105],dp[10005][100];
	cin>>N>>W;
	for(int i=0; i<N; i++){
		cin>>v[i]>>w[i];
		dp[0][i] = 0;
	}

	for(int i=0; i<=W; i++){
		if(w[0] <= i) dp[i][0] = v[0];
		else dp[i][0] = 0;
	}

	for(int i=1; i<=W; i++){
		for(int j=1; j<N; j++){
			if(w[j] <= i && 0 <= i-w[j] ){
				dp[i][j] = max(dp[i][j-1], dp[i-w[j]][j-1] + v[j]);
			}else{
				dp[i][j] = dp[i][j-1];
			}
		}
	}

	cout<<dp[W][N-1]<<endl;

	return 0;
}