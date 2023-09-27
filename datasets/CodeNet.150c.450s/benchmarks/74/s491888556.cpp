#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1 << 28;
const int MAX_N = 50010;
const int MAX_M = 21;
int c[MAX_M];
int dp[MAX_N];

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	fill(dp, dp + MAX_N, INF);
	
	int n, m;
	cin >> n >> m;
	
	dp[n] = 0;
	
	for(int i = 0; i < m; ++i){
		cin >> c[i];
	}
	
	for(int i = n; i > 0; --i){
		for(int j = 0; j < m; ++j){
			if(i >= c[j]){
				dp[i - c[j]] = min(dp[i] + 1, dp[i - c[j]]);
			}
		}
	}
	
	cout << dp[0] << endl;
	
	return 0;
}