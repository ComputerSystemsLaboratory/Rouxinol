#include <stdio.h>

#define MAX_N (105)
#define INF (10000)
int G[MAX_N][MAX_N];
int N;

int dist[MAX_N];
bool arrived[MAX_N];

int prim()
{
    int ret = 0;
    for ( int i = 0; i < N; i++ ) {
	arrived[i] = false;
	dist[i] = INF;
    }

    dist[0] = 0;

    while ( true ) {
	int min_dist = INF;
	int u = 0;
	for ( int i = 0; i < N; i++ ) {
	    if ( !arrived[i] && dist[i] < min_dist ) {
		min_dist = dist[i];
		u = i;
	    }
	}
	
	if ( min_dist == INF ) break;

	ret += dist[u];
	arrived[u] = true;

	for ( int i = 0; i < N; i++ ) {
	    if ( !arrived[i] && (G[u][i] != -1) && (dist[i] > G[u][i]) ) {
		dist[i] = G[u][i];
	    }
	}
    }

    return ret;
}

int main()
{
    int ans = 0;
    scanf("%d", &N);

    for ( int i = 0; i < N; i++ ) {
	for ( int j = 0; j < N; j++ ) {
	    scanf("%d", &G[i][j]);
	}
    }

    ans = prim();

    printf("%d\n", ans);

    return 0;
}