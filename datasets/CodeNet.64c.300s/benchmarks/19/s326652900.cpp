#include<bits/stdc++.h>
#define rep(i,n)for(ll i=0;i<n;i++)
using namespace std;
typedef long long ll;

ll sum[100001];
int main() {
	ll n;
	while (scanf("%lld", &n), n) {
		ll cnt = 0;
		rep(i, n) {
			sum[i] = cnt;
			int a; scanf("%d", &a);
			cnt += a;
		}
		sum[n] = cnt;
		ll Max = LLONG_MIN;
		rep(i, n) {
			for (int j = i + 1; j <= n; j++) {
				Max = max(Max, sum[j] - sum[i]);
			}
		}
		cout << Max << endl;
	}
	return 0;
}