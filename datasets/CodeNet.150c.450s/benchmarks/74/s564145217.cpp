#include <iostream>
#define INF 1e+9
using namespace std;


int main(){
	int n,m;
	int gaku[20];
	int dp[21][50001];
	cin >> n >> m;
	for(int i = m - 1;i >= 0;i--) cin >> gaku[i];
	for(int i = 0;i <= 50000;i++){
		for(int j = 0;j <= 20;j++) dp[j][i] = INF;
	}
	dp[0][0] = 0;
	for(int i = 1;i <= m;i++){
		for(int j = 0;j <= n;j++){
			if(j - gaku[i - 1] < 0) dp[i][j] = dp[i - 1][j];
			else dp[i][j] = min(dp[i - 1][j],dp[i][j - gaku[i - 1]] + 1);
		}
	}
	cout << dp[m][n] << endl;
	return 0;
}