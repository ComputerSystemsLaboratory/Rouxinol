#include <bits/stdc++.h>
 
using namespace std;
 
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;

int dp[1001][1001];

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int A = s1.size(), B = s2.size();
	rep(i, A + 1) dp[i][0] = i; rep(i, B + 1) dp[0][i] = i;
	FOR(i, 1, A + 1) FOR(j, 1, B + 1) {
		int cost = (s1[i - 1] == s2[j - 1]) ? 0 : 1;
		int tmp = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
		dp[i][j] = min(tmp, dp[i - 1][j - 1] + cost);
	}
	cout << dp[A][B] << endl;
	return 0;
}