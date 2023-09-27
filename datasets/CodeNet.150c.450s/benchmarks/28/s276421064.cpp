#include <stdio.h>
typedef long long ll;
#define MAX_N (100010)
#define MAX_W (10010)
int W[MAX_N];
int n, k;

bool check( ll p );


int main()
{

    ll left = 0;
    ll right = (ll)MAX_N * (ll)MAX_W;
    scanf("%d %d", &n, &k);

    for ( int i = 0; i < n; i++ ) {
	scanf("%d", &W[i] );
    }

    while ( right - left > 1) {
	ll mid = ( left + right ) / 2;
	if ( check( mid ) ) {
	    right = mid;
	}
	else {
	    left = mid;
	}
    }
    
    printf("%lld\n", right);

    return 0;
}



bool check( ll p )
{
    int num_track = k;
    ll available = 0;
    for ( int i = 0; i < n; i++ ) {
	if ( W[i] > p ) return false; // ?????????????????????????????????????¶?????????´???
	if ( available < W[i] ) { // ????????????????????´???
	    if ( num_track == 0 ) {
		return false;
	    }
	    else {
		num_track--;
		available = p - W[i];
	    }
	}
	else {
	    available -= W[i];
	}
    }

    return true;
}