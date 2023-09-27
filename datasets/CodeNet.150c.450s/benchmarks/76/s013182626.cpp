#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <vector>
using namespace std;


struct Node {
    int key;
    Node *parent;		// ???
    Node *left;			// ?????????
    Node *right;		// ?????????
};

Node *root, *NIL;

void insert( int k );

bool find( Node *node, int k );

void PreOrder( Node *node );

void InOrder( Node *node );

void freeTree( Node *node );

int main()
{
    int n;

    scanf("%d", &n);
    
    for ( int i = 0; i < n; i++ ) {
	char str[100];
	scanf("%s", str);
	if ( !strcmp( str, "insert" ) ) {
	    int d;
	    scanf("%d", &d);
	    insert( d );
	}
	else if ( !strcmp( str, "find" ) ) {
	    int d;
	    scanf("%d", &d);
	    if ( find( root, d ) ) {
		printf("yes\n");
	    }
	    else {
		printf("no\n");
	    }
	}
	else if ( !strcmp( str, "print" ) ) {
	    InOrder( root );
	    printf("\n");

	    PreOrder( root );
	    printf("\n");
	}
    }

    freeTree( root );

    return 0;
}




void insert( int k )
{
    Node *p_y = NIL;		// ?????¨??????????????????????£?????¨??????????
    Node *p_x = root;
    
    Node *p_z = (Node *)malloc( sizeof( Node ) );
    p_z->parent = NIL;
    p_z->left   = NIL;
    p_z->right  = NIL;
    p_z->key    = k;

    while ( p_x != NULL ) {
	p_y = p_x;
	if ( k < p_x->key ) { // ???
	    p_x = p_x->left;
	}
	else {
	    p_x = p_x->right;
	}
    }

    p_z->parent = p_y;

    if ( p_y == NULL ) {
	root = p_z;
    }
    else if ( p_z->key < p_y->key ) {
	p_y->left = p_z;
    }
    else {
	p_y->right = p_z;
    }
}


bool find( Node *node, int k )
{
    if ( node == NULL ) {
	return false;
    } 
    else {
	if ( k == node->key ) {
	    return true;
	}
	else if ( k < node->key ) {
	    return find( node->left, k );
	}
	else if ( k > node->key ) {
	    return find( node->right, k );
	}
    }
}

void PreOrder( Node *node )
{
    if ( node != NULL ) {
	printf(" %d", node->key);
	PreOrder( node->left );
	PreOrder( node->right );
    }
}


void InOrder( Node *node )
{
    if ( node != NULL ) {
	InOrder( node->left );
	printf(" %d", node->key);
	InOrder( node->right );
    }
}

void freeTree( Node *node )
{
    if ( node != NULL ) {
	freeTree( node->left );
	freeTree( node->right );
	free( node );
    }
}