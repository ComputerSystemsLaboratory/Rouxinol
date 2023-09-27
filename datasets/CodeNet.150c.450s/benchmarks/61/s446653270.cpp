#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define REP(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define rer(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define each(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
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
const double eps = 1e-9;
const int dx[] = { -1, 0, 1, 0};
const int dy[] = { 0, -1, 0, 1};

int main() {
	int N, A, B, C, X;
	while (cin >> N >> A >> B >> C >> X, N) {
		int Y[N]; rep(i, N) cin >> Y[i];
		int ans = -1;
		for (int i = 0; i < N;) {
			ans++;
			if (Y[i] == X) i++;
			X = (A * X + B) % C;
			if (ans > 10000) { ans = -1; break; }
		}
		cout << ans << endl;
	}
	return 0;
}