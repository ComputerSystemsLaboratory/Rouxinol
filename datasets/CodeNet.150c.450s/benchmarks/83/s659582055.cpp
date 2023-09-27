#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int N, W;
	cin >> N >> W;
	int dp[N+1][W+1], v[N], w[N];
	for (int i = 0; i < N; ++i){
		cin >> v[i] >> w[i];
	}
	for (int i = 0; i < N + 1; ++i){
		for (int j = 0; j < W + 1; ++j){
			dp[i][j] = 0;
		}
	}
	for (int i = 1; i < N + 1; ++i){
		for (int j = 0; j < W + 1; ++j){
			if (j >= w[i-1]){
				dp[i][j] = max(dp[i-1][j-w[i-1]]+v[i-1], dp[i-1][j]);
			}else{
				dp[i][j] = dp[i-1][j];
			}
			if(j) dp[i][j] = max(dp[i][j], dp[i][j-1]);
		}
	}
	cout << dp[N][W] << endl;
	return 0;
}