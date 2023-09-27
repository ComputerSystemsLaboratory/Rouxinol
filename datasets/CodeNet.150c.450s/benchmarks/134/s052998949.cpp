#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <queue>
#include <string>
#include <set>
#include <vector>

#define FOR(i, l, r) for (i = (l); i < r; i++ )

using namespace std;
typedef long long ll;
typedef struct {
    int p;
    int l;
    int r;
} Node;
#define NIL (-1)
#define MAX_N (30)

int n;
Node N[MAX_N];

void preorder( int id ) {
    if ( id == NIL ) return;
    printf(" %d", id);
    preorder( N[id].l );
    preorder( N[id].r );
}

void inorder( int id ) {
    if ( id == NIL ) return;
    inorder( N[id].l );
    printf(" %d", id);
    inorder( N[id].r );
}

void postorder( int id ) {
    if ( id == NIL ) return;
    postorder( N[id].l );
    postorder( N[id].r );
    printf(" %d", id);
}


int main()
{
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
	N[i].p = N[i].l = N[i].r = NIL;
    }

    for ( int i = 0; i < n; i++ ) {
	int id;
	scanf("%d", &id);
	scanf("%d %d", &N[id].l, &N[id].r);
	if ( N[id].l != NIL ) N[N[id].l].p = id;
	if ( N[id].r != NIL ) N[N[id].r].p = id;
    }

    // find the root.
    int root = NIL;
    for ( int i = 0; i < n; i++ ) {
	if ( N[i].p == NIL ) {
	    root = i;
	    break;
	}
    }


    printf("Preorder\n");
    preorder( root );
    printf("\n");

    printf("Inorder\n");
    inorder( root );
    printf("\n");

    printf("Postorder\n");
    postorder( root );
    printf("\n");

    return 0;
}