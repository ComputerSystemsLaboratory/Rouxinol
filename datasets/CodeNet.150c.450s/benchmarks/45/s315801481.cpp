#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1000000007;

int Pow(int m, int n)
{
	if (n == 0) return 1;
	int res = Pow(m*m % MOD, n/2);
	if (n&1) res = res*m % MOD;
	return res;
}

signed main()
{
	int m, n;
	cin >> m >> n;
	printf("%lld\n", Pow(m, n));
	return 0;
}