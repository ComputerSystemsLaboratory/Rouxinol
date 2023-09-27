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

const int MAX_N = 1000000;
bool prime[MAX_N];
void eratos() {
	for (int i = 0; i < MAX_N; ++i) prime[i] = true;
	prime[0] = prime[1] = false;
	for (int i = 2; i < sqrt(MAX_N); ++i) {
		if (prime[i]) {
			for (int j = 0; i * (j + 2) < MAX_N; ++j) {
				prime[i * (j + 2)] = false;
			}
		}
	}
}

int main() {
	eratos();
	int a, d, n;
	while (cin >> a >> d >> n, n) {
		int cnt = 0;
		if (prime[a]) cnt++;
		while (cnt < n) {
			a += d;
			if (prime[a]) cnt++;
		}
		cout << a << endl;
	}
	return 0;
}