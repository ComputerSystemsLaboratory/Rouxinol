#include <iostream>
#include <stdio.h>
#include <string>

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;
int n;

void insert(int val) {
    Node *x = root;
    Node *y = NIL;
    Node *z;
    
    z = new Node();
    z->key = val;
    z->left = NIL;
    z->right = NIL;
    
    while (x != NIL) {
        y = x;
        if (x->key > val) {
            x = x->left;
        } else if (x->key <= val) {
            x = x->right;
        }
    }
    
    z->parent = y;
    if (y == NIL) {
        root = z;
    } else if (y->key > z->key) {
        y->left = z;
    } else if (y->key <= z->key) {
        y->right = z;
    }
    
}

Node * Find(Node *u, int val) {
    while (u != NIL) {
        if (u->key == val) return u;
        
        if (u->key > val) {
            u = u->left;
        } else if ( u->key <= val ) {
            u = u->right;
        }
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
        } else if (moji[0] == 'p') {
            print();
        } else if (moji[0] == 'f') {
            scanf("%d", &val);
            Node *u = Find(root, val);
            if (u == NIL) printf("no\n");
            else printf("yes\n");
        }
    }
    
    return 0;
}

