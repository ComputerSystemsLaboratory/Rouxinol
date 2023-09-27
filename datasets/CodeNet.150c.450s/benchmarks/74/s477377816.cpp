#include <iostream>

using namespace std;

int n,m,c[20];
int dp[20][50001];

int rec(int coin,int money) {
	if(coin == -1) return money;
	if(dp[coin][money] == -1) {
		dp[coin][money] = rec(coin-1,money);
		if(money >= c[coin]) dp[coin][money] = min(dp[coin][money],1+rec(coin,money-c[coin]));
	}
	return dp[coin][money];
}

int main() {
	cin >> n >> m;
	for(int i = 0;i < m;i++) cin >> c[i];
	for(int i = 0;i < 20;i++)for(int j = 0;j < 50001;j++) dp[i][j] = -1;
	cout << rec(m-1,n) << endl;
}

