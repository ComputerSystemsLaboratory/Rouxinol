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
	int n;
	while (cin >> n, n) {
		string now; cin >> now;
		int ans = 0;
		rep(i, n - 1) {
			string next; cin >> next;
			if (now == "lu" && next == "ru") ans++;
			else if (now == "ru" && next == "lu") ans++;
			else if (now == "ld" && next == "rd") ans++;
			else if (now == "rd" && next == "ld") ans++;
			now = next;
		}
		cout << ans << endl;
	}
	return 0;
}