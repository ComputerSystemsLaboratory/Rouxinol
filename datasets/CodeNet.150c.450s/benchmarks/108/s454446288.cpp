#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

#define MAX_N (105)

int n;
bool G[MAX_N][MAX_N];
int dist[MAX_N];
int main()
{
    queue<int> q;
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ) {
	int u, k;
	scanf("%d %d", &u, &k);
	for ( int j = 0; j < k; j++ ) {
	    int d;
	    scanf("%d", &d);
	    G[u][d] = true;
	}
    }

    memset(dist, -1, (n+1) * sizeof(int));

    dist[1] = 0;
    q.push(1);
    
    while ( !q.empty() ) {
	int cur = q.front(); q.pop();
	for ( int i = 1; i <= n; i++ ) {
	    if ( G[cur][i] && (dist[i] == -1) ) {
		dist[i] = dist[cur] + 1;
		q.push(i);
	    }
	}
    }

    for ( int i = 1; i <= n; i++ ) {
	printf("%d %d\n", i, dist[i]);
    }

    return 0;
}