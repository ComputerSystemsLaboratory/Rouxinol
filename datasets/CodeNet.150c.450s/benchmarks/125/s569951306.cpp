#include <cstdio>
#include <vector>

using namespace std;

#define MAX_N (105)

vector<int> G[MAX_N];
bool arrived[MAX_N];
int d[MAX_N];
int f[MAX_N];
int n;
int t;
void dfs( int cur ) {
    t++;
    d[cur] = t;

    for ( int i = 0; i < G[cur].size(); i++ ) {
	int next = G[cur][i];
	if ( !arrived[next] ) {
	    arrived[next] = true;
	    dfs( next );
	}
    }

    t++;
    f[cur] = t;

    return;
}

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
	    G[u].push_back(v);
	}
    }

    t = 0;
    for ( int i = 0; i < n; i++ ) {
	if ( !arrived[i] ) {
	    arrived[i] = true;
	    dfs(i);
	}
    }


    for ( int i = 0; i < n; i++ ) {
	printf("%d %d %d\n", i+1, d[i], f[i]);
    }

    return 0;
}