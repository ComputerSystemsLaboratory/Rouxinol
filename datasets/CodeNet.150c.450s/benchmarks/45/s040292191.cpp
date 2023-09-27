#include <cstdio>
using namespace std;
typedef long long ll;
#define M (1000000007)

ll pow( ll a, ll b ) {
    if ( b == 0 ) return 1;
    else {
	ll tmp = pow( (a * a) % M, b / 2 ) % M;
	if ( b % 2 ) tmp = ( tmp * a ) % M;

	return tmp;
    }
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    
    ll ans = pow( m, n );

    printf("%d\n", (int)ans);
    
    return 0;
}