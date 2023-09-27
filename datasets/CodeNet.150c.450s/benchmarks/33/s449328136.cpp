#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define int long long

int PlusTax(int n, int tax)
{
	return (int)(n * (100 + tax) / 100.0);
}

int GetBase(int n, int tax)
{
	int l = 0, r = 1000;
	while (r - l > 1)
	{
		int mid = (l + r) / 2;
		if (PlusTax(mid, tax) > n) r = mid;
		else l = mid;
	}
	if (PlusTax(l, tax) != n) return 0;
	return l;
}

signed main()
{
	int X, Y, S;
	while (cin >> X >> Y >> S, X || Y || S)
	{
		int ans = 0;
		for (int i = 1; i < S; i++)
		{
			int a = GetBase(i, X);
			int b = GetBase(S - i, X);
			if (a == 0 || b == 0) continue;
			ans = max(ans, PlusTax(a, Y) + PlusTax(b, Y));
		}
		printf("%lld\n", ans);
	}
	return 0;
}