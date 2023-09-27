#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,m;
	vector< int >c, dp;
	
	cin >> n >> m;
	c.resize(m);
	dp.resize(n+1);
	
	for(int i=0;i<m;++i)cin >> c[i];
	
	dp[0] = 0;
	for(int i=1;i<=n;++i){
		int min = -1;
		for(int j=0;j<m;++j){
			if(i - c[j] >= 0){
				if(min == -1 || min > dp[i - c[j]] )min = dp[i - c[j]];
			}
		}
		dp[i] = min + 1;
	}
	cout << dp[n] << endl;
	
	return 0;
}