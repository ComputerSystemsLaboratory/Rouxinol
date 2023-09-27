#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *right;
    Node *left;
    Node *parent;
};

Node *root, *NIL;

void Insert(int k);
void Inorder(Node *u);
void Preorder(Node *u);
Node* Find(Node *x, int k);

int main() {
    int n, k;
    cin >> n;
    string com;
    for ( int i = 0; i < n; i++ ) {
        cin >> com;
        if ( "insert" == com ) {
            cin >> k;
            Insert(k);
        } else if ( "find" == com ) {
            cin >> k;
            if ( NIL == Find(root, k) ) {
                cout << "no\n";
            } else {
                cout << "yes\n";
            }
        } else if ( "print" == com ) {
            Inorder(root);
            cout << '\n';
            Preorder(root);
            cout << '\n';
        }
    }
    
    return 0;
}

void Insert(int k) {
    Node *y = NIL;
    Node *x = root;
    Node *z;
    
    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    
    while ( x != NIL ) {
        y = x;
        if ( z->key > x->key ) {
            x = x->right;
        } else {
            x = x->left;
        }
    }
    
    z->parent = y;
    if ( NIL == y ) {
        root = z;
    } else if ( z->key > y->key ) {
        y->right = z;
    } else {
        y->left = z;
    }
}

void Inorder(Node *u) {
    if ( NIL == u ) return;
    Inorder(u->left);
    printf(" %d", u->key);
    Inorder(u->right);
}

void Preorder(Node *u) {
    if ( NIL == u ) return;
    printf(" %d", u->key);
    Preorder(u->left);
    Preorder(u->right);
}

Node* Find(Node *x, int k) {
    while ( x != NIL && x->key != k ) {
        if ( k > x->key ) {
            x = x->right;
        } else {
            x = x->left;
        }
    }
    return x;
}

/*
10
insert 30
insert 88
insert 12
insert 1
insert 20
find 20
insert 17
insert 25
find 16
print
 */