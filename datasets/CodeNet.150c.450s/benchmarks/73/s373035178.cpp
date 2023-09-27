#include <bits/stdc++.h>
using namespace std;
int n, val[100009];
int sum(int r) {
	int ret = 0;
	while(r > 0) {
		ret += val[r];
		r -= r & -r;
	}
	return ret;
}
void add(int i, int x) {
	while(i <= n) {
		val[i] += x;
		i += i & -i;
	}
}
int q, tp, x, y;
int main() {
	scanf("%d%d", &n, &q);
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