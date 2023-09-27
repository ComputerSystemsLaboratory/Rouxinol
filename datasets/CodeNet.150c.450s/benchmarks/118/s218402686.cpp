#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n; scanf("%d", &n);
	int sum = (999 / 3) * 200 + (999 - 999 / 3) * 195 + 1;
	rep(i, n) {
		int y, m, d; scanf("%d%d%d", &y, &m, &d);
		int ans = sum; y--; m--;
		ans -= (y / 3) * 200 + (y - y / 3) * 195;
		if ((y + 1) % 3)ans -= (m / 2) * 19 + (m - m / 2) * 20;
		else ans -= m * 20;
		ans -= d;
		printf("%d\n", ans);
	}
}