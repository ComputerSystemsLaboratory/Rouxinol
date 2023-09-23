// AOJ 0557
#include <iostream>

using namespace std;

int main()
{
	int n;
	int num[128];
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> num[i];
	}

	long long dp[128][32] = {};
	dp[1][num[0]] = 1;
	for (int i = 1; i < n - 1; i++){
		for (int j = 0; j < 32; j++){
			if (!dp[i][j]) continue;
			int kotori = j + num[i], hanayo = j - num[i];
			if (0 <= kotori && kotori <= 20){
				dp[i + 1][kotori] += dp[i][j];
				// cout << dp[i + 1][kotori] << endl;
			}
			if (0 <= hanayo && hanayo <= 20){
				dp[i + 1][hanayo] += dp[i][j];
				// cout << dp[i + 1][hanayo] << endl;
			}
		}
	}
	// for (int i = 0; i < 32; i++){
	// 	cout << dp[n - 1][i] << " ";
	// }
	// cout << endl;
	cout << dp[n - 1][num[n - 1]] << endl;

	return 0;
}