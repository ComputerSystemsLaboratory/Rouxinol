#include <iostream>
#include <algorithm>
using namespace std;
int n, a[200000], b[200000], bit[262145];
void add(int i, int x) {
	while (i <= n) bit[i] += x, i += i & -i;
}
int sum(int i) {
	int ret = 0;
	while (i > 0) ret += bit[i], i -= i & -i;
	return ret;
}
int sum(int l, int r) {
	return sum(r - 1) - sum(l - 1);
}
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &a[i]), b[i] = a[i];
	sort(b, b + n);
	long long ret = 0;
	for(int i = 0; i < n; i++) {
		int ptr = lower_bound(b, b + n, a[i]) - b; add(ptr + 1, 1);
 		ret += sum(ptr + 2, n + 1);
	}
	printf("%lld\n", ret);
	return 0;
}