#include <bits/stdc++.h>
using namespace std;
int val[131088], p;
int sum(int r) {
	int ret = 0;
	while(r > 0) {
		ret += val[r];
		r -= r & -r;
	}
	return ret;
}
void add(int i, int x) {
	while(i <= 1 << p) {
		val[i] += x;
		i += i & -i;
	}
}
int n, q, tp, x, y;
int main() {
	scanf("%d%d", &n, &q);
	p = 32 - __builtin_clz(n);
	while(q--) {
		scanf("%d%d%d", &tp, &x, &y);
		if(tp == 0) add(x, y);
		else {
			int ret = sum(y) - sum(x - 1);
			printf("%d\n", ret);
		}
	}
	return 0;
}