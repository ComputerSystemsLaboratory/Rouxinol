#include <bits/stdc++.h>
#define range(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, a) range(i, 0, a)
using namespace std;
const int INF = sizeof(int) == sizeof(long long) ? 1e18 : 1e9;
const int MOD = 1000000007;
const long double EPS = 1e-8;

int n, a[1010];

int main() {
	while (cin >> n, n) {
		rep (i, n) cin >> a[i];
		int mini = INF;
		rep (i, n) range (j, i + 1, n) mini = min(mini, abs(a[i] - a[j]));
		cout << mini << endl;
	}
	return 0;
}

