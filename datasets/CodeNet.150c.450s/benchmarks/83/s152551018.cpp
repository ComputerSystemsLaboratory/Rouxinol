#include <iostream>
#include <cstring>

using namespace std;

const int N = 100, W = 10000;
int values[N], weights[N];
int dp[N + 1][W + 1];

int main(){
	int n,w;
	memset(dp, 0, sizeof(dp));
	cin >> n >> w;
	for(int i = 0;i < n;++i){
		cin >> values[i] >> weights[i];
	}
	for(int i = n;0 <= i;--i){
		for(int j = 0;j <= w;++j){
			if(i == N) dp[i][j] = 0;
			else if(j < weights[i]) dp[i][j] = dp[i + 1][j];
			else dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - weights[i]] + values[i]);
		}
	}
	cout << dp[0][w] << endl;
	return 0;
}