#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
	int n, k;
	int a[123456];
	for (;;) {
		scanf("%d %d", &n, &k);
		if (!n && !k) break;
		rep(i, n) scanf("%d", &a[i]);

		long long int ps = 0;
		rep(i, k) ps += a[i];

		long long int big = ps;
		for (int i = 0; i < n - k; i++) {
			ps -= a[i];
			ps += a[i + k];
			big = max(ps, big);
		}

		printf("%lld\n", big);
	}

	return 0;
}