#include <cstdio>
#define MAX_N (10010)
using namespace std;
int par[MAX_N];
int rank[MAX_N];

int root( int x ) {
    if ( par[x] == x ) return par[x];
    else return par[x] = root( par[x] );
}

void unite( int x, int y ) {
    int r_x = root(x);
    int r_y = root(y);    

    par[r_y] = par[r_x];
}

bool isSame( int x, int y ) {
    return root(x) == root(y);
}


int main()
{
    int n, q;

    scanf("%d %d", &n, &q);

    for ( int i = 0; i < n; i++ ) {
	par[i] = i;
	rank[i] = i;
    }

    for ( int i = 0; i < q; i++ ) {
	int c, x, y;
	scanf("%d %d %d", &c, &x, &y);
	if ( c == 0 ) {		// unite
	    unite( x, y );
	}
	else { 			// same
	    printf("%d\n", isSame( x, y ) ? 1 : 0);
	}
    }

    return 0;
}