#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

#define MAX_N (10010)

bool prime[MAX_N + 1];

int main()
{
    vector<int> P;
    memset( prime, true, MAX_N + 1 );

    // ??¨??????????????????????????????
    for ( int i = 2; i <= MAX_N; i++ ) {
	if ( prime[i] ) {
	    P.push_back( i );	// ?´???°
	    int j = i * 2;
	    while ( j <= MAX_N ) {
		prime[j] = false;
		j += i;
	    }
	}
    }

    int n;
    int ans = 0;

    scanf("%d", &n);

    for ( int i = 0; i < n; i++ ) {
	int d;
	bool check = true;
	scanf("%d", &d);

	for ( int j = 0; j < P.size(); j++ ) {
	    if ( (P[j] * P[j]) > d ) {

		break;
	    }
	    if ( d % P[j] == 0 ) { // ???????????????
		check = false;
		break;
	    }
	}
	if ( check ) {
	    ans++;
	}
    }

    printf("%d\n", ans);
    return 0;
}