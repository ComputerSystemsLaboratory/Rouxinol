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

int main() {
	int total = 0;
	REP(i, 1, 1000) rep(j, 10) {
		if (i % 3 == 0) total += 20;
		else {
			if (j % 2) total += 20;
			else total += 19;
		}
	}

	int n; cin >> n;
	rep(i, n) {
		int Y, M, D;
		cin >> Y >> M >> D;

		int sum = 0;
		REP(i, 1, Y) rep(j, 10) {
			if (i % 3 == 0) sum += 20;
			else {
				if (j % 2) sum += 19;
				else sum += 20;
			}
		}
		REP(i, 1, M) {
			if (Y % 3 == 0) sum += 20;
			else {
				if (i % 2) sum += 20;
				else sum += 19;
			}
		}
		sum += D - 1;
		cout << total - sum << endl;
	}
	return 0;
}