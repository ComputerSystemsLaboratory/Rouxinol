#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};
Node *root, *NIL;

void insert(int k) {
    Node *y = NIL; //xの親
    Node *x = root;
    Node *z;
    z = (Node *)malloc(sizeof(Node));
    z->key = k;
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

string find(int tgt) {
    Node *x = root;
    while (x != NIL) {
        if (tgt == x->key) {
            return "yes";
        } else if (tgt < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    return "no";
}

void inOrder(Node *u) {
    if (u == NIL) return;
    inOrder(u->left);
    cout << " " << u->key;
    inOrder(u->right);
}

void preOrder(Node *u) {
    if (u == NIL) return;
    cout << " " << u->key;
    preOrder(u->left);
    preOrder(u->right);
}

int main() {
    int m, k;
    cin >> m;
    string order;
    for (int i = 0; i < m; i++) {
        cin >> order;
        if (order == "insert") {
            cin >> k;
            insert(k);
        }
        if (order == "print") {
            inOrder(root);
            cout << endl;
            preOrder(root);
            cout << endl;
        }
        if (order == "find") {
            cin >> k;
            cout << find(k) << endl;
        }
    }

    return 0;
}
