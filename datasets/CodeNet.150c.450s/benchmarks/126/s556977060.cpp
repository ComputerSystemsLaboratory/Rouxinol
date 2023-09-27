//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0515
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	while (true) {
		int a, b; cin >> a >> b;
		if (a == 0 && b == 0)break;
		int n; cin >> n;
		vector<vector<ll>> f(a + 1, vector<ll>(b + 1, false));
		vector<vector<ll>> dp(a + 1, vector<ll>(b + 1, 0));
		for (int i = 0; i < n;i++) {
			int A, B; cin >> A >> B;
			f[A][B] = true;
		}
		dp[1][1] = 1;
		for (int i = 1; i <= a;i++) {
			for (int j = 1; j <= b;j++) {
				if (i == 1 && j == 1)continue;
				if (!f[i][j]) dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
		cout << dp[a][b] << endl;
	}
}