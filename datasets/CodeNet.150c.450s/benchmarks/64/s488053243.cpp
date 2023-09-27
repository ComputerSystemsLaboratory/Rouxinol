#include "bits/stdc++.h"
#include <unordered_set>

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
int n, q;
vi A;

bool solve(int i, int m) {
	if (m == 0) return true;
	if (i >= n) return false;

	return (solve(i + 1, m) || solve(i + 1, m - A[i]));
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n; A.resize(n);
	REP(i, n) cin >> A[i];

	cin >> q;
	int m;
	REP(i, q) {
		cin >> m;
		cout << (solve(0, m) ? "yes" : "no") << "\n";
	}
	return 0;
}