#include <stdio.h>
#define MAX_N (105)

int n;
int G[MAX_N + 1][MAX_N + 1];
int main()
{
    scanf("%d", &n);
    
    for ( int i = 0; i < n; i++ ) {
	int u, k;
	scanf("%d %d", &u, &k);
	for ( int j = 0; j < k; j++ ) {
	    int v;
	    scanf("%d", &v);
	    G[u][v] = 1;
	}
    }

    for ( int i = 1; i <= n; i++ ) {
	for ( int j = 1; j <= n; j++ ) {
	    printf("%d%c", G[i][j], ( j==n ) ? '\n' : ' ');
	}
    }
    
    return 0;
}