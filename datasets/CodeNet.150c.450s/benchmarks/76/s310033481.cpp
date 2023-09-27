#include<stdio.h>
#include<string.h>
#include<iostream>
#include<memory>
using namespace std;

typedef struct Node {
    int key;
    Node *parent, *left, *right;
} Node;

Node *NIL, *root;

void inorder(Node *u) {
    if (u==NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u) {
    if (u==NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

void insert(int k) {
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = new Node;
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    while (x!=NIL) {
        y=x;
        if (z->key < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    z->parent = y;
    if (y==NIL) root = z;
    else {
        if (z->key < y->key) {
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

bool Find(int k) {
    Node *x = root;
    while (x!=NIL) {
        if (x->key == k) return true;
        if (x->key > k) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    return false;
}

int main() {
    int i, n, x;
    string com;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        cin >> com;
        if (com=="insert") {
            scanf("%d", &x);
            insert(x);
        } else if (com=="find") {
            scanf("%d", &x);
            if (Find(x)) printf("yes\n");
            else printf("no\n");
        } else if (com=="print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }

    return 0;
}
