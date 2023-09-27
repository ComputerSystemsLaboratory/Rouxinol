#include <iostream>
#include <algorithm>
using namespace std;
int n, c, v[555555], mem[555555];
void solve(int l, int r) {
	if(r - l == 1) return; c += r - l;
	solve(l, (l + r) / 2);
	solve((l + r) / 2, r);
	merge(v + l, v + (l + r) / 2, v + (l + r) / 2, v + r, mem);
	for(int i = l; i < r; i++) v[i] = mem[i - l];
}
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &v[i]);
	solve(0, n);
	for(int i = 0; i < n; i++) {
		if(i) putchar(' ');
		printf("%d", v[i]);
	}
	printf("\n%d\n", c);
}