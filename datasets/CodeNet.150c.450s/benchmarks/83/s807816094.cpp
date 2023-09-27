#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, max_w;
	vector< int > w, v;
	vector< vector< int > > dp;
	
	cin >> n >> max_w;
	
	w.resize(n);
	v.resize(n);
	dp.resize(n+1);
	for(int i=0;i<=n;++i){
		dp[i].resize(max_w+1);
	}
	
	for(int i=0;i<n;++i){
		cin >> v[i] >> w[i];
	}
	
	for(int i=0;i<=max_w;++i)dp[0][i] = 0;
	
	for(int i=1;i<=n;++i){
		for(int j=0;j<=max_w;++j){
			if(j < w[i-1]){
				dp[i][j] = dp[i-1][j];
			}else{
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i-1]]+v[i-1]);
			}
		}
	}
	cout << dp[n][max_w] << endl;
	
	return 0;
}