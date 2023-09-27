#include <map>
#include <set>
#include <list>
#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define INF (1 << 30)
#define INFL (1LL << 62)
#define MOD7 1000000007
#define MOD9 1000000009
#define EPS 1e-10

#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pul pair<ull, ull>
#define all(a) (a).begin(), (a).end()
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);--i)
#define REP(i,n) for (int i=0;i<(n);++i)
#define RREP(i,n) for (int i=(n)-1;i>=0;--i)

void YES() { cout << "YES" << endl; }
void NO() { cout << "NO" << endl; }
void Yes() { cout << "Yes" << endl; }
void No() { cout << "No" << endl; }
void yes() { cout << "yes" << endl; }
void no() { cout << "no" << endl; }
void digit(int d) { cout << fixed << setprecision(d); }
void IOup() { cin.tie(0); ios::sync_with_stdio(false); }

class RSQ {
	vector<ll> data;
	int size;
	int suffix;

public:
	RSQ() {}
	RSQ(int n) {
		suffix = -1;
		resize(n);
	}

	void resize(int n) {
		size = 1;
		while (size < n) {
			size <<= 1;
		}
		data.resize(size * 2 - 1, 0);
	}

	ll& operator[](int i) {
		update();
		suffix = i;
		return data[i + size - 1];
	}

	void update() {
		if (suffix < 0)
			return;
		int k = suffix + size - 1;
		suffix = -1;
		while (k > 0) {
			k = (k - 1) / 2;
			data[k] = data[k * 2 + 1] + data[k * 2 + 2];
		}
	}

	ll sum(int a, int b) {
		update();
		suffix = -1;
		return sum(a, b, 0, 0, size);
	}

	ll sum(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l)
			return 0;
		if (a <= l && r <= b)
			return data[k];
		int m = (l + r) / 2;
		return sum(a, b, k * 2 + 1, l, m) + sum(a, b, k * 2 + 2, m, r);
	}
};

int main() {
	int n, q, c, x, y;
	cin >> n >> q;
	RSQ rsq(n + 1);
	while (q--) {
		cin >> c >> x >> y;
		if (c) {
			cout << rsq.sum(x, y + 1) << endl;
		}
		else {
			rsq[x] += y;
		}
	}

	return 0;
}