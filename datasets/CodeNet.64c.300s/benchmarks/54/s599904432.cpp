#include <iostream>
#include <cstring>


using namespace std;

long long a[101];
long long n;

long long memo[101][21];

long long fanc(long long lo,long long sum)
{
	if (sum < 0 || 20 < sum){ return 0; }

	if (lo == 0){ return fanc(lo+1,a[lo]); }

	if (lo == n - 1){ return (a[lo] == sum); }

	if (memo[lo][sum] != -1)
	{
		return memo[lo][sum];
	}
	else
	{
		return memo[lo][sum] = fanc(lo + 1, sum + a[lo]) + fanc(lo + 1, sum - a[lo]);
	}
}

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;

	memset(memo,-1,sizeof(memo));

	for (long long i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cout << fanc(0,0) << "\n";
	return 0;
}