#include <cstdio>
using namespace std;
#define MAX_N (105)
bool G[MAX_N][MAX_N];
int main()
{
    int n;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
	int u, k;
	scanf("%d %d", &u, &k);
	for ( int j = 0; j < k; j++ ) {
	    int v;
	    scanf("%d", &v);
	    G[u-1][v-1] = true;
	}
    }

    for ( int i = 0; i < n; i++ ) {
	for ( int j = 0; j < n; j++ ) {
	    printf("%d%c", (int)G[i][j], (j == n - 1) ? '\n' : ' ');
	}
    }

    return 0;
}