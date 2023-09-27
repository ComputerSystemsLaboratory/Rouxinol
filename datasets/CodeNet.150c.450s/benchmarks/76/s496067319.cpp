#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    Node *parent;
    Node *left;
    Node *right;
};
Node *root;
Node *NIL;
int m;

void insert( int key ) {
    Node *p_x = root;
    Node *p_y = NIL;
    Node *p_z = (Node *)malloc( sizeof(Node) );
    p_z->parent = p_z->left = p_z->right = NIL;
    p_z->key = key;

    while ( p_x != NIL ) {
	p_y = p_x;
	if ( p_z->key < p_x->key ) p_x = p_x->left;
	else p_x = p_x->right;
    }

    p_z->parent = p_y;
    if ( p_y == NIL ) root = p_z;
    else if ( p_z->key < p_y->key ) p_y->left = p_z;
    else p_y->right = p_z;
}

Node* find( int key ) {
    Node *x = root;
    
    while ( x != NIL && key != x->key ) {
	if ( key < x->key ) x = x->left;
	else x = x->right;
    }
    
    return x;
}

void preOrder(Node *p_cur) {
    if ( p_cur == NIL ) return;

    printf( " %d", p_cur->key );
    preOrder( p_cur->left );
    preOrder( p_cur->right );

    return;
}



void inOrder(Node *p_cur) {
    if ( p_cur == NIL ) return;
    inOrder( p_cur->left );
    printf( " %d", p_cur->key );
    inOrder( p_cur->right );

    return;
}

int main()
{
    scanf("%d", &m);

    for ( int i = 0; i < m; i++ ) {
	char str[100];

	scanf(" %s", str);

	if ( str[0] == 'i' ) {
	    int d;

	    Node *p_z = (Node *)malloc( sizeof(Node) );
	    scanf("%d", &d);

	    insert( d );
	}
	else if ( str[0] == 'f' ) {
	    int d;
	    scanf("%d", &d);
	    if ( find( d ) == NIL ) printf("no\n");
	    else printf("yes\n");
	}
	else {
	    inOrder(root);
	    printf("\n");
	    preOrder(root);
	    printf("\n");
	}
    }

    return 0;
}