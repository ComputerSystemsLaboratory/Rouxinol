#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

ll ary[110],dp[110][30];
int main() {
	int N,ans;
	cin >> N;
	for (int i = 1; i <= N-1; i++) {
		cin >> ary[i];
	}
	cin >> ans;
	dp[0][0] = 1;
	for (int i = 1; i <= N - 1; i++) {
		if (i == 1 && ary[i] == 0) {
			dp[1][0] = 1;
			continue;
		}
		for (int j = ary[i]; j <= 20; j++) {
			dp[i][j] += dp[i-1][j - ary[i]];
		}
		for (int j = 0; j + ary[i] <= 20; j++) {
			dp[i][j] += dp[i-1][j + ary[i]];
		}
	}
	cout << dp[N - 1][ans] << endl;
	return 0;
}