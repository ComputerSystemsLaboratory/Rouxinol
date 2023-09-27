#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	int p[31]; iota(p, p + 31, 0);
	int w, n; cin >> w >> n;
	while(n --) {
		int i, j; char c;
		cin >> i >> c >> j;
		swap(p[i], p[j]);
	}
	for(int i = 1; i <= w; i ++)
		cout << p[i] << '\n';
	return 0;
}