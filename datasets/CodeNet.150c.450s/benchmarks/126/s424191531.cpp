#include<iostream>
#include<string>

using namespace std;

int main(){
	int dp[20][20];
	int n;
	int a, b;
	int x, y;
	while(cin >> a >> b && a&&b){
		cin >> n;
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				dp[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			dp[y][x] = -1;
		}
		dp[1][1] = 1;
		for (int i = 1; i <= b; i++) {
			for (int j = 1; j <= a; j++) {
				if ((i == 1)&&(j == 1)) {
					continue;
				}
				if (dp[i][j] != -1) {
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
				}
				else {
					dp[i][j] = 0;
				}
			}
		}
		cout << dp[b][a] << endl;
	}
	

	return 0;
}