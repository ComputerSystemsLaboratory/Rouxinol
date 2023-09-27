#include <bits/stdc++.h>

using namespace std;

const int maxn = 100001;
int T[4*maxn + 1];
int N, Q, q, a, b;


int update( int ini, int fin, int nd, int s, int v ){

	if( s > fin || s < ini )
		return T[nd];

	if( ini == fin ){
		T[nd] += v;
		return T[nd];
	}

	int m = ( ini + fin ) >> 1;
	int l = ( nd << 1 );
	int r = l | 1;

	int v1 = update( ini, m, l, s, v);
	int v2 = update( m + 1, fin, r, s, v);
	T[nd] = v1 + v2;
	return T[nd];          
}


int query( int ini, int fin, int nd, int qi, int qe ){

	if( qi > fin || qe < ini )
		return 0;

	if( qi <= ini && fin <= qe )
		return T[nd];

	int m = ( ini + fin ) >> 1;
	int l = nd << 1;
	int r = l | 1;

	int v1 = query( ini, m, l, qi, qe );
	int v2 = query( m + 1, fin, r, qi, qe);
	return v1 + v2;
}


int main( void ){

	//freopen("input.in", "r", stdin);
    scanf("%d%d", &N, &Q);

    for( ; Q > 0; --Q ){
    	scanf("%d%d%d", &q, &a, &b);
    	if( q )
    		--a, --b, printf("%d\n", query( 0, N - 1, 1, min(a, b), max(a,b) ) );
    	else
    		--a, update( 0, N - 1, 1, a, b );	
    }

	return 0;
}