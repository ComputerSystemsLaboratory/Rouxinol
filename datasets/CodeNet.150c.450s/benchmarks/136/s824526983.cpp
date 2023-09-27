#include <cstdio>

int dp[30000010];
typedef long long ll;

ll gcd(ll a, ll b)
{
	return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
	return a / gcd(a, b) * b;
}
int main(int argc, char const *argv[])
{
	ll x, y;
	while(~scanf("%lld %lld", &x, &y))
	{
		printf("%lld %lld\n", gcd(x, y), lcm(x, y));
	}
	return 0;
}