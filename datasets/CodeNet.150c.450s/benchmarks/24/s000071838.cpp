#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<int, int>P;

P h[100000];
int main() {
	int n, m;
	while (scanf("%d%d", &n, &m), n) {
		int ans = 0;
		rep(i, n) {
			int d, p; scanf("%d%d", &d, &p);
			ans += d*p;
			h[i] = P(p, d);
		}
		sort(h, h + n, greater<>());
		int sum = m;
		int i;
		for (i = 0; i < n&& sum - h[i].second >= 0; i++) {
			sum -= h[i].second;
			ans -= h[i].first*h[i].second;
		}
		ans -= h[i].first*sum;
		printf("%d\n", max(0, ans));
	}
}