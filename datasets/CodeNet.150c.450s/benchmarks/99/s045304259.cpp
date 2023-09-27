#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define REP(i, a, b) for (int i = (int)a; i < (int)b; ++i)
#define rer(i, a, b) for (int i = (int)a; i <= (int)b; ++i)
#define each(i,c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
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

const char mcxi[] = {'m', 'c', 'x', 'i'};
int m = 1000, c = 100, x = 10, i = 1;
int sum;

void calc(string MCXI) {
	rep(j, MCXI.size()) {
		int num = 1;
		if ('2' <= MCXI[j] && MCXI[j] <= '9') num = MCXI[j++] - '0';
		if (MCXI[j] == 'm') sum += num * m;
		else if (MCXI[j] == 'c') sum += num * c;
		else if (MCXI[j] == 'x') sum += num * x;
		else if (MCXI[j] == 'i') sum += num * i;
	}
}

int main() {
	int n; cin >> n;
	while (n--) {
		sum = 0;
		string MCXI1, MCXI2;
		cin >> MCXI1 >> MCXI2;
		calc(MCXI1); calc(MCXI2);

		string ans;
		int d = 1000;
		rep(i, 4) {
			int tmp = sum / d % 10;
			if (tmp > 1) ans += (char)(tmp + '0');
			if (tmp)  ans += mcxi[i];
			d /= 10;
		}
		cout << ans << endl;
	}
	return 0;
}