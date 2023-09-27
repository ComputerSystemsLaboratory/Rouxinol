#include <bits/stdc++.h>
using namespace std;

int CountMulti(const int& r1,const int& c1,const int& r2,const int& c2){
	return c1*c2*r1;
}

int main(void){
	int N;
	cin >> N;
	vector<long long> rows(N),cols(N);
	for(int i=0;i<N;i++)
		cin >> rows[i] >> cols[i];

	const long long INF = 1e18;
	long long dp[101][101];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i == j)dp[i][j] = 0;
			else dp[i][j] = INF;
		}
	}
	for(int i=0;i<N-1;i++){
		dp[i][i+1] = rows[i]*rows[i+1]*cols[i+1];
	}

	for(int d=2;d<N;d++){
		for(int l=0;l<N-d;l++){
			for(int r=l;r<l+d;r++){
				dp[l][l+d] = min(dp[l][l+d], dp[l][r] + dp[r+1][l+d] + rows[l]*rows[r+1]*cols[l+d]);
			}
		}
	}
	cout << dp[0][N-1] << endl;
	return 0;
}