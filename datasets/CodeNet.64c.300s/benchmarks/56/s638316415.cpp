#include"bits/stdc++.h"
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) FOR(i, 0, n)
#define RFOR(i, a, b) for (int i = b - 1; i >= a; i--)
#define RREP(i, n) RFOR(i, 0, n)
#define rep(i, a, b) for (auto i = a; i < b; i++)
#define rrep(i, a, b) for (auto i = a; i > b; i--)
#define range(i, a, b) (a <= i && i < b)
#define fi first
#define fs first
#define se second
#define sc second
using namespace std;
using vec = vector<int>;
using mat = vector<vec>;
typedef pair<int, int> P;
#define ll long long

void solve() {
	int y, m, d;
	cin >> y >> m >> d;

	int base = 39*5*666 + 40*5*333+1;
	int tmp = 0;

	FOR(i, 1, y) {
		if(i%3 == 0) tmp += 40 * 5;
		else tmp += 39 * 5;
	}

	FOR(i, 1, m) {
		if (i % 2 || y % 3 == 0) tmp += 20;
		else tmp += 19;
	}

	tmp += d;

	cout << base - tmp << endl;



}

int main() {
	int n;
	cin >> n;
	REP(_, n) solve();
}
