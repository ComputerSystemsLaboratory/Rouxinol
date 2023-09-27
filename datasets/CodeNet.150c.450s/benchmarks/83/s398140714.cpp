#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<algorithm>
#include<list>
#include<cmath>
#include<iomanip>
#include<queue>
#include<functional>
#include<climits>
#include<iterator>
#include<unordered_map>

using namespace std;

const double pi=4*atan(1.0);

int mod=1000000007;

int main() {
	int n,W;
	cin>>n>>W;
	vector<int> w(n);
	vector<int> v(n);
	vector<vector<int>> dp(n+1,vector<int>(W+1));
	for(int i=0;i<n;++i){
		cin>>v[i]>>w[i];
	}
	for(int j = 0; j <= W; j++) {
		dp[n][j] = 0;
	}
	for(int i = n - 1; i >= 0; i--) {
		for(int j = 0; j <= W; j++) {
			if(j < w[i])
				dp[i][j] = dp[i + 1][j];
			else
				dp[i][j] = max(dp[i + 1][j],dp[i + 1][j - w[i]] + v[i]);
		}
	}
	cout << dp[0][W] << endl;
	//system("pause");
	return 0;
}