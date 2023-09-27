#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

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
        if (z->key < x->key) x = x->left;
        else x = x->right;
    }
    z->parent = y;

    if (y == NIL) {
        root = z;
    }
    else {
        if (z->key < y->key) y->left = z;
        else y->right = z;
    }
}

Node *find(Node *u, int k) {
    while (u != NIL && u->key != k) {
        u = (u->key < k ? u->right: u ->left);
    }
    return u;
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


int main(void) {
    int n, i, k;
    string com;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        cin >> com;
        if (com == "insert") {
            scanf("%d", &k);
            insert(k);
        }
        else if (com == "find") {
            scanf("%d", &k);
            Node *x = find(root, k);
            if (x != NIL) printf("yes\n");
            else printf("no\n");
        }
        else if (com == "print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }

    return 0;
}