#include <cstdio>
#include <vector>
#include <queue>

using namespace std;
#define MAX_N (100010)
int n;
int m;
int q;
vector<int> G[MAX_N];
int id[MAX_N];
int cur_id;

void bfs( int cur ) {
    queue< int > Q;
    Q.push( cur );
    id[cur] = cur_id;
    while ( !Q.empty() ) {
	int v = Q.front(); Q.pop();
	for ( int i = 0; i < G[v].size(); i++ ) {
	    int next = G[v][i];
	    if ( id[next] == -1 ) {
		id[next] = cur_id;
		Q.push( next );
	    }
	}
    }

    return;
}

int main()
{
    scanf("%d %d", &n, &m);

    for ( int i = 0; i < m; i++ ) {
	int s, t;
	scanf("%d %d", &s, &t);
	G[s].push_back( t );
	G[t].push_back( s );
    }

    for ( int i = 0; i < n; i++ ) id[i] = -1;
    cur_id = 0;    

    for ( int i = 0; i < n; i++ ) {
	if ( id[i] == -1 ) { 
	    bfs( i );
	    cur_id++;
	}
    }

    scanf("%d", &q);


    for ( int i = 0; i < q; i++ ) {
	int s, t;
	scanf("%d %d", &s, &t);
	if ( id[s] == id[t] ) printf("yes\n");
	else printf("no\n");
    }

    return 0;
}