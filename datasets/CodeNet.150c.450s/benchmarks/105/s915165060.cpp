#include <bits/stdc++.h>

#define ln                '\n'
#define all(dat)           dat.begin(), dat.end()
#define loop(i, to)        for (int i = 0; i < to; ++i)
#define cont(i, to)        for (int i = 1; i <= to; ++i)
#define circ(i, fm, to)    for (int i = fm; i <= to; ++i)
#define foreach(i, dat)    for (__typeof(dat.begin()) i = dat.begin(); i != dat.end(); ++i)

typedef long long          num;

using namespace std;

const int lgsz = 62, nsz = 2e2;
int ts, n;
num a[nsz + 5];
string s;

struct linear_basis {
	num d[lgsz + 5];
	
	void inline clear() {
		memset(d, 0, sizeof(d));
	}
	
	void inline ins(num w) {
		circ (i, 0, lgsz) {
			if (!(w >> i & 1)) continue;
			if (!d[i]) { d[i] = w; break; }
			w ^= d[i];
		}
	}
	
	bool inline chk(num w) {
		circ (i, 0, lgsz) {
			if (!(w >> i & 1)) continue;
			w ^= d[i];
		}
		return w == 0;
	}
};
linear_basis b;

void inline solve() {
	b.clear();
	cin >> n;
	cont (i, n) cin >> a[i];
	cin >> s;
	s = ' ' + s;
	bool f = 1;
	for (int i = n; i >= 1; --i) {
		if (s[i] == '0') b.ins(a[i]);
		f &= b.chk(a[i]);
		if (!f) break;
	}
	cout << !f << ln;
}

int main() {
	ios::sync_with_stdio(0);
	cin >> ts;
	cont (cs, ts) {
		solve();
	}
}