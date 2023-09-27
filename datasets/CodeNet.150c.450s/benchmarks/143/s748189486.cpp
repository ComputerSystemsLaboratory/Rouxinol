#include <bits/stdc++.h>
using namespace std;
const int maxn = 3e5 + 10;
const int mod = 1e9 + 7;
int n, m;
int a[maxn], b[maxn], num[maxn];
int read() {
	int x; scanf("%d", &x); return x;
}
int main() {
	#ifdef LOCAL
		freopen("1.in", "r", stdin);
	#endif
	n = read();
	for (int i = 1; i <= n; ++i) a[i] = read(), num[a[i]]++;
	long long ans = 0;
	for (int i = 1; i <= n; ++i) ans += a[i];
	m = read();
	while (m--) {
		int x = read(), y = read();
		num[y] += num[x]; 
		ans += (y - x) * num[x];
		num[x] = 0;
		cout << ans << endl;
	}
}	