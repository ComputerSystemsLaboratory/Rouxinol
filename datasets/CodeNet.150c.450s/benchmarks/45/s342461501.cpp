// AOJ NTL_1_B
#include<cstdio>

typedef long long ll;
const ll mod = 1000000007;

ll powMod( ll m, ll n, ll mod )
{
	ll ret = 1;

	while( n > 0 )
	{
		if( n&1 )
			ret = (ret*m)%mod;

		m = m*m%mod;
		n >>= 1;
	}

	return ret;
}

int main()
{
	ll m, n;
	scanf( "%lld%lld", &m, &n );

	printf( "%lld\n", powMod( m, n, mod ) );

	return 0;
}