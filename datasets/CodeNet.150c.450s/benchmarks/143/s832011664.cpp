#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, q;
const int maxn = 1e5 + 10;
int a[maxn], cnt[maxn];
ll ans;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		cnt[a[i]]++;
		ans += a[i];
	}
	cin >> q;
	for(int i = 1; i <= q; ++i)
	{
		int b, c;
		cin >> b >> c;
		ans += (c - b) * cnt[b];
		cnt[c] += cnt[b];
		cnt[b] = 0;
		printf("%lld\n", ans);
	}
	return 0;
}
	 