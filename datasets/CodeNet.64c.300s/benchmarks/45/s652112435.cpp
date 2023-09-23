#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n, m, p;
	while (scanf("%d%d%d", &n, &m, &p), n) {
		int sum = 0, t;
		for (int i = 1; i <= n; i++) {
			int x; scanf("%d", &x);
			sum += x;
			if (i == m)t = x;
		}
		if (t == 0)puts("0");
		else printf("%d\n", sum*(100 - p) / t);
	}
}