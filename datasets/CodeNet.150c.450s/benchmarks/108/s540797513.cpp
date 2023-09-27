#include <cstdio>
#include <queue>
#include <vector>

using namespace std;
#define MAX_N (105)
typedef pair<int, int> P;

int n;
vector<int> G[MAX_N];
int dist[MAX_N];
int main()
{
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
	int u, k;
	scanf("%d %d", &u, &k);
	u--;

	for ( int j = 0; j < k; j++ ) {
	    int v;
	    scanf("%d", &v);
	    v--;
	    G[u].push_back( v );
	}
    }

    for ( int i = 0; i < n; i++ ) dist[i] = -1;
    dist[0] = 0;

    queue<int> Q;
    Q.push( 0 );

    while ( !Q.empty() ) {
	int cur = Q.front();
	Q.pop();
	for ( int i = 0; i < G[cur].size(); i++ ) {
	    int next = G[cur][i];
	    if ( dist[next] == -1 ) {
		dist[next] = dist[cur] + 1;
		Q.push( next );
	    }
	}
    }

    for ( int i = 0; i < n; i++ ) {
	printf("%d %d\n", i+1, dist[i]);
    }

    return 0;
}