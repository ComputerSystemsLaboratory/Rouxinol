#include <iostream>
#include <stdio.h>
#include <string.h>

#define MAX 100
//#define NIL -1

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;
int n;

void insert(int val) {
    Node *y = NIL;
    Node *x = root;
    Node *z = new Node();
    
    z->key = val;
    z->left = NIL;
    z->right = NIL;
    
    while (x != NIL) {
        y = x;
        if (z->key > x->key) {
            x = x->right;
        } else {
            x = x->left;
        }
    }
    z->parent = y;
    
    if ( y == NIL ) {
        root = z;
    } else if ( y->key > z->key ) {
        y->left = z;
    } else {
        y->right = z;
    }
}

void preorder(Node *u) {
    if (u == NIL) return;
    
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

void inorder(Node *u) {
    if (u == NIL) return;
    
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void print() {
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
}

int main() {
    int val;
    char moji[10];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", moji);
        if (moji[0] == 'i') {
            scanf("%d", &val);
            insert(val);
        } else {
            print();
        }
    }
    
    return 0;
}