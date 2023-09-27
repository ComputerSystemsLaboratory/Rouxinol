#include <cstdio>
using namespace std;
#define MAX_N (105)
#define INF (10000)
int n;
int G[MAX_N][MAX_N];
bool MST[MAX_N];
int DIST[MAX_N];		// MST??¨????????¢
int NEIGH[MAX_N];		// ??£??????

int main()
{
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
	for ( int j = 0; j < n; j++ ) {
	    int d;
	    scanf("%d", &d);
	    G[i][j] = ( d == -1 ) ? INF : d;
	}
    }

    int r = 0;
    int size_mst = 1;

    MST[r] = true;
    
    for ( int i = 0; i < n; i++ ) {
	if ( i == r ) continue;
	DIST[i] = G[r][i];
	NEIGH[i] = r;
    }

    int ans = 0;

    while ( size_mst < n ) {
	int u = 0;
	int min_dist = INF;
	// ????°????????????¢???
	for ( int i = 0; i < n; i++ ) {
	    if ( !MST[i] ) {
		if ( DIST[i] < min_dist ) {
		    u = i;
		    min_dist = DIST[i];
		}
	    }
	}

	ans += min_dist;
	
	MST[u] = true;
	size_mst++;

	// MST??¨????????¢?????´??°
	for ( int i = 0; i < n; i++ ) {
	    if ( !MST[i] ) {
		if ( G[u][i] < DIST[i] ) {
		    DIST[i] = G[u][i];
		    NEIGH[i] = u;
		}
	    }
	}
    }

    printf("%d\n", ans);

    return 0;
}