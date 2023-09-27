#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

#define MAX_V (105)
#define INF (2e9 + 5)
ll G[MAX_V][MAX_V];

int main()
{
    int V, E;

    scanf("%d %d", &V, &E);
    for ( int i = 0; i < V; i++ ) {
	for ( int j = 0; j < V; j++ ) {
	    G[i][j] = ( i == j ) ? 0 : INF;	// ?????????
	}
    }
    
    for ( int i = 0; i < E; i++ ) {
	int s, t, d;
	scanf("%d %d %d", &s, &t, &d);
	// ????????°??????
	G[s][t]  = d;
    }

    for ( int k = 0; k < V; k++ ) {
	for ( int i = 0; i < V; i++ ) {
	    if ( G[i][k] == INF ) continue;
	    for ( int j = 0; j < V; j++ ) {
		if ( G[k][j] == INF ) continue;
		G[i][j] = min( G[i][j], G[i][k] + G[k][j] );
	    }
	}
    }
    
    // ?????????????????????????¢??????????
    bool negative_cycle = false;
    for ( int i = 0; i < V; i++ ) {
	if ( G[i][i] < 0 ) {
	    negative_cycle = true;
	    break;
	}
    }
    
    if ( negative_cycle ) printf("NEGATIVE CYCLE\n");
    else {
	for ( int i = 0; i < V; i++ ) {
	    for ( int j = 0; j < V; j++ ) {
		if ( G[i][j] == INF ) printf("INF");
		else printf("%lld", G[i][j]);
		printf("%c", (j == V-1) ? '\n' : ' ');
	    }
	}
    }
    return 0;
}