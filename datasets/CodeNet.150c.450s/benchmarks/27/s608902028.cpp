#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

struct Node {
    int key;
    Node *right, *left, *parent;
};

Node *root, *Nil;

void insert(int key) {
    Node *y = Nil;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = key;
    z->left = Nil;
    z->right = Nil;

    while (x != Nil) {
        y = x;
        x = z->key < x->key ? x->left : x->right;
    }

    z->parent = y;
    if(y == Nil) {
        root = z;
    } else {
        if(z -> key < y->key) {
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

void preorder(Node *n) {
    if(n == Nil) {
        return;
    }
    printf(" %d", n->key);
    preorder(n->left);
    preorder(n->right);
}

void inorder(Node *n) {
    if(n == Nil) {
        return;
    }
    inorder(n->left);
    printf(" %d", n->key);
    inorder(n->right);
}


int main() {
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        if(str == "insert") {
            int nn;
            std::cin >> nn;
            insert(nn);
        } else if(str == "print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
    return 0;;
}

