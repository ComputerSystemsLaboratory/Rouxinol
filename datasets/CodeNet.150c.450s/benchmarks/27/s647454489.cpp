#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k) {
    Node *y = NIL; // ポインタにポインタを代入, tmpであるxの親
    Node *x = root; // tmp, rootからスタートして、zが入る位置を探す
    Node *z;


    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x!= NIL) {
        y = x;
        if (z->key < x->key) {
            x = x->left;
        }
        else {
            x = x->right;
        }
    }
    z->parent = y;
    if (y == NIL) {
        root = z;
    }
    else {
        if (z->key < y->key) {
            y->left = z;
        }
        else {
            y->right = z;
        }
    }
}

void inorder(Node *u) {
    if (u == NIL) {
        return;
    }

    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);
}

void preorder(Node *u) {
    if (u == NIL) {
        return;
    }

    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}

int main() {

    int N;
    cin >> N;

    string command;
    int node_n;

    for (int i = 0; i < N; i++)
    {
        cin >> command;

        if (command == "insert") {
            cin >> node_n;
            insert(node_n);
        }
        else {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
}

