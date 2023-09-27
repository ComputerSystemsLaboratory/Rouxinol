#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int a[10];
int main() {
	int n; cin >> n;
	rep(k, n) {
		rep(i, 10)scanf("%d", &a[i]);
		rep(i, 1 << 10) {
			stack<int>s[2];
			rep(j, 10)if (s[(i >> j) & 1].empty() || a[j] > s[(i >> j) & 1].top())s[(i >> j) & 1].push(a[j]);
			if (s[0].size() + s[1].size() == 10) { puts("YES"); break; }
			if (i == (1 << 10) - 1)puts("NO");
		}
	}
	return 0;
}