#include "bits/stdc++.h"

#define REP(i, n) for(decltype(n) i = 0; i < (n); i++)
#define REP2(i, x, n) for(decltype(x) i = (x); i < (n); i++)
#define REP3(i, x, n) for(decltype(x) i = (x); i <= (n); i++)
#define RREP(i, n) for (decltype(n) i = (n) - 1;i >= 0; i--)

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

#define LL long long int
#define LD long double

#define INF 1000000000
#define PI 3.14159265358979

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

// N, E, S, W
const int dx[4] = { -1, 0,  1,  0 };
const int dy[4] = { 0, 1,  0, -1 };

typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<LL> vll;
//==============================================

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, q;
	cin >> n; vi s(n);
	REP(i, n) cin >> s[i];

	cin >> q; vi t(q);
	REP(i, q) cin >> t[i];

	int c = 0;

	bool flag = false;
	REP(i, q) {
		REP(j, n) {

			if (c >= n) {
				flag = true;
				break;
			}

			if (t[i] == s[j]) {
				c++;
				break;
			}
		}

		if (flag) break;
	}

	cout << c << "\n";
	return 0;
}