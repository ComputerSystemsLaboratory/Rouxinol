#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define ll long long
#define ull unsigned long long
#define INF (1 << 30)
#define LLINF (1LL << 62)
#define MOD7 1000000007
#define MOD9 1000000009
#define eps 1e-9
#define P pair<int, int>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pul pair<ull, ull>
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);--i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define RREP(i,n) for (int i=(n)-1;i>=0;--i)

void YES() { cout << "YES\n"; }
void NO() { cout << "NO\n"; }
void Yes() { cout << "Yes\n"; }
void No() { cout << "No\n"; }

int n, q, a[20], m;
bool used[20];

bool dfs(int sum, int d) {
	if (sum == m)
		return true;
	if (d == n || sum > m)
		return false;

	for (int i = d; i < n; ++i) {
		used[i] = true;
		if (dfs(sum + a[i], i + 1))
			return true;
		used[i] = false;
	}

	return false;
}

int main() {
	cin >> n;
	REP(i, n)
		cin >> a[i];
	cin >> q;
	while (q--) {
		cin >> m;
		if (dfs(0, 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}