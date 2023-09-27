#include <stdio.h>
#include <queue>
using namespace std;

#define MAX_N (105)
#define MAX_D (100010)
#define INF (MAX_N * MAX_D)

int n;

int G[MAX_N][MAX_N];
int dist[MAX_N];
bool arrived[MAX_N];

void dijkstra(int s)
{
    for ( int i = 0; i < n; i++ ) dist[i] = INF;

    dist[s] = 0;

    while ( true ) {
	int min_dist = INF;
	int index = -1;
	for ( int i = 0; i < n; i++ ) {
	    if ( !arrived[i] && dist[i] < min_dist ) {
		min_dist = dist[i];
		index = i;
	    }
	}
	
	if ( index == -1 ) break;
	arrived[index] = true;

	for ( int i = 0; i < n; i++ ) {
	    if ( !arrived[i] && G[index][i] != INF ) {
		if ( dist[i] > (dist[index] + G[index][i]) ) {
		    dist[i] = dist[index] + G[index][i];
		}
	    }
	}
    }
}


int main()
{
    scanf("%d", &n);

    for ( int i = 0; i < n; i++ ) {
	for ( int j = 0; j < n; j++ ) {
	    G[i][j] = INF;
	}
    }

    for ( int i = 0; i < n; i++ ) {
	int u, k;
	scanf("%d %d", &u, &k);

	for ( int j = 0; j < k; j++ ) {
	    int v, c;
	    scanf("%d %d", &v, &c);
	    G[u][v] = c;
	}
    }

    dijkstra(0);

    for ( int i = 0; i < n; i++ ) {
	printf("%d %d\n", i, dist[i]);
    }

    return 0;
}