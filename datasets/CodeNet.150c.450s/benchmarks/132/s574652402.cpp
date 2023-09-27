#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define REP(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define rer(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define all(v) v.begin(), v.end()
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<pair<int, int> > vpii;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

const int inf = 1000000000;
const int mod = 1000000007;
const double EPS = 1e-9;
const int dx[] = { -1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

int n, p;

int main() {
	// cin.tie(0); // tie
	// ios::sync_with_stdio(false); // sync
	while (cin >> n >> p, n || p) {
		int tmp = p;
		int a[n];
		rep (i, n) a[i] = 0;
		for (int i = 0; i < n; ++i) {
			if (p != 0) {
				a[i]++;
				p--;
				if (p == 0 && a[i] == tmp) {
					cout << i << endl;
					break;
				}
			} else {
				p = a[i];
				a[i] = 0;
			}
			if (i == n - 1) i = -1;
		}
	}
	return 0;
}