// AOJ ITP 1_4_D
#include<cstdio>
#include<algorithm>
#define rep(i,a) for( int i = 0; i != (a); ++i )

typedef long long ll;

const int INF = 1 << 30;

int n;
ll ma=-INF, mi=INF, sum;

int main()
{
	scanf( "%d", &n );
	rep( i, n )
	{
		ll a;
		scanf( "%lld", &a );
		ma = std::max( ma, a );
		mi = std::min( mi, a );
		sum += a;
	}

	printf( "%lld %lld %lld\n", mi, ma, sum );

	return 0;
}