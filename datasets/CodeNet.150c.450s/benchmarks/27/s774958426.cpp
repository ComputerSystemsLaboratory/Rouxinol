#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    Node *p_parent;
    Node *p_left;
    Node *p_right;
};
Node *p_r;
Node *NIL;
int m;

void insert( Node *p_z ) {
    Node *p_x = p_r;
    Node *p_y = NIL;

    while ( p_x != NIL ) {
	p_y = p_x;
	if ( p_z->key < p_x->key ) {
	    p_x = p_x->p_left;
	}
	else {
	    p_x = p_x->p_right;
	}
    }

    p_z->p_parent = p_y;
    if ( p_y == NIL ) p_r = p_z;
    else if ( p_z->key < p_y->key ) p_y->p_left = p_z;
    else p_y->p_right = p_z;

}

void preOrder(Node *p_cur) {
    if ( p_cur == NIL ) return;

    printf( " %d", p_cur->key );
    preOrder( p_cur->p_left );
    preOrder( p_cur->p_right );

    return;
}



void inOrder(Node *p_cur) {
    if ( p_cur == NIL ) return;
    inOrder( p_cur->p_left );
    printf( " %d", p_cur->key );
    inOrder( p_cur->p_right );

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

	    p_z->p_parent = p_z->p_left = p_z->p_right = NIL;
	    p_z->key = d;
	    insert( p_z );
	}
	else {
	    inOrder(p_r);
	    printf("\n");
	    preOrder(p_r);
	    printf("\n");
	}
    }

    return 0;
}