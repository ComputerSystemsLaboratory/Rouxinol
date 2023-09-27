#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int bit[200000], s, a[200000], b[200000], n;
void add(int k, int x) {
	while (k <= s) {
		bit[k] += x;
		k += k&-k;
	}
}
int sum(int k) {
	int res = 0;
	while (k > 0) {
		res += bit[k];
		k -= k&-k;
	}
	return res;
}
void compress() {
	sort(b, b + n);
	int t = unique(b, b + n) - b;
	rep(i, n)a[i] = lower_bound(b, b + t, a[i]) - b + 1;
	s = t + 1;
}
int main() {
	scanf("%d", &n);
	long long ans = 0;
	rep(i, n) {
		scanf("%d", &a[i]); b[i] = a[i];
	}
	compress();
	rep(i, n) {
		ans += i - sum(a[i]);
		add(a[i], 1);
	}
	printf("%lld\n", ans);
}