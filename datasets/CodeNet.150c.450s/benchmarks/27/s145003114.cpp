#include <iostream>
#include <string>
#include <stdio.h>

struct Node {
    int key;
    Node *parent, *left, *right;
};

int n;
Node *root, *NIL;

void insert ( int val ) {
    Node *x = root;
    Node *y = NIL;
    Node *z;
    
    z = new Node();
    z->key = val;
    z->left = NIL;
    z->right = NIL;
    
    while (x != NIL) {
        y = x;
        if ( x->key > z->key) {
            x = x->left;
        } else if ( x->key <= z->key ) {
            x = x->right;
        }
    }
    
    z->parent = y;
    if (z->parent == NIL) {
        root = z;
    } else if ( z->key < y->key) {
        y->left = z;
    } else if ( z->key >= y->key ) {
        y->right = z;
    }
    
//    delete z;
}


void inorder( Node *u ) {
    if ( u == NIL ) return;
    
    inorder( u->left );
    printf( " %d", u->key );
    inorder( u->right );
}

void preorder( Node *u ) {
    if ( u == NIL ) return;
    
    printf(" %d", u->key);
    preorder( u->left );
    preorder( u->right );
}

void print() {
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
}

int main() {
    char moji[10];
    int val;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", moji);
        if (moji[0] == 'i') {
            scanf("%d", &val);
            insert(val);
        } else if (moji[0] == 'p') {
            print();
        }
    }
    
    
    return 0;
}

