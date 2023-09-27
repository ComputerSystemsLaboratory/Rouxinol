#include <bits/stdc++.h>
using LL = long long;
const int MAX_N = 200 + 10;

int n;
LL a[MAX_N];
char s[MAX_N];
struct LB {
	LL a[61];
	
	LL add(LL x) {
		for (int i = 60; i >= 0; --i)
			if (x >> i & 1) {
				if (a[i] == 0) {
					a[i] = x;
					break;
				}
				x ^= a[i];
			}
		return x;
	}
} lb;

int main() {
	int T;
	for (scanf("%d", &T); T; --T) {
		scanf("%d", &n);
		for (int i = 1; i <= n; ++i) scanf("%lld", a + i);
		scanf("%s", s + 1);
		for (int i = 0; i <= 60; ++i) lb.a[i] = 0;
		int ans = 0;
		for (int i = n; i >= 1; --i)
			if (s[i] == '0') {
				lb.add(a[i]);
			} else {
				LL d = lb.add(a[i]);
				ans |= d != 0;
			}
		printf("%d\n", ans);
	}
}