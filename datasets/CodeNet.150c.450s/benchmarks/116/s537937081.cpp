#include<iostream>
#include<algorithm>
using namespace std;
#pragma warning(disable:4996)
long long n, k, a[200000], s, ret;
int main() {
	while (true) {
		cin >> n >> k; s = 0; if (n == 0)break; for (int i = 1; i <= n; i++) { scanf("%lld", &a[i]); if (i <= k)s += a[i]; }
		ret = s; for (int i = k + 1; i <= n; i++) { s -= a[i - k]; s += a[i]; ret = max(ret, s); }
		cout << ret << endl;
	}
	return 0;
}