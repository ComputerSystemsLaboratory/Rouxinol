#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i = 0; i < n; i++)
typedef long long ll;
// Welcome to my source code!

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int key) {
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = new Node;
    z->key = key;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL) {
        y = x;
        if (z->key < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    z->parent = y;

    if (y == NIL) {
        root = z;
    } else {
        if (z->key < y->key) {
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

void inorder(Node *u) {
    if (u == NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u) {
    if (u == NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main() {
    int m, k;
    string com;
    cin >> m;

    REP(i,m) {
        cin >> com;
        if (com == "insert") {
            cin >> k;
            insert(k);
        } else {
            inorder(root);
            cout << '\n';
            preorder(root);
            cout << endl;
        }
    }
}
