#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define fi first
#define se second
#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define ROF(i,a,b) for (int i = (b-1); i >= a; --i)
#define REP(i,a,b) for (int i = a; i <= b; ++i)
#define PER(i,a,b) for (int i = b; i >= a; --i)
#define F0R(i,b) FOR(i,0,b)
#define R0F(i,b) ROF(i,0,b)
#define R1P(i,b) REP(i,1,b)
#define P1R(i,b) PER(i,1,b)
using namespace std;

int n, a[200];
char s[201];
int x[63];

void solve() {
	int n;
	cin >> n;
	F0R(i,n) cin >> a[i];
	cin >> s;
	memset(x, 0, sizeof(x));
	R0F(i,n) {
		if (s[i] == '0') {
			R0F(j, 63) if (a[i] & (1ll<<j)) {
				if (!x[j]) { x[j] = a[i]; break; }
				a[i] ^= x[j];
			}
		} else {
			R0F(j, 63) if (a[i] & (1ll<<j)) a[i] ^= x[j];
			if (a[i]) { puts("1"); return; }
		}
	}
	puts("0");
}

signed main() {
	int t;
	cin >> t;
	while (t--) solve();
}
