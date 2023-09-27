#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int inf = 1e9;
const int maxN = 1000000;

ll f(ll n) {
	return n * (n+1) * (n+2) / 6;
}

vector<int> makeS(int mod, int d) {
	vector<int> res;
	for (int n = 1; f(n) <= maxN; ++n) {
		if ( f(n) % mod == d ) {
			res.push_back( f(n) );
		}
	}
	return res;
}
vector<int> solve(const vector<int>& s) {
	vector<int> dp(maxN+1, inf); dp[0] = 0;
	for (int i = 0; i < s.size(); ++i) {
		for (int j = 0; j <= maxN; ++j) {
			int nj = j + s[i];
			if (nj <= maxN) {
				dp[nj] = min(dp[nj], dp[j]+1);
			}
		}
	}
	return dp;
}

int main() {
	vector<int> s0 = makeS(1, 0);
	vector<int> s1 = makeS(2, 1);
	vector<int> dp1 = solve(s0);
	vector<int> dp2 = solve(s1);
	int N;
	while (cin >> N, N) {
		cout << dp1[N] << " " << dp2[N] << endl;
	}
}