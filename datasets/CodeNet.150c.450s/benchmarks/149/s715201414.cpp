#include <stdio.h>
#define MAX_N (10010)
int parent[MAX_N];
int n;
int q;

int search_root(int x)
{
    if ( x == parent[x] ) return x;
    else return parent[x] = search_root(parent[x]);
}

void unite(int x, int y)
{
    int root_x = search_root(x);
    int root_y = search_root(y);
    
    parent[root_y] = root_x;
}

bool same(int x, int y)
{
    int root_x = search_root(x);
    int root_y = search_root(y);

    return (root_x == root_y);
}

int main() 
{
    scanf("%d %d", &n, &q);
    
    for ( int i = 0; i < n; i++ ) parent[i] = i;

    for ( int i = 0; i < q; i++ ) {
	int com, x, y;
	scanf("%d %d %d", &com, &x, &y);
	if ( com == 0 ) {	// unite
	    unite(x, y);
	}
	else {			// same
	    if ( same(x, y) ) {
		printf("1\n");
	    }
	    else {
		printf("0\n");
	    }
	}
    }

    return 0;
}