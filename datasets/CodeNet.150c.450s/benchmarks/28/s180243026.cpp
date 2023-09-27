#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int w[100005];
int main() {
	int n, k; scanf("%d%d", &n, &k);
	rep(i, n)scanf("%d", &w[i + 1]);
	for (int i = 1; i <= n; i++)w[i] += w[i - 1];
	int a = 0, b = INT_MAX;
	while (a != b) {
		int t = (a + b) / 2;
		int cnt = 0, i = 0;
		while (i < n&&++cnt <= k) {
			i = upper_bound(w, w + n + 1, w[i] + t) - w - 1;
		}
		if (cnt > k)a = t + 1;
		else b = t;
	}
	printf("%d\n", a);
}