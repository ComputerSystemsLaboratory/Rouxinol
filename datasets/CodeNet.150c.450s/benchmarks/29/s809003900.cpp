#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int key;
    struct node *prev, *next;
};

typedef struct node Node;

void init();

void insertNode( int key );

void deleteNode( Node *t );

void deleteFirst();

void deleteLast();

void deleteKey( int key );

Node* listSearch( int key );

Node *nil;

void printList();

int main()
{
    int i;
    int N;
    Node *n;

    scanf("%d", &N);
    init();

    for ( i = 0; i < N; i++ ) {
	char s[100];
	int d;
	scanf("%s", s);
	if ( !strcmp( s, "insert" ) ) {
	    scanf("%d", &d);
	    insertNode( d );
	}
	else if ( !strcmp( s, "delete") ) {
	    scanf("%d", &d);
	    deleteKey( d );
	}
	else if ( !strcmp( s, "deleteFirst" ) ) {
	    deleteFirst();
	}
	else if ( !strcmp( s, "deleteLast" ) ) {
	    deleteLast();
	}
    }
    
    printList();

    return 0;
}


void init()
{
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}



void insertNode( int key )
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->key = key;
    // ???????????´??????????´??????????
    nil->next->prev = n;
    n->next = nil->next;
    nil->next = n;
    n->prev = nil;
}

void deleteNode( Node *t )
{
    if ( t == nil ) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteFirst()
{
    deleteNode( nil->next );
}

void deleteLast()
{
    deleteNode( nil->prev );
}

void deleteKey( int key )
{
    deleteNode( listSearch( key ) );
}

Node* listSearch( int key )
{
    Node *cur = nil->next;
    while ( cur != nil && cur->key != key ) {
	cur = cur->next;
    }
    
    return cur;
}


void printList()
{
    int i;
    Node *cur = nil->next;
    for ( i = 0; ; i++ ) {
	if ( cur == nil ) {
	    break;
	}
	if ( i != 0 ) {
	    printf(" ");
	}
	printf("%d", cur->key);
	cur = cur->next;
    }
    printf("\n");
}