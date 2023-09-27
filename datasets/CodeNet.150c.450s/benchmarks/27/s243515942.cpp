#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node *NIL, *root = NIL;


void insert(int k) {
    Node *z,*y = NIL,*r = root;

    z = (Node*)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    if ( r == NIL ) {
        root = z;
        return;
    }

    while ( r != NIL ) {
        y = r;
        if ( k < r->key) r = r->left;
        else r = r->right;
    }

    z->parent = y;
    if ( k < y->key ) y->left = z;
    else y->right = z;
}

void inorder(Node*u) {
    if ( u == NIL ) return;
    inorder(u->left);
    cout << ' ' << u->key;
    inorder(u->right);
}

void preorder(Node *u) {
    if ( u == NIL ) return;
    cout << ' ' << u->key;
    preorder(u->left);
    preorder(u->right);
}


int main() {
    int n,i,temp;
    char a[20];
   cin >> n;
    for ( i = 0; i < n; i++ ) {
        cin >> a;
        if ( strcmp(a,"insert") == 0 ) {
             scanf("%d",&temp);
            insert(temp);
        }
        else {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }

}

