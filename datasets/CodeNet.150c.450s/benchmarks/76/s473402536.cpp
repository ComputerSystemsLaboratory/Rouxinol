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

Node *find(int k) {
    Node *x = root;
    while (x!=NIL) {
        if (x->key == k) return x;
        if (x->key > k) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    return NIL;
}

Node *getSuccessor(Node *z) {
    z = z->right;
    while (z->left!=NIL) z=z->left;
    return z;
}

void Delete(int k) {
    Node *x, *y, *z;
    z = find(k);
    y = z->parent;
    x = NIL;

    if (z->left==NIL && z->right==NIL) {
        if (y->left==z) y->left=NIL;
        else if (y->right==z) y->right=NIL;
    } else if (z->left==NIL || z->right==NIL) {
        if (z->left!=NIL) x=z->left;
        else x=z->right;
        x->parent=y;
        if (y->left==z) {
            y->left=x;
        } else if (y->right==z) {
            y->right=x;
        }
    } else {
        x = getSuccessor(z);
        if (x->parent==z) {
            if (y->left==z) y->left=x;
            else y->right=x;
            x->parent=y;
            x->left=z->left;
        } else {
            x->parent->left=x->right;
            x->right->parent=x->parent;
            if (z->parent->left==z) {
                z->parent->left=x;
            } else if (z->parent->right==z) {
                z->parent->right=x;
            }
            x->left=z->left;
            x->right=x->right;
        }
    }

    if (y==NIL) root=x;
    delete z;
}

int main() {
    int i, n, x;
    Node *t;
    string com;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        cin >> com;
        if (com=="insert") {
            scanf("%d", &x);
            insert(x);
        } else if (com=="find") {
            scanf("%d", &x);
            t = find(x);
            if (t!=NIL) printf("yes\n");
            else printf("no\n");
        } else if (com=="print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        } else if (com=="delete") {
            scanf("%d", &x);
            Delete(x);
        }
    }

    return 0;
}
