#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int bit[100001], n;
int sum(int i) {
	int s = 0;
	while (i > 0) {
		s += bit[i];
		i -= i&-i;
	}
	return s;
}
void add(int i, int x) {
	while (i <= n) {
		bit[i] += x;
		i += i&-i;
	}
}
int main() {
	int q; scanf("%d%d", &n, &q);
	rep(i, q) {
		int com, x, y; scanf("%d%d%d", &com, &x, &y);
		if (com) printf("%d\n", sum(y) - sum(x - 1));
		else add(x, y);
	}
}