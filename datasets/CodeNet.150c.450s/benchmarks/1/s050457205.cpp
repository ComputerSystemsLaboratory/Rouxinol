#include<bits/stdc++.h>
using namespace std;

#define FOR(i,s,t) for(int i = s; i < t; i++)
using LL = long long; using VL = vector<LL>;
const int INF = 1e9;

const int MAX_N = 100005;

int dp[MAX_N];
int n;
vector<int> a;

void solve() {
	fill(dp, dp + n, INF);
	for (int i = 0; i<n; ++i) {
		*lower_bound(dp, dp + n, a[i]) = a[i];
	}
	cout << lower_bound(dp, dp + n, INF) - dp << endl;
}

int main() {
	cin >> n;
	a.resize(n);
	for (int i = 0; i<n; ++i) cin >> a[i];
	solve();
}
