#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};


Node *NIL, *root;

void insert(int k) { //insert k
    Node *y = NIL;
    Node *x = root;

    Node *z = (Node *) malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while ( x!= NIL ) {
        y = x;
        if ( z->key < x->key ) {
            x = x->left;
        } else {
            x = x-> right;
        }
    }

    z->parent = y;

    if(y == NIL) {
        root = z;
    }else if(z->key < y->key) {
        y->left = z;
    }else {
        y->right = z;
    }
}

void inOrder(Node *u) {
    if( u == NIL ) return;
    inOrder(u->left);
    printf(" %d",u->key);
    inOrder(u->right);
}

void preOrder(Node *u) {
    if( u == NIL ) return;
    printf(" %d", u->key);
    preOrder(u->left);
    preOrder(u->right);
}

Node *find(Node *u, int k) {
    while (u!= NIL && k != u->key) {
        if ( k < u->key ) {
            u = u->left;
        }else {
            u = u->right;
        }
    }
    return u;
}

int main(void) {
    int k,n,i;
    Node *a;
    string com;
    scanf("%d", &n);
    for (i = 0 ; i < n ; i++ ) {
        cin >> com;
        if ( com == "insert") {
            scanf("%d", &k);

            insert(k);
        }else if (com == "print") {
            inOrder(root);
            printf("\n");
            preOrder(root);
            printf("\n");
        }else if (com == "find") {
            scanf("%d", &k);
            a = find(root, k);
            if (a != NIL) printf("%s","yes\n");
            else printf("%s","no\n");
        }
    }
    return 0;
}