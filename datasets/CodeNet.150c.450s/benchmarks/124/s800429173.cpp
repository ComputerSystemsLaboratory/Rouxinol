#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
typedef pair<int, int> P;
#define MAX_N (105)
#define MAX_C (100010)
#define INF (MAX_N * MAX_C)
vector<P> G[MAX_N];
int dist[MAX_N];
bool arrived[MAX_N];

int main()
{
    int n;
    scanf("%d", &n);
    
    for ( int i = 0; i < n; i++ ) {
	int u, k;
	scanf("%d %d", &u, &k);
	for ( int j = 0; j < k; j++ ) {
	    int v, c;
	    scanf("%d %d", &v, &c);
	    G[u].push_back( make_pair(v, c) );
	}
    }
    
    for ( int i = 0; i < n; i++ ) {
	dist[i] = INF;
    }

    dist[0] = 0;

    while ( true ) {
	int min_dist = INF;
	int u = -1;
	for ( int i = 0; i < n; i++ ) {
	    if ( !arrived[i] ) {
		if ( min_dist > dist[i] ) {
		    min_dist = dist[i];
		    u = i;
		}
	    }
	}
	
	if ( min_dist == INF ) break;
	arrived[u] = true;

	for ( int i = 0; i < G[u].size(); i++ ) {
	    P p = G[u][i];
	    int v = p.first;
	    int c = p.second;

	    if ( !arrived[v] ) {
		dist[v] = min( dist[v], dist[u] + c );
	    }
	}
    }

    for ( int i = 0; i < n; i++ ) {
	printf("%d %d\n", i, dist[i]);
    }

    return 0;
}