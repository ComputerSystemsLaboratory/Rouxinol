#include <iostream>
using namespace std;
typedef long long ll;

int num[101];
ll dp[101][22] = {};
int N;

int main(){	
	cin >> N;
	for (int i = 0; i < N; i++) cin >> num[i];

	dp[0][num[0]] = 1;

	for (int i = 1; i < N - 1; i++){
		for (int n = 0; n < 21; n++){
			if (n + num[i] < 21) dp[i][n + num[i]] += dp[i-1][n];
			if (n - num[i] > -1) dp[i][n - num[i]] += dp[i-1][n];
		}
	}
	
	cout << dp[N - 2][num[N - 1]] << endl;
	return 0;
}