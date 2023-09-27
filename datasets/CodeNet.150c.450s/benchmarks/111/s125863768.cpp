#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int ans;
	int n; cin >> n;
	vector<int> data(n-1);
	rep(i,n-1){
		cin >> data[i];
	}
	cin >> ans;
	long long dp[100][21] = {0};
	dp[0][data[0]] = 1;
	rep(i,data.size()-1){
		rep(j,21){
			int t = j + data[i+1];
			if(t < 0 || t > 20)continue;
			dp[i+1][t] += dp[i][j];
		}
		rep(j,21){
			int t = j - data[i+1];
			if(t < 0 || t > 20)continue;
			dp[i+1][t] += dp[i][j];
		}
	}
	cout << dp[data.size()-1][ans] << endl;
}