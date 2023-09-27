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

int n, r;
int p, c;

int main() {
	while (cin >> n >> r, n && r) {
		if (n == 1) {
			cout << 1 << endl;
			continue;
		}

		vector<int> card;
		for (int i = n; i > 0; --i) card.push_back(i);
		rep(i, r) {
			cin >> p >> c;
			vector<int> tmp;
			rep(j, c) tmp.push_back(card[p - 1 + j]);
			rep(j, p - 1) tmp.push_back(card[j]);
			REP(j, p + c - 1, n) tmp.push_back(card[j]);
			card = tmp;
		}
		cout << card[0] << endl;
	}
}