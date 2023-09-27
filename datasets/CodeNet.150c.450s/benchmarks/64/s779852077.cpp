# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;
using namespace std;

bool dp[30][3000];
int n;
vector<int> N;

bool solve(int i, int m) {
	if (dp[i][m]!=0) return dp[i][m];

	if (m == 0) dp[i][m] = true;
	else if (i >= n)dp[i][m] = false;
	else if (solve(i + 1, m))dp[i][m] = true;
	else if (solve(i + 1, m - N[i]))dp[i][m] = true;
	else dp[i][m] = false;

	return dp[i][m];
}

int main() {
	cin >> n;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		N.emplace_back(a);
	}
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 3000; j++) {
			dp[i][j] = false;
		}
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> a;
		cout << (solve(0, a) ? "yes" : "no") << endl;
	}
}