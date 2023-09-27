#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n, a, b, c, x;
	while (scanf("%d%d%d%d%d", &n, &a, &b, &c, &x), n) {
		int cnt = 0;
		bool flag = true;
		rep(i, n) {
			int t; scanf("%d", &t);
			bool ok = false;
			for (; cnt <= 10000; cnt++) {
				if (x == t) {
					ok = true;
					break;
				}
				x = (a*x + b) % c;
			}
			if (i == n - 1 && ok == true) {
				printf("%d\n", cnt);
				flag = false;
			}
			x = (a*x + b) % c; cnt++;
		}
		if (flag)puts("-1");
	}
}