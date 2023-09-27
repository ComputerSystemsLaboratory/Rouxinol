#include "bits/stdc++.h"
#define MOD 1000000007
#define INF 11234567890
#define in std::cin
#define out std::cout
#define rep(i,N) for(LL i=0;i<N;++i)
typedef long long int LL;

int n, k, a[112345];
int ans;

int main()
{
	while (true)
	{
		memset(a, 0, sizeof(a));
		ans = -1;
		in >> n >> k;
		rep(i, n) { in >> a[i + 1]; }
		if (n == 0 && k == 0) { break; }

		rep(i, n) { a[i + 1] += a[i]; }
		rep(i, n - k + 1)
		{
			auto res = a[i + k] - a[i];
			ans = std::max(ans, res);
		}

		out << ans << std::endl;
	}
	return 0;
}