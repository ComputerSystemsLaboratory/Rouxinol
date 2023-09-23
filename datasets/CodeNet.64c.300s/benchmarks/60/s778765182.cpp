#include<bits/stdc++.h>
using namespace std;

int main(void){

	int a, b, n;
	while (cin >> a >> b, a, b){
		cin >> n;
		int dp[20][20] = { 0 };
		for (int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			dp[x][y] = -1;
		}
		dp[1][1] = 1;
		for (int i = 1; i <= a; i++){
			for (int j = 1; j <= b; j++){
				if (i == 1 && j == 1) continue;
				dp[i][j] = (dp[i][j] + 1) * (dp[i - 1][j] + dp[i][j - 1]);
			}
		}

		cout << dp[a][b] << endl;
	}

	return 0;
}