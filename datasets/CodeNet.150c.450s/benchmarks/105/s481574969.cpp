#include <bits/stdc++.h>

using namespace std;

#define FOE(i, s, t) for (int i = s; i <= t; i++)
#define FOR(i, s, t) for (int i = s; i < t; i++)
#define FOD(i, s, t) for (int i = s; i >= t; i--)

#define LL long long
#define mp make_pair
#define pb push_back

#define K 6001

int t;

int n;
LL a[K], b[K], c[K];
string s;

void add(LL mask) {
	FOD(i, 61, 0) {
		if ((mask & ((LL)(1) << i))) {
			if (!c[i]) {
				c[i] = mask;
				
				FOD(j, i - 1, 0) if (c[i] & ((LL)(1) << j)) c[i] ^= c[j];
				FOE(j, i + 1, 61) if (c[j] & ((LL)(1) << i)) c[j] ^= c[i];
		
				return;
			}
	
			mask ^= c[i];
		}
	}
}

bool verify(LL u) {
	FOD(i, 61, 0) if (u & ((LL) 1 << i)) u ^= c[i];
	return (u == 0);
}	

void solve() {
	scanf("%d", &n);
	
	FOE(i, 1, n) scanf("%lld", &a[i]);

	cin >> s;
	FOE(i, 1, n) b[i] = (s[i - 1] == '0' ? 0 : 1);
	FOE(i, 0, 99) c[i] = 0;
	
	FOD(i, n, 1) {
		if (b[i] == 1) {
			if (!verify(a[i])) {
				printf("1\n");
				return;
			}
		} else {
			add(a[i]);	
		}
	}
	
	printf("0\n");
}

int main() {
	scanf("%d", &t);
	while (t--) solve();
}