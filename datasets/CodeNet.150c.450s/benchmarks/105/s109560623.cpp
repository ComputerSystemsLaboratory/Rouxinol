#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = (a); i <= int(b); i++)
#define per(i, a, b) for (int i = (a); i >= int(b); i--)
using namespace std;

typedef long long ll;
const int maxn = 200;
int T, n;
ll a[maxn + 5], b[80];
char s[maxn + 5];

void insert(ll x) {
	per(i, 60, 0) if (x >> i & 1) {
		if (!b[i]) { b[i] = x; return; }
		else x ^= b[i];
	}
}

bool check(ll x) {
	per(i, 60, 0) if (x >> i & 1) x ^= b[i];
	return x == 0;
}

int main() {
	scanf("%d", &T);
	while (T --> 0) {
		scanf("%d", &n);
		rep(i, 1, n) scanf("%lld", &a[i]);
		scanf("%s", s + 1);
		memset(b, 0, sizeof(b));
		per(i, n, 1) {
			if (s[i] == '0') {
				insert(a[i]);
			} else {
				if (!check(a[i])) { puts("1"); goto nxt; }
			}
		}
		puts("0");
		nxt: void();
	}
	return 0;
}