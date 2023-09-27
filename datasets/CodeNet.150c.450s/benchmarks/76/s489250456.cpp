#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void preOrder(Node *n) {
    if (n == NIL) {
        return;
    }

    cout << " " << n->key;
    preOrder(n->left);
    preOrder(n->right);
}

void inOrder(Node *n) {
    if (n == NIL) {
        return;
    }

    inOrder(n->left);
    cout << " " << n->key;
    inOrder(n->right);
}

void print() {
    inOrder(root);
    cout << endl;
    preOrder(root);
    cout << endl;
}

void insert(int k) {
    Node *y = NIL;
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
    } else if (z->key < y->key) {
        y->left = z;
    } else {
        y->right = z;
    }
}

Node* find(int k) {
    Node *x = root;
    while (x != NIL && k != x->key) {
        if (k < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    return x;
}

int main() {
    int64_t N;
    cin >> N;
    for (int i=0; i < N; i++) {
        string op;
        cin >> op;
        if (op == "insert") {
            int64_t num;
            cin >> num;
            insert(num);
        } else if (op == "find") {
            int num;
            cin >> num;
            Node *x = find(num);
            if (x == NIL) {
                cout << "no" << endl;
            } else {
                cout << "yes" << endl;
            }
        } else {
            print();
        }
    }
    return 0;
}
